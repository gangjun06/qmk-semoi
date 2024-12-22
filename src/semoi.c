/**
 * https://getreuer.info/posts/keyboards/triggers/index.html#based-on-previously-typed-keys
 * https://gall.dcinside.com/mgallery/board/view/?id=mechanicalkeyboard&no=1484112
 */

#include "semoi.h"

#ifdef SEMOI_SHORTCUTS_ENABLE
#    include "semoi_shortcut.h"
#endif

#ifndef SEMOI_TIMEOUT_MS
#    define SEMOI_TIMEOUT_MS 300
#endif

#ifndef SEMOI_DEFER_TIME
#    define SEMOI_DEFER_TIME 30
#endif

#define SEMOI_BUFFER_SIZE 8 // Number of keys in `recent` buffer.

#ifdef CONSOLE_ENABLE
#    define DEBUG_PRINT(fmt, ...) uprintf(fmt, ##__VA_ARGS__)
#else
#    define DEBUG_PRINT(fmt, ...)
#endif

static const char PROGMEM code_to_name[] = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\', '#', ';', '\'', '`', ',', '.', '/',
};

static const char chosung_keys[]  = {KC_Y, KC_U, KC_I, KC_O, KC_H, KC_J, KC_K, KC_L, KC_N, KC_M};
static const char jungsung_keys[] = {
    KC_R, KC_T, KC_D, KC_F, KC_G, KC_C, KC_V, KC_B, KC_DOT,
};
static const char jongseong_keys[] = {KC_Q, KC_W, KC_E, KC_A, KC_S, KC_Z, KC_X, KC_SEMICOLON};

