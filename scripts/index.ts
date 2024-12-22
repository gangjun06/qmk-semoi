import fs from "fs";
import { parse } from "csv-parse/sync";
import { QMK_KEYCODES, QMK_KEYCODES_REVERSE } from "./constants";

const FILE_PATH = "./semoi_map.csv";
const OUTPUT_PATH = "./semoi_map.h";

/**
 * 0. 종류 / 1. 번호 / 2. 표시되는 글자 / 3. 품사/어미 / 4. 초성 / 5. 중성 / 6. 종성 / 7. 기능키 / 8. 두벌식 / 9. 세모이약어 / 10. 세모이약어 딴중성 / 11. 세모이약어 딴종성 / 12. 세모이약어 딴중성x딴종성 / 13. 사용여부
 */
type CSVRecord = string[];

interface ProcessedRecords {
  description: string;
  두벌식: string[];
  세모이약어: string[];
  세모이약어_딴중성: string[];
  세모이약어_딴종성: string[];
  세모이약어_딴중성x딴종성: string[];
}

interface RecordsForTemplate {
  description: string;
  shortcut: string[];
  dubeolsikKeys: string[];
}

function loadCSVFile(path: string) {
  const input = fs.readFileSync(path, "utf-8");
  const inputWithoutHeader = input.split("\n").slice(1).join("\n");

  return parse(inputWithoutHeader, {
    columns: false,
    skip_empty_lines: true,
    skip_records_with_error: true,
  }) as CSVRecord[];
}

function processRecords(records: CSVRecord[]) {
  const filteredRecords = records.filter((record) => record[14] === "TRUE");

  function mapKeys(str: string) {
    const trimmedStr = str.trim();
    if (trimmedStr === "") return [];

    const result = trimmedStr
      .replace(/,/g, " ")
      .replace(/-/g, " ")
      .replace(/  /g, " ")
      .split(" ")
      .map((item) => {
        return QMK_KEYCODES[item as keyof typeof QMK_KEYCODES] ?? 99999;
      })
      .sort((a, b) => a - b)
      .map((item) => {
        return QMK_KEYCODES_REVERSE[item as keyof typeof QMK_KEYCODES_REVERSE];
      });

    return result;
  }

  const processedRecords = filteredRecords.map((record) => {
    return {
      description: `${record[1]}. ${record[0]} | ${record[2]} (초성 ${record[4]} / 중성 ${record[5]} / 종성 ${record[6]})`,
      두벌식: record[9]
        .trim()
        .replace(/ /g, ",")
        .replace(/S\(/g, "SFT(")
        .split(","),
      세모이약어: mapKeys(record[10]),
      세모이약어_딴중성: mapKeys(record[11]),
      세모이약어_딴종성: mapKeys(record[12]),
      세모이약어_딴중성x딴종성: mapKeys(record[13]),
    } satisfies ProcessedRecords;
  });

  return processedRecords;
}

function processRecordsForTemplate(records: ProcessedRecords[]) {
  const result: RecordsForTemplate[] = records
    .map((record) => {
      const base = {
        description: record.description,
        shortcut: record.세모이약어,
        dubeolsikKeys: record.두벌식,
      };

      return [
        base,
        ...(record.세모이약어_딴중성.length > 0
          ? [{ ...base, shortcut: record.세모이약어_딴중성 }]
          : []),
        ...(record.세모이약어_딴종성.length > 0
          ? [{ ...base, shortcut: record.세모이약어_딴종성 }]
          : []),
        ...(record.세모이약어_딴중성x딴종성.length > 0
          ? [{ ...base, shortcut: record.세모이약어_딴중성x딴종성 }]
          : []),
      ];
    })
    .flat();

  return result
    .filter((record) => record.shortcut.length > 0)
    .sort((a, b) => a.shortcut.length - b.shortcut.length);
}

function calculateShortcutSize(records: RecordsForTemplate[]) {
  return records.reduce(
    (sizes, record) => ({
      maxShortcutSize: Math.max(sizes.maxShortcutSize, record.shortcut.length),
      maxDubelsikSize: Math.max(
        sizes.maxDubelsikSize,
        record.dubeolsikKeys.length,
        record.shortcut.length
      ),
    }),
    { maxShortcutSize: 0, maxDubelsikSize: 0 }
  );
}

function createSemoiShortcutIndex(
  records: RecordsForTemplate[],
  maxShortcutSize: number
) {
  const semoiShortcutIndex = Array(maxShortcutSize + 1).fill(0);

  let lastCount = 0;
  records.forEach((record, index) => {
    const shortcutSize = record.shortcut.length;
    if (shortcutSize > lastCount) {
      semoiShortcutIndex[shortcutSize - 1] = index;
      lastCount = shortcutSize;
    }
  });
  semoiShortcutIndex[maxShortcutSize] = records.length;
  return semoiShortcutIndex;
}

const template = ({
  maxShortcutSize,
  maxDubelsikSize,
  semoiShortcutStr,
  semoiShortcutIndex,
  shortcutSize,
}: {
  maxShortcutSize: number;
  maxDubelsikSize: number;
  semoiShortcutStr: string;
  semoiShortcutIndex: number[];
  shortcutSize: number;
}) => `
#pragma once

#include "quantum.h"

#define SEMOI_SHORTCUT_SIZE ${maxShortcutSize}
#define SHORTCUT_DUBEOLSIK_SIZE ${maxDubelsikSize}

// 1000 0000
#define SHIFT_MASK 0x80
#define SFT(x) (SHIFT_MASK | (x))

typedef struct {
    const uint8_t shortcuts[SEMOI_SHORTCUT_SIZE];
    const uint8_t dubelsik[SHORTCUT_DUBEOLSIK_SIZE];
} SemoiShortcut;

#define SEMOI_SHORTCUT_COUNT ${shortcutSize}

const int semoi_shortcut_index[] = {${semoiShortcutIndex.join(",")}};

const SemoiShortcut semoi_shortcut[SEMOI_SHORTCUT_COUNT] = {
${semoiShortcutStr}
};
`;

async function main() {
  const records = loadCSVFile(FILE_PATH);
  const processedRecords = processRecords(records);
  const recordsForTemplate = processRecordsForTemplate(processedRecords);
  const { maxShortcutSize, maxDubelsikSize } =
    calculateShortcutSize(recordsForTemplate);

  const semoiShortcutIndex = createSemoiShortcutIndex(
    recordsForTemplate,
    maxShortcutSize
  );

  const semoiShortcutStr = recordsForTemplate
    .map(
      (record) =>
        `    // ${record.description}\n    {{${record.shortcut.join(
          ","
        )}},{${record.dubeolsikKeys.join(",")}}}`
    )
    .join(",\n");

  fs.writeFileSync(
    OUTPUT_PATH,
    template({
      semoiShortcutStr,
      semoiShortcutIndex,
      shortcutSize: recordsForTemplate.length,
      maxShortcutSize,
      maxDubelsikSize,
    })
  );
}

main();