const SemoiLayout semoi_keymap[] = {
    // 초성
    {{KC_K, 0, 0}, {KC_R, 0}, CHOSUNG_TYPE}, // ㄱ
    {{KC_U, 0, 0}, {KC_S, 0}, CHOSUNG_TYPE}, // ㄴ
    {{KC_I, 0, 0}, {KC_E, 0}, CHOSUNG_TYPE}, // ㄷ
    {{KC_M, 0, 0}, {KC_F, 0}, CHOSUNG_TYPE}, // ㄹ
    {{KC_Y, 0, 0}, {KC_A, 0}, CHOSUNG_TYPE}, // ㅁ
    {{KC_O, 0, 0}, {KC_Q, 0}, CHOSUNG_TYPE}, // ㅂ
    {{KC_N, 0, 0}, {KC_T, 0}, CHOSUNG_TYPE}, // ㅅ
    {{KC_J, 0, 0}, {KC_D, 0}, CHOSUNG_TYPE}, // ㅇ
    {{KC_L, 0, 0}, {KC_W, 0}, CHOSUNG_TYPE}, // ㅈ
    {{KC_H, 0, 0}, {KC_G, 0}, CHOSUNG_TYPE}, // ㅎ

    {{KC_J, KC_K, 0}, {LSFT(KC_R), 0}, CHOSUNG_TYPE}, // ㄲ
    {{KC_J, KC_I, 0}, {LSFT(KC_E), 0}, CHOSUNG_TYPE}, // ㄸ
    {{KC_J, KC_O, 0}, {LSFT(KC_Q), 0}, CHOSUNG_TYPE}, // ㅃ
    {{KC_J, KC_N, 0}, {LSFT(KC_T), 0}, CHOSUNG_TYPE}, // ㅆ
    {{KC_J, KC_L, 0}, {LSFT(KC_W), 0}, CHOSUNG_TYPE}, // ㅉ
    {{KC_H, KC_L, 0}, {KC_C, 0}, CHOSUNG_TYPE},       // ㅊ
    {{KC_H, KC_K, 0}, {KC_Z, 0}, CHOSUNG_TYPE},       // ㅋ
    {{KC_H, KC_I, 0}, {KC_X, 0}, CHOSUNG_TYPE},       // ㅌ
    {{KC_H, KC_O, 0}, {KC_V, 0}, CHOSUNG_TYPE},       // ㅍ

    // 중성
    {{KC_F, 0, 0}, {KC_K, 0}, JUNGSUNG_TYPE},            // ㅏ
    {{KC_R, 0, 0}, {KC_J, 0}, JUNGSUNG_TYPE},            // ㅓ
    {{KC_C, 0, 0}, {KC_P, 0}, JUNGSUNG_TYPE},            // ㅔ
    {{KC_T, 0, 0}, {KC_U, 0}, JUNGSUNG_TYPE},            // ㅕ
    {{KC_V, 0, 0}, {KC_H, 0}, JUNGSUNG_TYPE},            // ㅗ
    {{KC_DOT, 0, 0}, {KC_H, 0}, JUNGSUNG_TYPE},          // ㅗ
    {{KC_B, 0, 0}, {KC_N, 0}, JUNGSUNG_TYPE},            // ㅜ
    {{KC_G, 0, 0}, {KC_M, 0}, JUNGSUNG_TYPE},            // ㅡ
    {{KC_D, 0, 0}, {KC_L, 0}, JUNGSUNG_TYPE},            // ㅣ
                                                         //
    {{KC_D, KC_F, 0}, {KC_O, 0}, JUNGSUNG_TYPE},         // ㅐ
    {{KC_DOT, KC_G, 0}, {KC_I, 0}, JUNGSUNG_TYPE},       // ㅑ
    {{KC_DOT, KC_T, 0}, {LSFT(KC_O), 0}, JUNGSUNG_TYPE}, // ㅒ
    {{KC_DOT, KC_C, 0}, {LSFT(KC_P), 0}, JUNGSUNG_TYPE}, // ㅖ
    {{KC_V, KC_C, 0}, {LSFT(KC_P), 0}, JUNGSUNG_TYPE},   // ㅖ
    {{KC_DOT, KC_F, 0}, {KC_H, KC_K}, JUNGSUNG_TYPE},    // ㅘ
    {{KC_V, KC_F, 0}, {KC_H, KC_K}, JUNGSUNG_TYPE},      // ㅘ
    {{KC_DOT, KC_D, 0}, {KC_H, KC_L}, JUNGSUNG_TYPE},    // ㅚ
    {{KC_V, KC_D, 0}, {KC_H, KC_L}, JUNGSUNG_TYPE},      // ㅚ
    {{KC_DOT, KC_V, 0}, {KC_Y, 0}, JUNGSUNG_TYPE},       // ㅛ
    {{KC_F, KC_R, 0}, {KC_Y, 0}, JUNGSUNG_TYPE},         // ㅛ
    {{KC_DOT, KC_R, 0}, {KC_N, KC_J}, JUNGSUNG_TYPE},    // ㅝ
    {{KC_B, KC_R, 0}, {KC_N, KC_J}, JUNGSUNG_TYPE},      // ㅝ
    {{KC_B, KC_C, 0}, {KC_N, KC_O}, JUNGSUNG_TYPE},      // ㅞ
    {{KC_B, KC_D, 0}, {KC_N, KC_L}, JUNGSUNG_TYPE},      // ㅟ
    {{KC_C, KC_D, 0}, {KC_N, KC_L}, JUNGSUNG_TYPE},      // ㅟ
    {{KC_DOT, KC_B, 0}, {KC_B, 0}, JUNGSUNG_TYPE},       // ㅠ
    {{KC_V, KC_B, 0}, {KC_B, 0}, JUNGSUNG_TYPE},         // ㅠ
    {{KC_D, KC_G, 0}, {KC_M, KC_L}, JUNGSUNG_TYPE},      // ㅢ

    {{KC_DOT, KC_D, KC_F}, {KC_H, 0}, JUNGSUNG_TYPE}, // ㅙ
    {{KC_V, KC_D, KC_F}, {KC_H, 0}, JUNGSUNG_TYPE},   // ㅙ

    // 종성
    {{KC_X, 0, 0}, {KC_R, 0}, JONGSEONG_TYPE},             // ㄱ
    {{KC_S, 0, 0}, {KC_S, 0}, JONGSEONG_TYPE},             // ㄴ
    {{KC_E, 0, 0}, {KC_F, 0}, JONGSEONG_TYPE},             // ㄹ
    {{KC_Z, 0, 0}, {KC_A, 0}, JONGSEONG_TYPE},             // ㅁ
    {{KC_W, 0, 0}, {KC_Q, 0}, JONGSEONG_TYPE},             // ㅂ
    {{KC_Q, 0, 0}, {KC_T, 0}, JONGSEONG_TYPE},             // ㅅ
    {{KC_A, 0, 0}, {KC_D, 0}, JONGSEONG_TYPE},             // ㅇ
    {{KC_SCLN, 0, 0}, {LSFT(KC_T), 0}, JONGSEONG_TYPE},    // ㅆ
                                                           //
    {{KC_A, KC_E, 0}, {KC_R, 0}, JONGSEONG_TYPE},          // ㄱ
    {{KC_A, KC_X, 0}, {LSFT(KC_R), 0}, JONGSEONG_TYPE},    // ㄲ
    {{KC_X, KC_Q, 0}, {KC_R, KC_T}, JONGSEONG_TYPE},       // ㄳ
    {{KC_S, KC_E, 0}, {KC_S, KC_W}, JONGSEONG_TYPE},       // ㄵ
    {{KC_S, KC_A, 0}, {KC_S, KC_G}, JONGSEONG_TYPE},       // ㄶ
    {{KC_SCLN, KC_Z, 0}, {KC_E, 0}, JONGSEONG_TYPE},       // ㄷ
    {{KC_E, KC_X, 0}, {KC_F, KC_R}, JONGSEONG_TYPE},       // ㄺ
    {{KC_X, KC_Z, 0}, {KC_F, KC_R}, JONGSEONG_TYPE},       // ㄺ
    {{KC_E, KC_Z, 0}, {KC_F, KC_A}, JONGSEONG_TYPE},       // ㄻ
    {{KC_E, KC_W, 0}, {KC_F, KC_Q}, JONGSEONG_TYPE},       // ㄼ
    {{KC_E, KC_Q, 0}, {KC_F, KC_T}, JONGSEONG_TYPE},       // ㄽ
    {{KC_A, KC_Z, 0}, {KC_F, KC_X}, JONGSEONG_TYPE},       // ㄾ
    {{KC_A, KC_W, 0}, {KC_F, KC_V}, JONGSEONG_TYPE},       // ㄿ
    {{KC_SCLN, KC_A, 0}, {KC_F, KC_G}, JONGSEONG_TYPE},    // ㅀ
    {{KC_W, KC_Q, 0}, {KC_Q, KC_T}, JONGSEONG_TYPE},       // ㅄ
    {{KC_A, KC_Q, 0}, {LSFT(KC_T), 0}, JONGSEONG_TYPE},    // ㅆ
    {{KC_SCLN, KC_E, 0}, {KC_W, 0}, JONGSEONG_TYPE},       // ㅈ
    {{KC_SCLN, KC_Q, 0}, {KC_C, 0}, JONGSEONG_TYPE},       // ㅊ
    {{KC_SCLN, KC_X, 0}, {KC_Z, 0}, JONGSEONG_TYPE},       // ㅋ
    {{KC_S, KC_Z, 0}, {KC_X, 0}, JONGSEONG_TYPE},          // ㅌ
    {{KC_SCLN, KC_W, 0}, {KC_V, 0}, JONGSEONG_TYPE},       // ㅍ
    {{KC_SCLN, KC_S, 0}, {KC_G, 0}, JONGSEONG_TYPE},       // ㅎ
                                                           //
    {{KC_SCLN, KC_X, KC_Z}, {KC_R, KC_T}, JONGSEONG_TYPE}, // ㄳ
    {{KC_SCLN, KC_W, KC_Q}, {KC_F, KC_A}, JONGSEONG_TYPE}, // ㄻ
    {{KC_SCLN, KC_E, KC_W}, {KC_X, 0}, JONGSEONG_TYPE},    // ㅌ

    // 기타
    {{KC_DOT, 0, 0}, {KC_DOT, 0}, CHOSUNG_TYPE}, // .
};

static uint16_t recent[SEMOI_BUFFER_SIZE] = {KC_NO};
static uint16_t deadline                  = 0;

static SemoiType get_keycode_type(uint16_t keycode) {
    for (int i = 0; i < ARRAY_SIZE(chosung_keys); i++) {
        if (chosung_keys[i] == keycode) return CHOSUNG_TYPE;
    }
    for (int i = 0; i < ARRAY_SIZE(jungsung_keys); i++) {
        if (jungsung_keys[i] == keycode) return JUNGSUNG_TYPE;
    }
    for (int i = 0; i < ARRAY_SIZE(jongseong_keys); i++) {
        if (jongseong_keys[i] == keycode) return JONGSEONG_TYPE;
    }
    return 0;
}

static bool is_recent_keys_empty(void) {
    return recent[0] == KC_NO;
}

static void clear_recent_keys(void) {
    for (int i = 0; i < SEMOI_BUFFER_SIZE; i++) {
        recent[i] = KC_NO;
    }
}

static void sort_recent_keys(void) {
    for (size_t i = 0; i < SEMOI_BUFFER_SIZE - 1; i++) {
        for (size_t j = 0; j < SEMOI_BUFFER_SIZE - i - 1; j++) {
            if (recent[j] == 0 || (recent[j + 1] != 0 && recent[j] > recent[j + 1])) {
                uint16_t temp = recent[j];
                recent[j]     = recent[j + 1];
                recent[j + 1] = temp;
            }
        }
    }
}

static void calculate_recent_types(SemoiType *recent_types) {
    for (int i = 0; i < SEMOI_BUFFER_SIZE; i++) {
        recent_types[i] = get_keycode_type(recent[i]);
    }
}

static char keycode_to_char(uint16_t keycode) {
    return pgm_read_byte(code_to_name + keycode - 4);
}

static bool is_semoi_key(uint16_t keycode, keyrecord_t *record) {
    if ((get_mods() | get_oneshot_mods()) != 0) return false;

    if (keycode >= QK_MODS && keycode <= QK_TAP_DANCE_MAX) {
        if (record->tap.count != 1) return false;
        keycode &= 0xFF;
    }

    switch (keycode) {
        // P 는 사용 X
        case KC_A ... KC_O:
        case KC_Q ... KC_Z:
            return true;
        case KC_DOT:
        case KC_SCLN:
            return true;
        default:
            return false;
    }
}

static bool update_recent_keys(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) return true;

    keycode = keycode & 0xFF;
    DEBUG_PRINT("semoi: update_recent_keys - keycode: %d(%c)\n", keycode, keycode_to_char(keycode));

    for (int i = 0; i < SEMOI_BUFFER_SIZE; i++) {
        if (recent[i] == KC_NO) {
            recent[i] = keycode;
            break;
        }
    }

    deadline = record->event.time + SEMOI_TIMEOUT_MS;
    return true;
}

static uint32_t check_and_type_semoi(uint32_t trigger_time, void *cb_arg) {
    uint16_t cycle_num = (uint16_t)(uintptr_t)cb_arg;

    sort_recent_keys();

    SemoiType recent_types[SEMOI_BUFFER_SIZE];
    calculate_recent_types(recent_types);

    // --- 약어 입력 처리 ---

#ifdef SEMOI_SHORTCUTS_ENABLE
    int recent_size = 0;
    while (recent_size < SEMOI_BUFFER_SIZE && recent[recent_size] != KC_NO) {
        recent_size++;
    }

    const SemoiShortcut *target_shortcut       = NULL;
    int                  shortcut_search_start = semoi_shortcut_index[recent_size - 1];
    int                  shortcut_search_end   = semoi_shortcut_index[recent_size];

    for (int i = shortcut_search_start; i < shortcut_search_end; i++) {
        const SemoiShortcut *shortcut = &semoi_shortcut[i];
        bool                 is_match = true;

        for (int j = 0; j < recent_size; j++) {
            if (shortcut->shortcuts[j] != recent[j]) {
                is_match = false;
                break;
            }
        }
        if (is_match) {
            target_shortcut = shortcut;
            break;
        }
    }

    if (target_shortcut != NULL) {
        for (int i = 0; i < ARRAY_SIZE(target_shortcut->dubelsik); i++) {
            if (target_shortcut->dubelsik[i] == 0) break;

            if (target_shortcut->dubelsik[i] & SHIFT_MASK) {
                tap_code16(LSFT(target_shortcut->dubelsik[i] & ~SHIFT_MASK));
            } else {
                tap_code16(target_shortcut->dubelsik[i]);
            }
        }
        clear_recent_keys();
        return 0;
    }
#endif

    // --- 일반 입력 처리 ---

    bool     is_processed = false;
    uint16_t chosung = 0, jungsung = 0, jungsung2 = 0, jongseong = 0, jongseong2 = 0;

    for (int i = 0; i < ARRAY_SIZE(semoi_keymap); i++) {
        const SemoiLayout *target       = &semoi_keymap[i];
        int                match_count  = 0;
        bool               is_match_all = true;

        for (int j = 0; j < SEMOI_BUFFER_SIZE && recent[j] != KC_NO; j++) {
            if (recent_types[j] != target->type) continue; // 초성/중성/종성 일치하는 타입만 확인

            if (recent[j] == target->from[0] || recent[j] == target->from[1] || recent[j] == target->from[2]) {
                match_count++;
            } else {
                is_match_all = false;
                break;
            }
        }

        const int required_match_count = (target->from[2] != 0 ? 3 : (target->from[1] != 0 ? 2 : 1));
        if (is_match_all && match_count == required_match_count) {
            DEBUG_PRINT("semoi(%d): match(index: %d) - %c %c %c\n", cycle_num, i, keycode_to_char(target->from[0]), keycode_to_char(target->from[1]), keycode_to_char(target->from[2]));

            is_processed = true;
            switch (target->type) {
                case CHOSUNG_TYPE:
                    chosung = target->to[0];
                    break;
                case JUNGSUNG_TYPE:
                    jungsung  = target->to[0];
                    jungsung2 = target->to[1];
                    break;
                case JONGSEONG_TYPE:
                    jongseong  = target->to[0];
                    jongseong2 = target->to[1];
                    break;
            }
        }
    }

    if (!is_processed) return 0;

    DEBUG_PRINT("semoi(%d): chosung: %c, jungsung: %c, jongseong: %c\n", cycle_num, keycode_to_char(chosung), keycode_to_char(jungsung), keycode_to_char(jongseong));

    if (chosung != 0) tap_code16(chosung);
    if (jungsung != 0) tap_code16(jungsung);
    if (jungsung2 != 0) tap_code16(jungsung2);
    if (jongseong != 0) tap_code16(jongseong);
    if (jongseong2 != 0) tap_code16(jongseong2);

#ifdef SEMOI_COMPLETE_COMPOSE
    if (chosung != 0 && jungsung != 0) {
        tap_code16(KC_RIGHT);
    }
#endif

    clear_recent_keys();

    return 0;
}

void matrix_scan_semoi(void) {
    if (!is_recent_keys_empty() && timer_expired(timer_read(), deadline)) {
        deadline = 0;
        clear_recent_keys();
    }
}

// return true when semoi
bool process_record_semoi(uint16_t keycode, keyrecord_t *record) {
    if (!is_semoi_key(keycode, record)) {
        clear_recent_keys();
        return false;
    }

    update_recent_keys(keycode, record);

    uint16_t cycle_num = timer_read();

    DEBUG_PRINT("semoi(%d): key%s - keycode: %d\n", cycle_num, record->event.pressed ? "down" : "up", keycode);
    DEBUG_PRINT("semoi(%d): recent keys: ", cycle_num);
    for (int i = 0; i < SEMOI_BUFFER_SIZE; i++) {
        char value = keycode_to_char(recent[i]);
        DEBUG_PRINT("%d(%c) ", recent[i], value);
    }
    DEBUG_PRINT("\n");

    if (is_recent_keys_empty() || record->event.pressed) {
        return true;
    }

    defer_exec(SEMOI_DEFER_TIME, check_and_type_semoi, (void *)(uintptr_t)cycle_num);

    return true;
}
