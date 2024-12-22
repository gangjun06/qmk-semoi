
#pragma once

#include "quantum.h"

#ifdef SEMOI_SHORTCUTS_ENABLE

#    define SEMOI_SHORTCUT_SIZE 6
#    define SEMOI_SHORTCUT_DUBEOLSIK_SIZE 14

#    define SHIFT_MASK 0x80
#    define SFT(x) (SHIFT_MASK | (x))

typedef struct {
    const uint8_t shortcuts[SEMOI_SHORTCUT_SIZE];
    const uint8_t dubelsik[SEMOI_SHORTCUT_DUBEOLSIK_SIZE];
} SemoiShortcut;

#    define SEMOI_SHORTCUT_COUNT 1758

const int semoi_shortcut_index[] = {0, 0, 72, 635, 1446, 1727, 1758};

const SemoiShortcut semoi_shortcut[SEMOI_SHORTCUT_COUNT] = {
    // 기호. 기호 | ?_ (초성 ㅁ+ㄴ / 중성  / 종성 )
    {{KC_U, KC_Y}, {SFT(KC_SLASH), KC_SPC}},
    // 기호. 기호 | ,_ (초성 ㄴ+ㄷ / 중성  / 종성 )
    {{KC_I, KC_U}, {KC_COMMA, KC_SPC}},
    // 기호. 기호 | ._ (초성 ㄷ+ㅂ / 중성  / 종성 )
    {{KC_I, KC_O}, {KC_DOT, KC_SPC}},
    // 기호. 기호 | !_ (초성 ㅅ+ㄹ / 중성  / 종성 )
    {{KC_M, KC_N}, {SFT(KC_1), KC_SPC}},
    // 2. 일반 약어 | _수_있 (초성 ㅅ / 중성  / 종성 ㅅ)
    {{KC_N, KC_Q}, {KC_SPC, KC_T, KC_N, KC_SPC, KC_D, KC_L, SFT(KC_T)}},
    // 6. 일반 약어 | 가능 (초성 ㄴ / 중성  / 종성 ㅇ)
    {{KC_A, KC_U}, {KC_R, KC_K, KC_S, KC_M, KC_D}},
    // 39. 일반 약어 | 개념 (초성 ㄱ / 중성  / 종성 ㅁ)
    {{KC_K, KC_Z}, {KC_R, KC_O, KC_S, KC_U, KC_A}},
    // 71. 일반 약어 | 결과 (초성 ㄱ / 중성  / 종성 ㄹ)
    {{KC_E, KC_K}, {KC_R, KC_U, KC_F, KC_R, KC_H, KC_K}},
    // 96. 일반 약어 | 고급 (초성 ㄱ / 중성  / 종성 ㅂ)
    {{KC_K, KC_W}, {KC_R, KC_H, KC_R, KC_M, KC_Q}},
    // 132. 일반 약어 | 광고 (초성 ㄱ / 중성  / 종성 ㅇ)
    {{KC_A, KC_K}, {KC_R, KC_H, KC_K, KC_D, KC_R, KC_H}},
    // 151. 일반 약어 | 국가 (초성 ㄱ / 중성  / 종성 ㄱ)
    {{KC_K, KC_X}, {KC_R, KC_N, KC_R, KC_R, KC_K}},
    // 163. 일반 약어 | 그것 (초성 ㄱ / 중성  / 종성 ㅅ)
    {{KC_K, KC_Q}, {KC_R, KC_M, KC_R, KC_J, KC_T}},
    // 164. 일반 약어 | 그곳 (초성 ㄱ / 중성 ㅡ+ㅗ / 종성 )
    {{KC_K, KC_DOT}, {KC_R, KC_M, KC_R, KC_H, KC_T}},
    // 165. 일반 약어 | 그날 (초성 ㄴ / 중성  / 종성 ㄹ)
    {{KC_E, KC_U}, {KC_R, KC_M, KC_S, KC_K, KC_F}},
    // 214. 일반 약어 | 기는_ (초성 ㄱ / 중성  / 종성 ㄴ)
    {{KC_K, KC_S}, {KC_R, KC_L, KC_S, KC_M, KC_S, KC_SPC}},
    // 256. 일반 약어 | 남성 (초성 ㄴ / 중성  / 종성 ㅁ)
    {{KC_U, KC_Z}, {KC_S, KC_K, KC_A, KC_T, KC_J, KC_D}},
    // 261. 일반 약어 | 내년 (초성 ㄴ / 중성  / 종성 ㄴ)
    {{KC_S, KC_U}, {KC_S, KC_O, KC_S, KC_U, KC_S}},
    // 275. 일반 약어 | 녀석 (초성 ㄴ / 중성  / 종성 ㄱ)
    {{KC_U, KC_X}, {KC_S, KC_U, KC_T, KC_J, KC_R}},
    // 314. 일반 약어 | 다른_ (초성 ㄷ / 중성  / 종성 ㄴ)
    {{KC_I, KC_S}, {KC_E, KC_K, KC_F, KC_M, KC_S, KC_SPC}},
    // 319. 일반 약어 | 다양 (초성 ㄷ / 중성  / 종성 ㅇ)
    {{KC_A, KC_I}, {KC_E, KC_K, KC_D, KC_I, KC_D}},
    // 321. 일반 약어 | 다음 (초성 ㄷ / 중성  / 종성 ㅁ)
    {{KC_I, KC_Z}, {KC_E, KC_K, KC_D, KC_M, KC_A}},
    // 330. 일반 약어 | 달러 (초성 ㄹ / 중성  / 종성 ㄹ)
    {{KC_E, KC_M}, {KC_E, KC_K, KC_F, KC_F, KC_J}},
    // 338. 일반 약어 | 대답 (초성 ㄷ / 중성  / 종성 ㅂ)
    {{KC_I, KC_W}, {KC_E, KC_O, KC_E, KC_K, KC_Q}},
    // 351. 일반 약어 | 대학 (초성 ㄷ / 중성  / 종성 ㄱ)
    {{KC_I, KC_X}, {KC_E, KC_O, KC_G, KC_K, KC_R}},
    // 369. 일반 약어 | 독특 (초성 ㄷ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_I, KC_DOT}, {KC_E, KC_H, KC_R, KC_X, KC_M, KC_R}},
    // 391. 일반 약어 | 들이_ (초성 ㄷ / 중성  / 종성 ㄹ)
    {{KC_E, KC_I}, {KC_E, KC_M, KC_F, KC_D, KC_L, KC_SPC}},
    // 392. 일반 약어 | 듯이_ (초성 ㄷ / 중성  / 종성 ㅅ)
    {{KC_I, KC_Q}, {KC_E, KC_M, KC_T, KC_D, KC_L, KC_SPC}},
    // 430. 일반 약어 | 마음 (초성 ㅁ / 중성  / 종성 ㅁ)
    {{KC_Y, KC_Z}, {KC_A, KC_K, KC_D, KC_M, KC_A}},
    // 447. 일반 약어 | 맛있 (초성 ㅁ / 중성  / 종성 ㅆ)
    {{KC_Y, KC_SCLN}, {KC_A, KC_K, KC_T, KC_D, KC_L, SFT(KC_T)}},
    // 460. 일반 약어 | 모든_ (초성 ㅁ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_Y, KC_DOT}, {KC_A, KC_H, KC_E, KC_M, KC_S, KC_SPC}},
    // 464. 일반 약어 | 모양 (초성 ㅁ / 중성  / 종성 ㅇ)
    {{KC_A, KC_Y}, {KC_A, KC_H, KC_D, KC_I, KC_D}},
    // 479. 일반 약어 | 무엇 (초성 ㅁ / 중성  / 종성 ㅅ)
    {{KC_Q, KC_Y}, {KC_A, KC_N, KC_D, KC_J, KC_T}},
    // 487. 일반 약어 | 문화 (초성 ㅁ / 중성  / 종성 ㄴ)
    {{KC_S, KC_Y}, {KC_A, KC_N, KC_S, KC_G, KC_H, KC_K}},
    // 494. 일반 약어 | 물질 (초성 ㅁ / 중성  / 종성 ㄹ)
    {{KC_E, KC_Y}, {KC_A, KC_N, KC_F, KC_W, KC_L, KC_F}},
    // 497. 일반 약어 | 미국 (초성 ㅁ / 중성  / 종성 ㄱ)
    {{KC_X, KC_Y}, {KC_A, KC_L, KC_R, KC_N, KC_R}},
    // 536. 일반 약어 | 발표 (초성 ㅂ / 중성  / 종성 ㄹ)
    {{KC_E, KC_O}, {KC_Q, KC_K, KC_F, KC_V, KC_Y}},
    // 539. 일반 약어 | 방법 (초성 ㅂ / 중성  / 종성 ㅂ)
    {{KC_O, KC_W}, {KC_Q, KC_K, KC_D, KC_Q, KC_J, KC_Q}},
    // 554. 일반 약어 | 범위 (초성 ㅂ / 중성  / 종성 ㅁ)
    {{KC_O, KC_Z}, {KC_Q, KC_J, KC_A, KC_D, KC_N, KC_L}},
    // 584. 일반 약어 | 부분 (초성 ㅂ / 중성  / 종성 ㄴ)
    {{KC_O, KC_S}, {KC_Q, KC_N, KC_Q, KC_N, KC_S}},
    // 629. 일반 약어 | 사람 (초성 ㅅ / 중성  / 종성 ㅁ)
    {{KC_N, KC_Z}, {KC_T, KC_K, KC_F, KC_K, KC_A}},
    // 634. 일반 약어 | 사실 (초성 ㅅ / 중성  / 종성 ㄹ)
    {{KC_E, KC_N}, {KC_T, KC_K, KC_T, KC_L, KC_F}},
    // 674. 일반 약어 | 선생 (초성 ㅅ / 중성  / 종성 ㄴ)
    {{KC_N, KC_S}, {KC_T, KC_J, KC_S, KC_T, KC_O, KC_D}},
    // 694. 일반 약어 | 세상 (초성 ㅅ / 중성  / 종성 ㅇ)
    {{KC_A, KC_N}, {KC_T, KC_P, KC_T, KC_K, KC_D}},
    // 708. 일반 약어 | 소스 (초성 ㅅ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_N, KC_DOT}, {KC_T, KC_H, KC_T, KC_M}},
    // 742. 일반 약어 | 습니다._ (초성 ㅅ / 중성  / 종성 ㅂ)
    {{KC_N, KC_W}, {KC_T, KC_M, KC_Q, KC_S, KC_L, KC_E, KC_K, KC_DOT, KC_SPC}},
    // 759. 일반 약어 | 시절 (초성 ㅈ / 중성  / 종성 ㄹ)
    {{KC_E, KC_L}, {KC_T, KC_L, KC_W, KC_J, KC_F}},
    // 767. 일반 약어 | 식사 (초성 ㅅ / 중성  / 종성 ㄱ)
    {{KC_N, KC_X}, {KC_T, KC_L, KC_R, KC_T, KC_K}},
    // 820. 일반 약어 | 어떤_ (초성 ㅇ / 중성  / 종성 ㄴ)
    {{KC_J, KC_S}, {KC_D, KC_J, SFT(KC_E), KC_J, KC_S, KC_SPC}},
    // 840. 일반 약어 | 업무 (초성 ㅁ / 중성  / 종성 ㅂ)
    {{KC_W, KC_Y}, {KC_D, KC_J, KC_Q, KC_A, KC_N}},
    // 854. 일반 약어 | 여름 (초성 ㄹ / 중성  / 종성 ㅁ)
    {{KC_M, KC_Z}, {KC_D, KC_U, KC_F, KC_M, KC_A}},
    // 855. 일반 약어 | 여성 (초성 ㅇ / 중성  / 종성 ㅇ)
    {{KC_A, KC_J}, {KC_D, KC_U, KC_T, KC_J, KC_D}},
    // 882. 일반 약어 | 예의 (초성 ㅇ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_J, KC_DOT}, {KC_D, SFT(KC_P), KC_D, KC_M, KC_L}},
    // 939. 일반 약어 | 음식 (초성 ㅇ / 중성  / 종성 ㅁ)
    {{KC_J, KC_Z}, {KC_D, KC_M, KC_A, KC_T, KC_L, KC_R}},
    // 940. 일반 약어 | 음악 (초성 ㅇ / 중성  / 종성 ㄱ)
    {{KC_J, KC_X}, {KC_D, KC_M, KC_A, KC_D, KC_K, KC_R}},
    // 958. 일반 약어 | 이런_ (초성 ㄹ / 중성  / 종성 ㄴ)
    {{KC_M, KC_S}, {KC_D, KC_L, KC_F, KC_J, KC_S, KC_SPC}},
    // 965. 일반 약어 | 이웃 (초성 ㅇ / 중성  / 종성 ㅅ)
    {{KC_J, KC_Q}, {KC_D, KC_L, KC_D, KC_N, KC_T}},
    // 981. 일반 약어 | 일어 (초성 ㅇ / 중성  / 종성 ㄹ)
    {{KC_E, KC_J}, {KC_D, KC_L, KC_F, KC_D, KC_J}},
    // 985. 일반 약어 | 입니다._ (초성 ㅇ / 중성  / 종성 ㅂ)
    {{KC_J, KC_W}, {KC_D, KC_L, KC_Q, KC_S, KC_L, KC_E, KC_K, KC_DOT, KC_SPC}},
    // 990. 일반 약어 | 있을_ (초성 ㅇ / 중성  / 종성 ㅆ+ㄹ)
    {{KC_J, KC_SCLN}, {KC_D, KC_L, SFT(KC_T), KC_D, KC_M, KC_F, KC_SPC}},
    // 1025. 일반 약어 | 잡지 (초성 ㅈ / 중성  / 종성 ㅂ)
    {{KC_L, KC_W}, {KC_W, KC_K, KC_Q, KC_W, KC_L}},
    // 1035. 일반 약어 | 저것 (초성 ㅈ / 중성  / 종성 ㅅ)
    {{KC_L, KC_Q}, {KC_W, KC_J, KC_R, KC_J, KC_T}},
    // 1071. 일반 약어 | 정도 (초성 ㅈ / 중성  / 종성 ㅇ)
    {{KC_A, KC_L}, {KC_W, KC_J, KC_D, KC_E, KC_H}},
    // 1093. 일반 약어 | 조금 (초성 ㅈ / 중성  / 종성 ㅁ)
    {{KC_L, KC_Z}, {KC_W, KC_H, KC_R, KC_M, KC_A}},
    // 1100. 일반 약어 | 조직 (초성 ㅈ / 중성  / 종성 ㄱ)
    {{KC_L, KC_X}, {KC_W, KC_H, KC_W, KC_L, KC_R}},
    // 1102. 일반 약어 | 존재 (초성 ㅈ / 중성  / 종성 ㄴ)
    {{KC_L, KC_S}, {KC_W, KC_H, KC_S, KC_W, KC_O}},
    // 1108. 일반 약어 | 좋은_ (초성 ㅈ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_L, KC_DOT}, {KC_W, KC_H, KC_G, KC_D, KC_M, KC_S, KC_SPC}},
    // 1285. 일반 약어 | 학교 (초성 ㅎ / 중성  / 종성 ㄱ)
    {{KC_H, KC_X}, {KC_G, KC_K, KC_R, KC_R, KC_Y}},
    // 1290. 일반 약어 | 한국 (초성 ㅎ / 중성  / 종성 ㄴ)
    {{KC_H, KC_S}, {KC_G, KC_K, KC_S, KC_R, KC_N, KC_R}},
    // 1300. 일반 약어 | 할머니 (초성 ㅎ / 중성  / 종성 ㄹ)
    {{KC_E, KC_H}, {KC_G, KC_K, KC_F, KC_A, KC_J, KC_S, KC_L}},
    // 1302. 일반 약어 | 함께_ (초성 ㅎ / 중성  / 종성 ㅁ)
    {{KC_H, KC_Z}, {KC_G, KC_K, KC_A, SFT(KC_R), KC_P, KC_SPC}},
    // 1303. 일반 약어 | 합니다._ (초성 ㅎ / 중성  / 종성 ㅂ)
    {{KC_H, KC_W}, {KC_G, KC_K, KC_Q, KC_S, KC_L, KC_E, KC_K, KC_DOT, KC_SPC}},
    // 1305. 일반 약어 | 항상_ (초성 ㅎ / 중성  / 종성 ㅇ)
    {{KC_A, KC_H}, {KC_G, KC_K, KC_D, KC_T, KC_K, KC_D, KC_SPC}},
    // 1. 일반 약어 | _수_없 (초성 ㅅ / 중성  / 종성 ㅄ)
    {{KC_N, KC_Q, KC_W}, {KC_SPC, KC_T, KC_N, KC_SPC, KC_D, KC_J, KC_Q, KC_T}},
    // 3. 일반 약어 | 가게 (초성 ㄱ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_K}, {KC_R, KC_K, KC_R, KC_P}},
    // 5. 일반 약어 | 가는_ (초성 ㄱ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_K}, {KC_R, KC_K, KC_S, KC_M, KC_S, KC_SPC}},
    // 7. 일반 약어 | 가능성 (초성 ㄴ+ㅅ / 중성  / 종성 ㅇ)
    {{KC_A, KC_N, KC_U}, {KC_R, KC_K, KC_S, KC_M, KC_D, KC_T, KC_J, KC_D}},
    // 18. 일반 약어 | 가운데 (초성 ㄱ+ㄷ / 중성  / 종성 ㄴ)
    {{KC_I, KC_K, KC_S}, {KC_R, KC_K, KC_D, KC_N, KC_S, KC_E, KC_P}},
    // 20. 일반 약어 | 가장_ (초성 ㄱ+ㅈ / 중성  / 종성 ㅇ)
    {{KC_A, KC_K, KC_L}, {KC_R, KC_K, KC_W, KC_K, KC_D, KC_SPC}},
    // 22. 일반 약어 | 가져 (초성 ㄱ+ㅈ / 중성 ㅕ / 종성 )
    {{KC_K, KC_L, KC_T}, {KC_R, KC_K, KC_W, KC_U}},
    // 28. 일반 약어 | 갈등 (초성 ㄱ+ㄷ / 중성  / 종성 ㄹ)
    {{KC_E, KC_I, KC_K}, {KC_R, KC_K, KC_F, KC_E, KC_M, KC_D}},
    // 29. 일반 약어 | 감독 (초성 ㄱ+ㄷ / 중성  / 종성 ㅁ)
    {{KC_I, KC_K, KC_Z}, {KC_R, KC_K, KC_A, KC_E, KC_H, KC_R}},
    // 33. 일반 약어 | 갑자기_ (초성 ㄱ+ㅈ / 중성  / 종성 ㅂ)
    {{KC_K, KC_L, KC_W}, {KC_R, KC_K, KC_Q, KC_W, KC_K, KC_R, KC_L, KC_SPC}},
    // 40. 일반 약어 | 개발 (초성 ㄱ+ㅂ / 중성  / 종성 ㄹ)
    {{KC_E, KC_K, KC_O}, {KC_R, KC_O, KC_Q, KC_K, KC_F}},
    // 46. 일반 약어 | 개혁 (초성 ㄱ+ㅎ / 중성  / 종성 ㄱ)
    {{KC_H, KC_K, KC_X}, {KC_R, KC_O, KC_G, KC_U, KC_R}},
    // 48. 일반 약어 | 거대 (초성 ㄱ+ㄷ / 중성 ㅓ / 종성 )
    {{KC_I, KC_K, KC_R}, {KC_R, KC_J, KC_E, KC_O}},
    // 51. 일반 약어 | 거리 (초성 ㄱ+ㄹ / 중성 ㅣ / 종성 )
    {{KC_D, KC_K, KC_M}, {KC_R, KC_J, KC_F, KC_L}},
    // 54. 일반 약어 | 거짓 (초성 ㄱ+ㅈ / 중성  / 종성 ㅅ)
    {{KC_K, KC_L, KC_Q}, {KC_R, KC_J, KC_W, KC_L, KC_T}},
    // 57. 일반 약어 | 건물 (초성 ㄱ / 중성  / 종성 ㄴ+ㄹ)
    {{KC_E, KC_K, KC_S}, {KC_R, KC_J, KC_S, KC_A, KC_N, KC_F}},
    // 64. 일반 약어 | 검토 (초성 ㄱ+ㄷ / 중성 ㅗ / 종성 )
    {{KC_I, KC_K, KC_V}, {KC_R, KC_J, KC_A, KC_X, KC_H}},
    // 64. 일반 약어 | 검토 (초성 ㄱ+ㄷ / 중성 ㅗ / 종성 )
    {{KC_I, KC_K, KC_DOT}, {KC_R, KC_J, KC_A, KC_X, KC_H}},
    // 66. 일반 약어 | 것은_ (초성 ㄱ / 중성 ㅓ+ㅡ / 종성 )
    {{KC_G, KC_K, KC_R}, {KC_R, KC_J, KC_T, KC_D, KC_M, KC_S, KC_SPC}},
    // 69. 일반 약어 | 겨우_ (초성 ㄱ / 중성 ㅕ+ㅜ / 종성 )
    {{KC_B, KC_K, KC_T}, {KC_R, KC_U, KC_D, KC_N, KC_SPC}},
    // 72. 일반 약어 | 결국 (초성 ㄱ / 중성  / 종성 ㄹ+ㄱ)
    {{KC_E, KC_K, KC_X}, {KC_R, KC_U, KC_F, KC_R, KC_N, KC_R}},
    // 72. 일반 약어 | 결국 (초성 ㄱ / 중성  / 종성 ㄹ+ㄱ)
    {{KC_A, KC_E, KC_K}, {KC_R, KC_U, KC_F, KC_R, KC_N, KC_R}},
    // 76. 일반 약어 | 결코_ (초성 ㅋ / 중성  / 종성 ㄹ)
    {{KC_E, KC_H, KC_K}, {KC_R, KC_U, KC_F, KC_Z, KC_H, KC_SPC}},
    // 78. 일반 약어 | 경계 (초성 ㄱ / 중성 ㅕ+ㅔ / 종성 )
    {{KC_C, KC_K, KC_T}, {KC_R, KC_U, KC_D, KC_R, SFT(KC_P)}},
    // 80. 일반 약어 | 경우 (초성 ㄱ+ㅇ / 중성  / 종성 ㅇ)
    {{KC_A, KC_J, KC_K}, {KC_R, KC_U, KC_D, KC_D, KC_N}},
    // 84. 일반 약어 | 경찰 (초성 ㄱ+ㅈ / 중성  / 종성 ㄹ)
    {{KC_E, KC_K, KC_L}, {KC_R, KC_U, KC_D, KC_C, KC_K, KC_F}},
    // 87. 일반 약어 | 계급 (초성 ㄱ / 중성 ㅔ+ㅡ / 종성 )
    {{KC_C, KC_G, KC_K}, {KC_R, SFT(KC_P), KC_R, KC_M, KC_Q}},
    // 91. 일반 약어 | 계약 (초성 ㄱ / 중성 ㅔ+ㅓ / 종성 )
    {{KC_C, KC_K, KC_R}, {KC_R, SFT(KC_P), KC_D, KC_I, KC_R}},
    // 95. 일반 약어 | 고구려 (초성 ㄱ+ㄹ / 중성 ㅜ / 종성 )
    {{KC_B, KC_K, KC_M}, {KC_R, KC_H, KC_R, KC_N, KC_F, KC_U}},
    // 97. 일반 약어 | 고는_ (초성 ㄴ / 중성 ㅗ+ㅡ / 종성 ㄴ)
    {{KC_S, KC_U, KC_DOT}, {KC_R, KC_H, KC_S, KC_M, KC_S, KC_SPC}},
    // 98. 일반 약어 | 고대 (초성 ㄱ+ㄷ / 중성 ㅗ+ㅐ / 종성 )
    {{KC_I, KC_K, KC_DOT}, {KC_R, KC_H, KC_E, KC_O}},
    // 100. 일반 약어 | 고려 (초성 ㄱ+ㄹ / 중성 ㅗ+ㅕ / 종성 )
    {{KC_K, KC_M, KC_DOT}, {KC_R, KC_H, KC_F, KC_U}},
    // 102. 일반 약어 | 고서_ (초성 ㄱ+ㅅ / 중성 ㅓ / 종성 )
    {{KC_K, KC_N, KC_R}, {KC_R, KC_H, KC_T, KC_J, KC_SPC}},
    // 104. 일반 약어 | 고향 (초성 ㄱ+ㅎ / 중성  / 종성 ㅇ)
    {{KC_A, KC_H, KC_K}, {KC_R, KC_H, KC_G, KC_I, KC_D}},
    // 105. 일반 약어 | 골목 (초성 ㅁ / 중성  / 종성 ㄹ+ㄱ)
    {{KC_E, KC_X, KC_Y}, {KC_R, KC_H, KC_F, KC_A, KC_H, KC_R}},
    // 105. 일반 약어 | 골목 (초성 ㅁ / 중성  / 종성 ㄹ+ㄱ)
    {{KC_A, KC_E, KC_Y}, {KC_R, KC_H, KC_F, KC_A, KC_H, KC_R}},
    // 106. 일반 약어 | 공간 (초성 ㄱ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_K, KC_S}, {KC_R, KC_H, KC_D, KC_R, KC_K, KC_S}},
    // 107. 일반 약어 | 공격 (초성 ㄱ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_K, KC_X}, {KC_R, KC_H, KC_D, KC_R, KC_U, KC_R}},
    // 107. 일반 약어 | 공격 (초성 ㄱ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_E, KC_K}, {KC_R, KC_H, KC_D, KC_R, KC_U, KC_R}},
    // 108. 일반 약어 | 공급 (초성 ㄱ / 중성  / 종성 ㅇ+ㅂ)
    {{KC_A, KC_K, KC_W}, {KC_R, KC_H, KC_D, KC_R, KC_M, KC_Q}},
    // 109. 일반 약어 | 공동 (초성 ㄱ+ㄷ / 중성  / 종성 ㅇ)
    {{KC_A, KC_I, KC_K}, {KC_R, KC_H, KC_D, KC_E, KC_H, KC_D}},
    // 110. 일반 약어 | 공부 (초성 ㄱ+ㅂ / 중성  / 종성 ㅇ)
    {{KC_A, KC_K, KC_O}, {KC_R, KC_H, KC_D, KC_Q, KC_N}},
    // 125. 일반 약어 | 관념 (초성 ㄱ / 중성  / 종성 ㄴ+ㅁ)
    {{KC_K, KC_S, KC_Z}, {KC_R, KC_H, KC_K, KC_S, KC_S, KC_U, KC_A}},
    // 128. 일반 약어 | 관심 (초성 ㄱ+ㅅ / 중성  / 종성 ㅁ)
    {{KC_K, KC_N, KC_Z}, {KC_R, KC_H, KC_K, KC_S, KC_T, KC_L, KC_A}},
    // 137. 일반 약어 | 교수 (초성 ㄱ+ㅅ / 중성 ㅜ / 종성 )
    {{KC_B, KC_K, KC_N}, {KC_R, KC_Y, KC_T, KC_N}},
    // 138. 일반 약어 | 교육 (초성 ㄱ+ㅇ / 중성  / 종성 ㄱ)
    {{KC_J, KC_K, KC_X}, {KC_R, KC_Y, KC_D, KC_B, KC_R}},
    // 142. 일반 약어 | 구나 (초성 ㄱ / 중성 ㅜ+ㅏ / 종성 )
    {{KC_B, KC_F, KC_K}, {KC_R, KC_N, KC_S, KC_K}},
    // 143. 일반 약어 | 구두 (초성 ㄱ+ㄷ / 중성 ㅜ / 종성 )
    {{KC_B, KC_I, KC_K}, {KC_R, KC_N, KC_E, KC_N}},
    // 149. 일반 약어 | 구조 (초성 ㄱ+ㅈ / 중성 ㅜ / 종성 )
    {{KC_B, KC_K, KC_L}, {KC_R, KC_N, KC_W, KC_H}},
    // 150. 일반 약어 | 구체적 (초성 ㄱ+ㅈ / 중성 ㅔ / 종성 )
    {{KC_C, KC_K, KC_L}, {KC_R, KC_N, KC_C, KC_P, KC_W, KC_J, KC_R}},
    // 151. 일반 약어 | 국가 (초성 ㄱ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_K}, {KC_R, KC_N, KC_R, KC_R, KC_K}},
    // 153. 일반 약어 | 국민 (초성 ㄱ / 중성  / 종성 ㄱ+ㄴ)
    {{KC_K, KC_S, KC_X}, {KC_R, KC_N, KC_R, KC_A, KC_L, KC_S}},
    // 153. 일반 약어 | 국민 (초성 ㄱ / 중성  / 종성 ㄱ+ㄴ)
    {{KC_A, KC_E, KC_K}, {KC_R, KC_N, KC_R, KC_A, KC_L, KC_S}},
    // 157. 일반 약어 | 궁금 (초성 ㄱ / 중성 ㅜ+ㅡ / 종성 )
    {{KC_B, KC_G, KC_K}, {KC_R, KC_N, KC_D, KC_R, KC_M, KC_A}},
    // 158. 일반 약어 | 권력 (초성 ㄱ+ㄹ / 중성  / 종성 ㄱ)
    {{KC_K, KC_M, KC_X}, {KC_R, KC_N, KC_J, KC_S, KC_F, KC_U, KC_R}},
    // 164. 일반 약어 | 그곳 (초성 ㄱ / 중성 ㅡ+ㅗ / 종성 )
    {{KC_G, KC_K, KC_V}, {KC_R, KC_M, KC_R, KC_H, KC_T}},
    // 167. 일반 약어 | 그녀 (초성 ㄱ / 중성 ㅡ+ㅕ / 종성 )
    {{KC_G, KC_K, KC_T}, {KC_R, KC_M, KC_S, KC_U}},
    // 168. 일반 약어 | 그대 (초성 ㄱ+ㄷ / 중성 ㅡ / 종성 )
    {{KC_G, KC_I, KC_K}, {KC_R, KC_M, KC_E, KC_O}},
    // 169. 일반 약어 | 그대로_ (초성 ㄷ+ㄹ / 중성 ㅡ / 종성 )
    {{KC_G, KC_I, KC_M}, {KC_R, KC_M, KC_E, KC_O, KC_F, KC_H, KC_SPC}},
    // 173. 일반 약어 | 그래도_ (초성 ㄱ+ㄹ / 중성 ㅡ / 종성 )
    {{KC_G, KC_K, KC_M}, {KC_R, KC_M, KC_F, KC_O, KC_E, KC_H, KC_SPC}},
    // 174. 일반 약어 | 그래서_ (초성 ㄱ+ㄹ / 중성 ㅓ / 종성 )
    {{KC_K, KC_M, KC_R}, {KC_R, KC_M, KC_F, KC_O, KC_T, KC_J, KC_SPC}},
    // 175. 일반 약어 | 그램 (초성 ㄱ+ㄹ / 중성  / 종성 ㅁ)
    {{KC_K, KC_M, KC_Z}, {KC_R, KC_M, KC_F, KC_O, KC_A}},
    // 176. 일반 약어 | 그랬 (초성 ㄱ+ㄹ / 중성  / 종성 ㅅ)
    {{KC_K, KC_M, KC_Q}, {KC_R, KC_M, KC_F, KC_O, SFT(KC_T)}},
    // 178. 일반 약어 | 그러나_ (초성 ㄱ+ㄹ / 중성 ㅏ / 종성 )
    {{KC_F, KC_K, KC_M}, {KC_R, KC_M, KC_F, KC_J, KC_S, KC_K, KC_SPC}},
    // 179. 일반 약어 | 그러니 (초성 ㄹ+ㄴ / 중성 ㅣ / 종성 )
    {{KC_D, KC_M, KC_U}, {KC_R, KC_M, KC_F, KC_J, KC_S, KC_L}},
    // 182. 일반 약어 | 그러므로_ (초성 ㄹ / 중성 ㅡ+ㅓ / 종성 )
    {{KC_G, KC_M, KC_R}, {KC_R, KC_M, KC_F, KC_J, KC_A, KC_M, KC_F, KC_H, KC_SPC}},
    // 183. 일반 약어 | 그런_ (초성 ㄱ+ㄹ / 중성  / 종성 ㄴ)
    {{KC_K, KC_M, KC_S}, {KC_R, KC_M, KC_F, KC_J, KC_S, KC_SPC}},
    // 184. 일반 약어 | 그런데_ (초성 ㄱ+ㄹ / 중성 ㅔ / 종성 )
    {{KC_C, KC_K, KC_M}, {KC_R, KC_M, KC_F, KC_J, KC_S, KC_E, KC_P, KC_SPC}},
    // 188. 일반 약어 | 그룹 (초성 ㄱ+ㄹ / 중성  / 종성 ㅂ)
    {{KC_K, KC_M, KC_W}, {KC_R, KC_M, KC_F, KC_N, KC_Q}},
    // 191. 일반 약어 | 그리고_ (초성 ㄱ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_K, KC_M, KC_V}, {KC_R, KC_M, KC_F, KC_L, KC_R, KC_H, KC_SPC}},
    // 191. 일반 약어 | 그리고_ (초성 ㄱ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_K, KC_M, KC_DOT}, {KC_R, KC_M, KC_F, KC_L, KC_R, KC_H, KC_SPC}},
    // 197. 일반 약어 | 그저_ (초성 ㄱ+ㅈ / 중성 ㅡ / 종성 )
    {{KC_G, KC_K, KC_L}, {KC_R, KC_M, KC_W, KC_J, KC_SPC}},
    // 199. 일반 약어 | 극복 (초성 ㄱ+ㅂ / 중성  / 종성 ㄱ)
    {{KC_K, KC_O, KC_X}, {KC_R, KC_M, KC_R, KC_Q, KC_H, KC_R}},
    // 211. 일반 약어 | 금융 (초성 ㄱ+ㅇ / 중성  / 종성 ㅁ)
    {{KC_J, KC_K, KC_Z}, {KC_R, KC_M, KC_A, KC_D, KC_B, KC_D}},
    // 213. 일반 약어 | 기계 (초성 ㄱ / 중성 ㅣ+ㅖ / 종성 )
    {{KC_C, KC_K, KC_V}, {KC_R, KC_L, KC_R, SFT(KC_P)}},
    // 215. 일반 약어 | 기다 (초성 ㄱ+ㄷ / 중성 ㅣ / 종성 )
    {{KC_D, KC_I, KC_K}, {KC_R, KC_L, KC_E, KC_K}},
    // 217. 일반 약어 | 기도 (초성 ㄱ+ㄷ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_I, KC_K, KC_DOT}, {KC_R, KC_L, KC_E, KC_H}},
    // 218. 일반 약어 | 기독교 (초성 ㄱ+ㄷ / 중성  / 종성 ㄱ)
    {{KC_I, KC_K, KC_X}, {KC_R, KC_L, KC_E, KC_H, KC_R, KC_R, KC_Y}},
    // 223. 일반 약어 | 기분 (초성 ㄱ+ㅂ / 중성 ㅣ / 종성 )
    {{KC_D, KC_K, KC_O}, {KC_R, KC_L, KC_Q, KC_N, KC_S}},
    // 225. 일반 약어 | 기사 (초성 ㄱ+ㅅ / 중성 ㅏ / 종성 )
    {{KC_F, KC_K, KC_N}, {KC_R, KC_L, KC_T, KC_K}},
    // 227. 일반 약어 | 기술 (초성 ㄱ+ㅅ / 중성  / 종성 ㄹ)
    {{KC_E, KC_K, KC_N}, {KC_R, KC_L, KC_T, KC_N, KC_F}},
    // 228. 일반 약어 | 기업 (초성 ㄱ+ㅇ / 중성  / 종성 ㅂ)
    {{KC_J, KC_K, KC_W}, {KC_R, KC_L, KC_D, KC_J, KC_Q}},
    // 234. 일반 약어 | 깊은_ (초성 ㄱ / 중성  / 종성 ㅍ)
    {{KC_K, KC_W, KC_SCLN}, {KC_R, KC_L, KC_V, KC_D, KC_M, KC_S, KC_SPC}},
    // 237. 일반 약어 | 까지_ (초성 ㄱ+ㅈ / 중성 ㅣ / 종성 )
    {{KC_D, KC_K, KC_L}, {SFT(KC_R), KC_K, KC_W, KC_L, KC_SPC}},
    // 241. 일반 약어 | 꼬리 (초성 ㄱ+ㄹ / 중성 ㅗ+ㅣ / 종성 )
    {{KC_K, KC_M, KC_DOT}, {SFT(KC_R), KC_H, KC_F, KC_L}},
    // 244. 일반 약어 | 나게_ (초성 ㄴ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_U}, {KC_S, KC_K, KC_R, KC_P, KC_SPC}},
    // 245. 일반 약어 | 나는_ (초성 ㄴ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_U}, {KC_S, KC_K, KC_S, KC_M, KC_S, KC_SPC}},
    // 246. 일반 약어 | 나라 (초성 ㄴ+ㄹ / 중성 ㅏ / 종성 )
    {{KC_F, KC_M, KC_U}, {KC_S, KC_K, KC_F, KC_K}},
    // 247. 일반 약어 | 나름 (초성 ㄴ+ㄹ / 중성  / 종성 ㅁ)
    {{KC_M, KC_U, KC_Z}, {KC_S, KC_K, KC_F, KC_M, KC_A}},
    // 248. 일반 약어 | 나마_ (초성 ㄴ+ㅁ / 중성 ㅏ / 종성 )
    {{KC_F, KC_U, KC_Y}, {KC_S, KC_K, KC_A, KC_K, KC_SPC}},
    // 249. 일반 약어 | 나머지 (초성 ㄴ+ㅁ / 중성 ㅣ / 종성 )
    {{KC_D, KC_U, KC_Y}, {KC_S, KC_K, KC_A, KC_J, KC_W, KC_L}},
    // 251. 일반 약어 | 나중 (초성 ㄴ+ㅈ / 중성  / 종성 ㅇ)
    {{KC_A, KC_L, KC_U}, {KC_S, KC_K, KC_W, KC_N, KC_D}},
    // 252. 일반 약어 | 나타 (초성 ㄴ+ㄷ / 중성 ㅏ / 종성 )
    {{KC_F, KC_I, KC_U}, {KC_S, KC_K, KC_X, KC_K}},
    // 254. 일반 약어 | 날씨 (초성 ㄴ+ㅅ / 중성  / 종성 ㄹ)
    {{KC_E, KC_N, KC_U}, {KC_S, KC_K, KC_F, SFT(KC_T), KC_L}},
    // 258. 일반 약어 | 남편 (초성 ㄴ+ㅂ / 중성  / 종성 ㅁ)
    {{KC_O, KC_U, KC_Z}, {KC_S, KC_K, KC_A, KC_V, KC_U, KC_S}},
    // 262. 일반 약어 | 내놓 (초성 ㄴ / 중성  / 종성 ㅎ)
    {{KC_S, KC_U, KC_SCLN}, {KC_S, KC_O, KC_S, KC_H, KC_G}},
    // 265. 일반 약어 | 내부 (초성 ㄴ+ㅂ / 중성 ㅜ / 종성 )
    {{KC_B, KC_O, KC_U}, {KC_S, KC_O, KC_Q, KC_N}},
    // 266. 일반 약어 | 내용 (초성 ㄴ+ㅇ / 중성  / 종성 ㅇ)
    {{KC_A, KC_J, KC_U}, {KC_S, KC_O, KC_D, KC_Y, KC_D}},
    // 270. 일반 약어 | 너무_ (초성 ㄴ+ㅁ / 중성 ㅓ / 종성 )
    {{KC_R, KC_U, KC_Y}, {KC_S, KC_J, KC_A, KC_N, KC_SPC}},
    // 272. 일반 약어 | 널리_ (초성 ㄴ+ㄹ / 중성  / 종성 ㄹ)
    {{KC_E, KC_M, KC_U}, {KC_S, KC_J, KC_F, KC_F, KC_L, KC_SPC}},
    // 273. 일반 약어 | 넓은_ (초성 ㄴ / 중성  / 종성 ㄼ)
    {{KC_E, KC_U, KC_W}, {KC_S, KC_J, KC_F, KC_Q, KC_D, KC_M, KC_S, KC_SPC}},
    // 274. 일반 약어 | 넘어 (초성 ㄴ+ㅇ / 중성  / 종성 ㅁ)
    {{KC_J, KC_U, KC_Z}, {KC_S, KC_J, KC_A, KC_D, KC_J}},
    // 275. 일반 약어 | 녀석 (초성 ㄴ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_U}, {KC_S, KC_U, KC_T, KC_J, KC_R}},
    // 277. 일반 약어 | 노동 (초성 ㄴ+ㄷ / 중성  / 종성 ㅇ)
    {{KC_A, KC_I, KC_U}, {KC_S, KC_H, KC_E, KC_H, KC_D}},
    // 279. 일반 약어 | 노래 (초성 ㄴ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_M, KC_U, KC_V}, {KC_S, KC_H, KC_F, KC_O}},
    // 279. 일반 약어 | 노래 (초성 ㄴ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_M, KC_U, KC_DOT}, {KC_S, KC_H, KC_F, KC_O}},
    // 280. 일반 약어 | 노력 (초성 ㄴ+ㄹ / 중성  / 종성 ㄱ)
    {{KC_M, KC_U, KC_X}, {KC_S, KC_H, KC_F, KC_U, KC_R}},
    // 282. 일반 약어 | 논리 (초성 ㄴ+ㄹ / 중성  / 종성 ㄴ)
    {{KC_M, KC_S, KC_U}, {KC_S, KC_H, KC_S, KC_F, KC_L}},
    // 283. 일반 약어 | 논문 (초성 ㄴ+ㅁ / 중성  / 종성 ㄴ)
    {{KC_S, KC_U, KC_Y}, {KC_S, KC_H, KC_S, KC_A, KC_N, KC_S}},
    // 285. 일반 약어 | 농민 (초성 ㄴ+ㅁ / 중성  / 종성 ㅇ)
    {{KC_A, KC_U, KC_Y}, {KC_S, KC_H, KC_D, KC_A, KC_L, KC_S}},
    // 286. 일반 약어 | 농부 (초성 ㄴ+ㅂ / 중성  / 종성 ㅇ)
    {{KC_A, KC_O, KC_U}, {KC_S, KC_H, KC_D, KC_Q, KC_N}},
    // 291. 일반 약어 | 높은_ (초성 ㄴ+ㅇ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_J, KC_U, KC_DOT}, {KC_S, KC_H, KC_V, KC_D, KC_M, KC_S, KC_SPC}},
    // 292. 일반 약어 | 높이 (초성 ㄴ / 중성  / 종성 ㅍ)
    {{KC_U, KC_W, KC_SCLN}, {KC_S, KC_H, KC_V, KC_D, KC_L}},
    // 293. 일반 약어 | 누나 (초성 ㄴ / 중성 ㅜ+ㅏ / 종성 )
    {{KC_B, KC_F, KC_U}, {KC_S, KC_N, KC_S, KC_K}},
    // 294. 일반 약어 | 눈길 (초성 ㄴ / 중성  / 종성 ㄴ+ㄹ)
    {{KC_E, KC_S, KC_U}, {KC_S, KC_N, KC_S, KC_R, KC_L, KC_F}},
    // 295. 일반 약어 | 눈물 (초성 ㄴ+ㅁ / 중성  / 종성 ㄹ)
    {{KC_E, KC_U, KC_Y}, {KC_S, KC_N, KC_S, KC_A, KC_N, KC_F}},
    // 296. 일반 약어 | 눈빛 (초성 ㄴ / 중성  / 종성 ㅊ)
    {{KC_Q, KC_U, KC_SCLN}, {KC_S, KC_N, KC_S, KC_Q, KC_L, KC_C}},
    // 300. 일반 약어 | 느냐?_ (초성 ㄴ / 중성 ㅡ+왼쪽ㅗ / 종성 )
    {{KC_G, KC_U, KC_DOT}, {KC_S, KC_M, KC_S, KC_I, SFT(KC_SLASH), KC_SPC}},
    // 303. 일반 약어 | 는데 (초성 ㄴ+ㄷ / 중성  / 종성 ㄴ)
    {{KC_I, KC_S, KC_U}, {KC_S, KC_M, KC_S, KC_E, KC_P}},
    // 304. 일반 약어 | 는데도_ (초성 ㄴ+ㄷ / 중성 ㅔ+ㅗ / 종성 )
    {{KC_I, KC_U, KC_DOT}, {KC_S, KC_M, KC_S, KC_E, KC_P, KC_E, KC_H, KC_SPC}},
    // 305. 일반 약어 | 는지_ (초성 ㄴ+ㅈ / 중성  / 종성 ㄴ)
    {{KC_L, KC_S, KC_U}, {KC_S, KC_M, KC_S, KC_W, KC_L, KC_SPC}},
    // 307. 일반 약어 | 능력 (초성 ㄴ+ㄹ / 중성  / 종성 ㅇ)
    {{KC_A, KC_M, KC_U}, {KC_S, KC_M, KC_D, KC_F, KC_U, KC_R}},
    // 308. 일반 약어 | 니까 (초성 ㄴ+ㅇ / 중성 ㅣ / 종성 )
    {{KC_D, KC_J, KC_U}, {KC_S, KC_L, SFT(KC_R), KC_K}},
    // 309. 일반 약어 | 니다._ (초성 ㄴ+ㄷ / 중성 ㅣ / 종성 )
    {{KC_D, KC_I, KC_U}, {KC_S, KC_L, KC_E, KC_K, KC_DOT, KC_SPC}},
    // 310. 일반 약어 | 다가 (초성 ㄷ+ㄱ / 중성 ㅏ / 종성 )
    {{KC_F, KC_I, KC_K}, {KC_E, KC_K, KC_R, KC_K}},
    // 311. 일반 약어 | 다고 (초성 ㄷ+ㄱ / 중성 ㅏ+ㅗ / 종성 )
    {{KC_I, KC_K, KC_DOT}, {KC_E, KC_K, KC_R, KC_H}},
    // 315. 일반 약어 | 다리 (초성 ㄷ+ㄹ / 중성 ㅣ / 종성 )
    {{KC_D, KC_I, KC_M}, {KC_E, KC_K, KC_F, KC_L}},
    // 316. 일반 약어 | 다소_ (초성 ㄷ+ㅅ / 중성 ㅏ+ㅗ / 종성 )
    {{KC_I, KC_N, KC_DOT}, {KC_E, KC_K, KC_T, KC_H, KC_SPC}},
    // 322. 일반 약어 | 다짐 (초성 ㄷ+ㅈ / 중성  / 종성 ㅁ)
    {{KC_I, KC_L, KC_Z}, {KC_E, KC_K, KC_W, KC_L, KC_A}},
    // 325. 일반 약어 | 단순히_ (초성 ㅅ+ㅎ / 중성 ㅣ / 종성 )
    {{KC_D, KC_H, KC_N}, {KC_E, KC_K, KC_S, KC_T, KC_N, KC_S, KC_G, KC_L, KC_SPC}},
    // 331. 일반 약어 | 달리 (초성 ㄷ+ㄹ / 중성  / 종성 ㄹ)
    {{KC_E, KC_I, KC_M}, {KC_E, KC_K, KC_F, KC_F, KC_L}},
    // 332. 일반 약어 | 담당 (초성 ㄷ / 중성  / 종성 ㅁ+ㅇ)
    {{KC_A, KC_I, KC_Z}, {KC_E, KC_K, KC_A, KC_E, KC_K, KC_D}},
    // 333. 일반 약어 | 담배 (초성 ㄷ+ㅂ / 중성  / 종성 ㅁ)
    {{KC_I, KC_O, KC_Z}, {KC_E, KC_K, KC_A, KC_Q, KC_O}},
    // 334. 일반 약어 | 당시 (초성 ㄷ+ㅅ / 중성  / 종성 ㅇ)
    {{KC_A, KC_I, KC_N}, {KC_E, KC_K, KC_D, KC_T, KC_L}},
    // 335. 일반 약어 | 당신 (초성 ㄷ+ㅅ / 중성  / 종성 ㄴ)
    {{KC_I, KC_N, KC_S}, {KC_E, KC_K, KC_D, KC_T, KC_L, KC_S}},
    // 336. 일반 약어 | 당연 (초성 ㄷ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_I, KC_S}, {KC_E, KC_K, KC_D, KC_D, KC_U, KC_S}},
    // 341. 일반 약어 | 대부분 (초성 ㄷ+ㅂ / 중성  / 종성 ㄴ)
    {{KC_I, KC_O, KC_S}, {KC_E, KC_O, KC_Q, KC_N, KC_Q, KC_N, KC_S}},
    // 342. 일반 약어 | 대비 (초성 ㄷ+ㅂ / 중성 ㅣ / 종성 )
    {{KC_D, KC_I, KC_O}, {KC_E, KC_O, KC_Q, KC_L}},
    // 348. 일반 약어 | 대통령 (초성 ㄷ+ㄹ / 중성  / 종성 ㅇ)
    {{KC_A, KC_I, KC_M}, {KC_E, KC_O, KC_X, KC_H, KC_D, KC_F, KC_U, KC_D}},
    // 351. 일반 약어 | 대학 (초성 ㄷ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_I}, {KC_E, KC_O, KC_G, KC_K, KC_R}},
    // 352. 일반 약어 | 대한 (초성 ㄷ+ㅎ / 중성  / 종성 ㄴ)
    {{KC_H, KC_I, KC_S}, {KC_E, KC_O, KC_G, KC_K, KC_S}},
    // 356. 일반 약어 | 더니_ (초성 ㄷ+ㄴ / 중성 ㅓ / 종성 )
    {{KC_I, KC_R, KC_U}, {KC_E, KC_J, KC_S, KC_L, KC_SPC}},
    // 358. 일반 약어 | 더욱_ (초성 ㄷ+ㅇ / 중성  / 종성 ㄱ)
    {{KC_I, KC_J, KC_X}, {KC_E, KC_J, KC_D, KC_N, KC_R, KC_SPC}},
    // 360. 일반 약어 | 도_불구하고_ (초성 ㄷ+ㅂ / 중성 ㅏ+ㅗ / 종성 )
    {{KC_I, KC_O, KC_DOT}, {KC_E, KC_H, KC_SPC, KC_Q, KC_N, KC_F, KC_R, KC_N, KC_G, KC_K, KC_R, KC_H, KC_SPC}},
    // 361. 일반 약어 | 도록_ (초성 ㄷ+ㄹ / 중성  / 종성 ㄱ)
    {{KC_I, KC_M, KC_X}, {KC_E, KC_H, KC_F, KC_H, KC_R, KC_SPC}},
    // 362. 일반 약어 | 도서관 (초성 ㄷ+ㅅ / 중성 ㅗ+ㅓ / 종성 )
    {{KC_I, KC_N, KC_DOT}, {KC_E, KC_H, KC_T, KC_J, KC_R, KC_H, KC_K, KC_S}},
    // 363. 일반 약어 | 도시 (초성 ㄷ+ㅅ / 중성 ㅗ / 종성 )
    {{KC_I, KC_N, KC_V}, {KC_E, KC_H, KC_T, KC_L}},
    // 363. 일반 약어 | 도시 (초성 ㄷ+ㅅ / 중성 ㅗ / 종성 )
    {{KC_I, KC_N, KC_DOT}, {KC_E, KC_H, KC_T, KC_L}},
    // 364. 일반 약어 | 도움 (초성 ㄷ+ㅇ / 중성  / 종성 ㅁ)
    {{KC_I, KC_J, KC_Z}, {KC_E, KC_H, KC_D, KC_N, KC_A}},
    // 365. 일반 약어 | 도입 (초성 ㄷ+ㅇ / 중성  / 종성 ㅂ)
    {{KC_I, KC_J, KC_W}, {KC_E, KC_H, KC_D, KC_L, KC_Q}},
    // 369. 일반 약어 | 독특 (초성 ㄷ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_G, KC_I, KC_V}, {KC_E, KC_H, KC_R, KC_X, KC_M, KC_R}},
    // 378. 일반 약어 | 되겠 (초성 ㄷ+ㄱ / 중성  / 종성 ㅅ)
    {{KC_I, KC_K, KC_Q}, {KC_E, KC_H, KC_L, KC_R, KC_P, SFT(KC_T)}},
    // 379. 일반 약어 | 되는_ (초성 ㄷ+ㄴ / 중성 ㅗ+ㅣ / 종성 )
    {{KC_I, KC_U, KC_DOT}, {KC_E, KC_H, KC_L, KC_S, KC_M, KC_S, KC_SPC}},
    // 381. 일반 약어 | 되었 (초성 ㄷ+ㅇ / 중성  / 종성 ㅅ)
    {{KC_I, KC_J, KC_Q}, {KC_E, KC_H, KC_L, KC_D, KC_J, SFT(KC_T)}},
    // 382. 일반 약어 | 드는_ (초성 ㄷ+ㄴ / 중성 ㅡ / 종성 )
    {{KC_G, KC_I, KC_U}, {KC_E, KC_M, KC_S, KC_M, KC_S, KC_SPC}},
    // 387. 일반 약어 | 든지_ (초성 ㄷ+ㅈ / 중성  / 종성 ㄴ)
    {{KC_I, KC_L, KC_S}, {KC_E, KC_M, KC_S, KC_W, KC_L, KC_SPC}},
    // 389. 일반 약어 | 들은_ (초성 ㄷ / 중성  / 종성 ㄹ+ㄴ)
    {{KC_E, KC_I, KC_S}, {KC_E, KC_M, KC_F, KC_D, KC_M, KC_S, KC_SPC}},
    // 390. 일반 약어 | 들의_ (초성 ㄷ+ㅇ / 중성  / 종성 ㄹ)
    {{KC_E, KC_I, KC_J}, {KC_E, KC_M, KC_F, KC_D, KC_M, KC_L, KC_SPC}},
    // 396. 일반 약어 | 따라 (초성 ㄷ+ㄹ / 중성 ㅏ / 종성 )
    {{KC_F, KC_I, KC_M}, {SFT(KC_E), KC_K, KC_F, KC_K}},
    // 397. 일반 약어 | 따라서_ (초성 ㄷ+ㄹ / 중성 ㅓ / 종성 )
    {{KC_I, KC_M, KC_R}, {SFT(KC_E), KC_K, KC_F, KC_K, KC_T, KC_J, KC_SPC}},
    // 398. 일반 약어 | 따로_ (초성 ㄷ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_I, KC_M, KC_V}, {SFT(KC_E), KC_K, KC_F, KC_H, KC_SPC}},
    // 398. 일반 약어 | 따로_ (초성 ㄷ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_I, KC_M, KC_DOT}, {SFT(KC_E), KC_K, KC_F, KC_H, KC_SPC}},
    // 399. 일반 약어 | 때로_ (초성 ㄷ+ㄹ / 중성 ㅐ+ㅗ / 종성 )
    {{KC_I, KC_M, KC_DOT}, {SFT(KC_E), KC_O, KC_F, KC_H, KC_SPC}},
    // 400. 일반 약어 | 때문 (초성 ㄸ / 중성  / 종성 ㄴ)
    {{KC_I, KC_J, KC_S}, {SFT(KC_E), KC_O, KC_A, KC_N, KC_S}},
    // 402. 일반 약어 | 또는_ (초성 ㄷ+ㄴ / 중성 ㅗ / 종성 )
    {{KC_I, KC_U, KC_V}, {SFT(KC_E), KC_H, KC_S, KC_M, KC_S, KC_SPC}},
    // 402. 일반 약어 | 또는_ (초성 ㄷ+ㄴ / 중성 ㅗ / 종성 )
    {{KC_I, KC_U, KC_DOT}, {SFT(KC_E), KC_H, KC_S, KC_M, KC_S, KC_SPC}},
    // 403. 일반 약어 | 또다시_ (초성 ㄷ+ㅅ / 중성 ㅗ+ㅏ+ㅣ / 종성 )
    {{KC_I, KC_N, KC_DOT}, {SFT(KC_E), KC_H, KC_E, KC_K, KC_T, KC_L, KC_SPC}},
    // 406. 일반 약어 | 라게_ (초성 ㄹ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_M}, {KC_F, KC_K, KC_R, KC_P, KC_SPC}},
    // 407. 일반 약어 | 라고 (초성 ㄹ+ㄱ / 중성 ㅏ+ㅗ / 종성 )
    {{KC_K, KC_M, KC_DOT}, {KC_F, KC_K, KC_R, KC_H}},
    // 408. 일반 약어 | 라는_ (초성 ㄹ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_M}, {KC_F, KC_K, KC_S, KC_M, KC_S, KC_SPC}},
    // 409. 일반 약어 | 라도_ (초성 ㄹ+ㄷ / 중성 ㅏ+ㅗ / 종성 )
    {{KC_I, KC_M, KC_DOT}, {KC_F, KC_K, KC_E, KC_H, KC_SPC}},
    // 410. 일반 약어 | 라디오 (초성 ㄹ+ㅇ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_J, KC_M, KC_DOT}, {KC_F, KC_K, KC_E, KC_L, KC_D, KC_H}},
    // 413. 일반 약어 | 러운_ (초성 ㄹ+ㅇ / 중성 ㅓ / 종성 )
    {{KC_J, KC_M, KC_R}, {KC_F, KC_J, KC_D, KC_N, KC_S, KC_SPC}},
    // 414. 일반 약어 | 려고_ (초성 ㄹ+ㄱ / 중성 ㅕ / 종성 )
    {{KC_K, KC_M, KC_T}, {KC_F, KC_U, KC_R, KC_H, KC_SPC}},
    // 415. 일반 약어 | 려면_ (초성 ㄹ+ㅁ / 중성 ㅕ / 종성 )
    {{KC_M, KC_T, KC_Y}, {KC_F, KC_U, KC_A, KC_U, KC_S, KC_SPC}},
    // 416. 일반 약어 | 려운_ (초성 ㄹ+ㅇ / 중성 ㅕ / 종성 )
    {{KC_J, KC_M, KC_T}, {KC_F, KC_U, KC_D, KC_N, KC_S, KC_SPC}},
    // 417. 일반 약어 | 로서_ (초성 ㅅ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_M, KC_N, KC_V}, {KC_F, KC_H, KC_T, KC_J, KC_SPC}},
    // 417. 일반 약어 | 로서_ (초성 ㅅ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_M, KC_N, KC_DOT}, {KC_F, KC_H, KC_T, KC_J, KC_SPC}},
    // 418. 일반 약어 | 로써_ (초성 ㅅ+ㄹ / 중성 ㅓ / 종성 )
    {{KC_M, KC_N, KC_R}, {KC_F, KC_H, SFT(KC_T), KC_J, KC_SPC}},
    // 420. 일반 약어 | 롭게_ (초성 ㄹ+ㄱ / 중성 ㅗ+ㅔ / 종성 )
    {{KC_K, KC_M, KC_DOT}, {KC_F, KC_H, KC_Q, KC_R, KC_P, KC_SPC}},
    // 421. 일반 약어 | 루는_ (초성 ㄹ / 중성 ㅜ+ㅡ / 종성 )
    {{KC_B, KC_G, KC_M}, {KC_F, KC_N, KC_S, KC_M, KC_S, KC_SPC}},
    // 422. 일반 약어 | 르는_ (초성 ㄹ+ㄴ / 중성 ㅡ / 종성 )
    {{KC_G, KC_M, KC_U}, {KC_F, KC_M, KC_S, KC_M, KC_S, KC_SPC}},
    // 428. 일반 약어 | 마리 (초성 ㅁ+ㄹ / 중성 ㅏ / 종성 )
    {{KC_F, KC_M, KC_Y}, {KC_A, KC_K, KC_F, KC_L}},
    // 429. 일반 약어 | 마을 (초성 ㅁ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_Y}, {KC_A, KC_K, KC_D, KC_M, KC_F}},
    // 431. 일반 약어 | 마자_ (초성 ㅁ+ㅈ / 중성 ㅏ / 종성 )
    {{KC_F, KC_L, KC_Y}, {KC_A, KC_K, KC_W, KC_K, KC_SPC}},
    // 432. 일반 약어 | 마저_ (초성 ㅁ+ㅈ / 중성 ㅓ / 종성 )
    {{KC_L, KC_R, KC_Y}, {KC_A, KC_K, KC_W, KC_J, KC_SPC}},
    // 436. 일반 약어 | 마치_ (초성 ㅁ+ㅈ / 중성 ㅣ / 종성 )
    {{KC_D, KC_L, KC_Y}, {KC_A, KC_K, KC_C, KC_L, KC_SPC}},
    // 437. 일반 약어 | 마침_ (초성 ㅁ+ㅈ / 중성  / 종성 ㅁ)
    {{KC_L, KC_Y, KC_Z}, {KC_A, KC_K, KC_C, KC_L, KC_A, KC_SPC}},
    // 438. 일반 약어 | 만나게_ (초성 ㅁ+ㄴ / 중성 ㅔ / 종성 )
    {{KC_C, KC_U, KC_Y}, {KC_A, KC_K, KC_S, KC_S, KC_K, KC_R, KC_P, KC_SPC}},
    // 439. 일반 약어 | 만들 (초성 ㄷ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_I}, {KC_A, KC_K, KC_S, KC_E, KC_M, KC_F}},
    // 440. 일반 약어 | 만약 (초성 ㅁ / 중성  / 종성 ㄴ+ㄱ)
    {{KC_S, KC_X, KC_Y}, {KC_A, KC_K, KC_S, KC_D, KC_I, KC_R}},
    // 440. 일반 약어 | 만약 (초성 ㅁ / 중성  / 종성 ㄴ+ㄱ)
    {{KC_A, KC_E, KC_Y}, {KC_A, KC_K, KC_S, KC_D, KC_I, KC_R}},
    // 442. 일반 약어 | 만큼_ (초성 ㅁ+ㅎ / 중성  / 종성 ㅁ)
    {{KC_H, KC_Y, KC_Z}, {KC_A, KC_K, KC_S, KC_Z, KC_M, KC_A, KC_SPC}},
    // 445. 일반 약어 | 많이_ (초성 ㅁ / 중성  / 종성 ㄶ)
    {{KC_A, KC_S, KC_Y}, {KC_A, KC_K, KC_S, KC_G, KC_D, KC_L, KC_SPC}},
    // 446. 일반 약어 | 말씀 (초성 ㅁ+ㅅ / 중성  / 종성 ㄹ)
    {{KC_E, KC_N, KC_Y}, {KC_A, KC_K, KC_F, SFT(KC_T), KC_M, KC_A}},
    // 447. 일반 약어 | 맛있 (초성 ㅁ / 중성  / 종성 ㅆ)
    {{KC_A, KC_Q, KC_Y}, {KC_A, KC_K, KC_T, KC_D, KC_L, SFT(KC_T)}},
    // 450. 일반 약어 | 매우_ (초성 ㅁ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_Y}, {KC_A, KC_O, KC_D, KC_N, KC_SPC}},
    // 451. 일반 약어 | 매체 (초성 ㅁ+ㅎ / 중성 ㅔ / 종성 )
    {{KC_C, KC_H, KC_Y}, {KC_A, KC_O, KC_C, KC_P}},
    // 452. 일반 약어 | 머리 (초성 ㅁ+ㄹ / 중성 ㅓ / 종성 )
    {{KC_M, KC_R, KC_Y}, {KC_A, KC_J, KC_F, KC_L}},
    // 454. 일반 약어 | 먹는_ (초성 ㅁ / 중성 ㅓ+ㅡ / 종성 )
    {{KC_G, KC_R, KC_Y}, {KC_A, KC_J, KC_R, KC_S, KC_M, KC_S, KC_SPC}},
    // 456. 일반 약어 | 멀리_ (초성 ㅁ+ㄹ / 중성  / 종성 ㄹ)
    {{KC_E, KC_M, KC_Y}, {KC_A, KC_J, KC_F, KC_F, KC_L, KC_SPC}},
    // 457. 일반 약어 | 며칠 (초성 ㅁ+ㅈ / 중성 ㅕ / 종성 )
    {{KC_L, KC_T, KC_Y}, {KC_A, KC_U, KC_C, KC_L, KC_F}},
    // 459. 일반 약어 | 명령 (초성 ㅁ+ㄹ / 중성  / 종성 ㅇ)
    {{KC_A, KC_M, KC_Y}, {KC_A, KC_U, KC_D, KC_F, KC_U, KC_D}},
    // 460. 일반 약어 | 모든_ (초성 ㅁ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_G, KC_V, KC_Y}, {KC_A, KC_H, KC_E, KC_M, KC_S, KC_SPC}},
    // 461. 일반 약어 | 모래 (초성 ㅁ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_M, KC_V, KC_Y}, {KC_A, KC_H, KC_F, KC_O}},
    // 461. 일반 약어 | 모래 (초성 ㅁ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_M, KC_Y, KC_DOT}, {KC_A, KC_H, KC_F, KC_O}},
    // 462. 일반 약어 | 모르는_ (초성 ㅁ+ㄴ / 중성 ㅡ / 종성 )
    {{KC_G, KC_U, KC_Y}, {KC_A, KC_H, KC_F, KC_M, KC_S, KC_M, KC_S, KC_SPC}},
    // 463. 일반 약어 | 모습 (초성 ㅁ+ㅅ / 중성  / 종성 ㅂ)
    {{KC_N, KC_W, KC_Y}, {KC_A, KC_H, KC_T, KC_M, KC_Q}},
    // 465. 일반 약어 | 목소리 (초성 ㅁ+ㅅ / 중성  / 종성 ㄱ)
    {{KC_N, KC_X, KC_Y}, {KC_A, KC_H, KC_R, KC_T, KC_H, KC_F, KC_L}},
    // 468. 일반 약어 | 목표 (초성 ㅁ+ㅂ / 중성  / 종성 ㄱ)
    {{KC_O, KC_X, KC_Y}, {KC_A, KC_H, KC_R, KC_V, KC_Y}},
    // 471. 일반 약어 | 무대 (초성 ㄷ / 중성 ㅜ+ㅏ / 종성 )
    {{KC_B, KC_F, KC_I}, {KC_A, KC_N, KC_E, KC_O}},
    // 474. 일반 약어 | 무릎 (초성 ㅁ / 중성  / 종성 ㅍ)
    {{KC_W, KC_Y, KC_SCLN}, {KC_A, KC_N, KC_F, KC_M, KC_V}},
    // 475. 일반 약어 | 무리 (초성 ㅁ+ㄹ / 중성 ㅜ / 종성 )
    {{KC_B, KC_M, KC_Y}, {KC_A, KC_N, KC_F, KC_L}},
    // 477. 일반 약어 | 무슨_ (초성 ㅁ+ㅅ / 중성  / 종성 ㄴ)
    {{KC_N, KC_S, KC_Y}, {KC_A, KC_N, KC_T, KC_M, KC_S, KC_SPC}},
    // 478. 일반 약어 | 무시 (초성 ㅁ+ㅅ / 중성 ㅜ / 종성 )
    {{KC_B, KC_N, KC_Y}, {KC_A, KC_N, KC_T, KC_L}},
    // 480. 일반 약어 | 무역 (초성 ㅁ / 중성 ㅜ+ㅕ / 종성 )
    {{KC_B, KC_T, KC_Y}, {KC_A, KC_N, KC_D, KC_U, KC_R}},
    // 482. 일반 약어 | 문득_ (초성 ㄷ / 중성 ㅜ+ㅡ / 종성 )
    {{KC_B, KC_G, KC_I}, {KC_A, KC_N, KC_S, KC_E, KC_M, KC_R, KC_SPC}},
    // 484. 일반 약어 | 문제 (초성 ㅁ+ㅈ / 중성 ㅔ / 종성 )
    {{KC_C, KC_L, KC_Y}, {KC_A, KC_N, KC_S, KC_W, KC_P}},
    // 486. 일반 약어 | 문학 (초성 ㅁ+ㅎ / 중성  / 종성 ㄱ)
    {{KC_H, KC_X, KC_Y}, {KC_A, KC_N, KC_S, KC_G, KC_K, KC_R}},
    // 490. 일반 약어 | 물건 (초성 ㅁ / 중성  / 종성 ㄹ+ㄴ)
    {{KC_E, KC_S, KC_Y}, {KC_A, KC_N, KC_F, KC_R, KC_J, KC_S}},
    // 491. 일반 약어 | 물론_ (초성 ㅁ+ㄹ / 중성  / 종성 ㄴ)
    {{KC_M, KC_S, KC_Y}, {KC_A, KC_N, KC_F, KC_F, KC_H, KC_S, KC_SPC}},
    // 496. 일반 약어 | 므로_ (초성 ㅁ+ㄹ / 중성 ㅡ / 종성 )
    {{KC_G, KC_M, KC_Y}, {KC_A, KC_M, KC_F, KC_H, KC_SPC}},
    // 497. 일반 약어 | 미국 (초성 ㅁ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_Y}, {KC_A, KC_L, KC_R, KC_N, KC_R}},
    // 500. 일반 약어 | 미리_ (초성 ㅁ+ㄹ / 중성 ㅣ / 종성 )
    {{KC_D, KC_M, KC_Y}, {KC_A, KC_L, KC_F, KC_L, KC_SPC}},
    // 501. 일반 약어 | 미소 (초성 ㅁ+ㅅ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_N, KC_Y, KC_DOT}, {KC_A, KC_L, KC_T, KC_H}},
    // 503. 일반 약어 | 미터 (초성 ㅁ+ㅎ / 중성 ㅣ / 종성 )
    {{KC_D, KC_H, KC_Y}, {KC_A, KC_L, KC_X, KC_J}},
    // 504. 일반 약어 | 민족 (초성 ㅁ+ㅈ / 중성  / 종성 ㄱ)
    {{KC_L, KC_X, KC_Y}, {KC_A, KC_L, KC_S, KC_W, KC_H, KC_R}},
    // 507. 일반 약어 | 믿음 (초성 ㅁ / 중성  / 종성 ㄷ)
    {{KC_Y, KC_Z, KC_SCLN}, {KC_A, KC_L, KC_E, KC_D, KC_M, KC_A}},
    // 511. 일반 약어 | 바다 (초성 ㅂ+ㄷ / 중성 ㅏ / 종성 )
    {{KC_F, KC_I, KC_O}, {KC_Q, KC_K, KC_E, KC_K}},
    // 513. 일반 약어 | 바라 (초성 ㅂ+ㄹ / 중성 ㅏ / 종성 )
    {{KC_F, KC_M, KC_O}, {KC_Q, KC_K, KC_F, KC_K}},
    // 514. 일반 약어 | 바람 (초성 ㅂ+ㄹ / 중성  / 종성 ㅁ)
    {{KC_M, KC_O, KC_Z}, {KC_Q, KC_K, KC_F, KC_K, KC_A}},
    // 516. 일반 약어 | 바로_ (초성 ㅂ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_M, KC_O, KC_V}, {KC_Q, KC_K, KC_F, KC_H, KC_SPC}},
    // 516. 일반 약어 | 바로_ (초성 ㅂ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_M, KC_O, KC_DOT}, {KC_Q, KC_K, KC_F, KC_H, KC_SPC}},
    // 517. 일반 약어 | 바위 (초성 ㅂ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_O}, {KC_Q, KC_K, KC_D, KC_N, KC_L}},
    // 518. 일반 약어 | 바지 (초성 ㅂ+ㅈ / 중성 ㅣ / 종성 )
    {{KC_D, KC_L, KC_O}, {KC_Q, KC_K, KC_W, KC_L}},
    // 519. 일반 약어 | 바탕 (초성 ㅂ+ㄷ / 중성  / 종성 ㅇ)
    {{KC_A, KC_I, KC_O}, {KC_Q, KC_K, KC_X, KC_K, KC_D}},
    // 522. 일반 약어 | 밖에_ (초성 ㅂ / 중성  / 종성 ㄲ)
    {{KC_A, KC_O, KC_X}, {KC_Q, KC_K, SFT(KC_R), KC_D, KC_P, KC_SPC}},
    // 527. 일반 약어 | 반면 (초성 ㅂ+ㅁ / 중성  / 종성 ㄴ)
    {{KC_O, KC_S, KC_Y}, {KC_Q, KC_K, KC_S, KC_A, KC_U, KC_S}},
    // 529. 일반 약어 | 받는_ (초성 ㅂ+ㄴ / 중성 ㅏ / 종성 )
    {{KC_F, KC_O, KC_U}, {KC_Q, KC_K, KC_E, KC_S, KC_M, KC_S, KC_SPC}},
    // 530. 일반 약어 | 받아 (초성 ㅂ / 중성  / 종성 ㄷ)
    {{KC_O, KC_Z, KC_SCLN}, {KC_Q, KC_K, KC_E, KC_D, KC_K}},
    // 531. 일반 약어 | 받은_ (초성 ㅂ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_O}, {KC_Q, KC_K, KC_E, KC_D, KC_M, KC_S, KC_SPC}},
    // 533. 일반 약어 | 발달 (초성 ㅂ+ㄷ / 중성  / 종성 ㄹ)
    {{KC_E, KC_I, KC_O}, {KC_Q, KC_K, KC_F, KC_E, KC_K, KC_F}},
    // 535. 일반 약어 | 발전 (초성 ㅂ+ㅈ / 중성  / 종성 ㄹ)
    {{KC_E, KC_L, KC_O}, {KC_Q, KC_K, KC_F, KC_W, KC_J, KC_S}},
    // 542. 일반 약어 | 방식 (초성 ㅂ+ㅅ / 중성  / 종성 ㅇ)
    {{KC_A, KC_N, KC_O}, {KC_Q, KC_K, KC_D, KC_T, KC_L, KC_R}},
    // 544. 일반 약어 | 방침 (초성 ㅂ+ㅈ / 중성  / 종성 ㅁ)
    {{KC_L, KC_O, KC_Z}, {KC_Q, KC_K, KC_D, KC_C, KC_L, KC_A}},
    // 558. 일반 약어 | 법칙 (초성 ㅂ+ㅈ / 중성  / 종성 ㅂ)
    {{KC_L, KC_O, KC_W}, {KC_Q, KC_J, KC_Q, KC_C, KC_L, KC_R}},
    // 559. 일반 약어 | 벗어 (초성 ㅂ+ㅇ / 중성  / 종성 ㅅ)
    {{KC_J, KC_O, KC_Q}, {KC_Q, KC_J, KC_T, KC_D, KC_J}},
    // 561. 일반 약어 | 병원 (초성 ㅂ+ㅇ / 중성  / 종성 ㅇ)
    {{KC_A, KC_J, KC_O}, {KC_Q, KC_U, KC_D, KC_D, KC_N, KC_J, KC_S}},
    // 562. 일반 약어 | 보고 (초성 ㅂ+ㄱ / 중성 ㅗ / 종성 )
    {{KC_K, KC_O, KC_V}, {KC_Q, KC_H, KC_R, KC_H}},
    // 562. 일반 약어 | 보고 (초성 ㅂ+ㄱ / 중성 ㅗ / 종성 )
    {{KC_K, KC_O, KC_DOT}, {KC_Q, KC_H, KC_R, KC_H}},
    // 566. 일반 약어 | 보는_ (초성 ㅂ+ㄴ / 중성 ㅗ / 종성 )
    {{KC_O, KC_U, KC_V}, {KC_Q, KC_H, KC_S, KC_M, KC_S, KC_SPC}},
    // 566. 일반 약어 | 보는_ (초성 ㅂ+ㄴ / 중성 ㅗ / 종성 )
    {{KC_O, KC_U, KC_DOT}, {KC_Q, KC_H, KC_S, KC_M, KC_S, KC_SPC}},
    // 567. 일반 약어 | 보다_ (초성 ㅂ+ㄷ / 중성 ㅗ / 종성 )
    {{KC_I, KC_O, KC_V}, {KC_Q, KC_H, KC_E, KC_K, KC_SPC}},
    // 567. 일반 약어 | 보다_ (초성 ㅂ+ㄷ / 중성 ㅗ / 종성 )
    {{KC_I, KC_O, KC_DOT}, {KC_Q, KC_H, KC_E, KC_K, KC_SPC}},
    // 577. 일반 약어 | 부도 (초성 ㅂ+ㄷ / 중성 ㅜ+ㅗ / 종성 )
    {{KC_I, KC_O, KC_DOT}, {KC_Q, KC_N, KC_E, KC_H}},
    // 579. 일반 약어 | 부드 (초성 ㅂ+ㄷ / 중성 ㅡ / 종성 )
    {{KC_G, KC_I, KC_O}, {KC_Q, KC_N, KC_E, KC_M}},
    // 581. 일반 약어 | 부모 (초성 ㅂ+ㅁ / 중성 ㅜ / 종성 )
    {{KC_B, KC_O, KC_Y}, {KC_Q, KC_N, KC_A, KC_H}},
    // 582. 일반 약어 | 부모님 (초성 ㅂ+ㅁ / 중성  / 종성 ㅁ)
    {{KC_O, KC_Y, KC_Z}, {KC_Q, KC_N, KC_A, KC_H, KC_S, KC_L, KC_A}},
    // 585. 일반 약어 | 부산 (초성 ㅂ+ㅅ / 중성  / 종성 ㄴ)
    {{KC_N, KC_O, KC_S}, {KC_Q, KC_N, KC_T, KC_K, KC_S}},
    // 586. 일반 약어 | 부상 (초성 ㅂ+ㅅ / 중성 ㅜ / 종성 )
    {{KC_B, KC_N, KC_O}, {KC_Q, KC_N, KC_T, KC_K, KC_D}},
    // 587. 일반 약어 | 부엌 (초성 ㅂ / 중성  / 종성 ㅋ)
    {{KC_O, KC_X, KC_SCLN}, {KC_Q, KC_N, KC_D, KC_J, KC_Z}},
    // 592. 일반 약어 | 부처 (초성 ㅂ+ㅈ / 중성 ㅓ / 종성 )
    {{KC_L, KC_O, KC_R}, {KC_Q, KC_N, KC_C, KC_J}},
    // 594. 일반 약어 | 부터_ (초성 ㅂ+ㄷ / 중성 ㅜ / 종성 )
    {{KC_B, KC_I, KC_O}, {KC_Q, KC_N, KC_X, KC_J, KC_SPC}},
    // 596. 일반 약어 | 북한 (초성 ㅂ+ㅎ / 중성  / 종성 ㄴ)
    {{KC_H, KC_O, KC_S}, {KC_Q, KC_N, KC_R, KC_G, KC_K, KC_S}},
    // 597. 일반 약어 | 분명 (초성 ㅂ+ㅁ / 중성  / 종성 ㅇ)
    {{KC_A, KC_O, KC_Y}, {KC_Q, KC_N, KC_S, KC_A, KC_U, KC_D}},
    // 600. 일반 약어 | 분위기 (초성 ㅂ+ㄱ / 중성  / 종성 ㄴ)
    {{KC_K, KC_O, KC_S}, {KC_Q, KC_N, KC_S, KC_D, KC_N, KC_L, KC_R, KC_L}},
    // 603. 일반 약어 | 불구 (초성 ㅂ+ㄱ / 중성 ㅜ / 종성 )
    {{KC_B, KC_K, KC_O}, {KC_Q, KC_N, KC_F, KC_R, KC_N}},
    // 605. 일반 약어 | 불법 (초성 ㅂ / 중성  / 종성 ㄹ+ㅂ)
    {{KC_E, KC_O, KC_W}, {KC_Q, KC_N, KC_F, KC_Q, KC_J, KC_Q}},
    // 606. 일반 약어 | 불안 (초성 ㅂ / 중성  / 종성 ㄹ+ㄴ)
    {{KC_E, KC_O, KC_S}, {KC_Q, KC_N, KC_F, KC_D, KC_K, KC_S}},
    // 612. 일반 약어 | 비닐 (초성 ㅂ+ㄴ / 중성  / 종성 ㄹ)
    {{KC_E, KC_O, KC_U}, {KC_Q, KC_L, KC_S, KC_L, KC_F}},
    // 613. 일반 약어 | 비디오 (초성 ㅂ+ㄷ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_I, KC_O, KC_DOT}, {KC_Q, KC_L, KC_E, KC_L, KC_D, KC_H}},
    // 614. 일반 약어 | 비로소_ (초성 ㅂ+ㅅ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_N, KC_O, KC_DOT}, {KC_Q, KC_L, KC_F, KC_H, KC_T, KC_H, KC_SPC}},
    // 615. 일반 약어 | 비록_ (초성 ㅂ+ㄹ / 중성  / 종성 ㄱ)
    {{KC_M, KC_O, KC_X}, {KC_Q, KC_L, KC_F, KC_H, KC_R, KC_SPC}},
    // 616. 일반 약어 | 비롯 (초성 ㅂ+ㄹ / 중성  / 종성 ㅅ)
    {{KC_M, KC_O, KC_Q}, {KC_Q, KC_L, KC_F, KC_H, KC_T}},
    // 617. 일반 약어 | 비밀 (초성 ㅂ+ㅁ / 중성  / 종성 ㄹ)
    {{KC_E, KC_O, KC_Y}, {KC_Q, KC_L, KC_A, KC_L, KC_F}},
    // 618. 일반 약어 | 비슷 (초성 ㅂ+ㅅ / 중성  / 종성 ㅅ)
    {{KC_N, KC_O, KC_Q}, {KC_Q, KC_L, KC_T, KC_M, KC_T}},
    // 620. 일반 약어 | 빨리_ (초성 ㅂ+ㄹ / 중성  / 종성 ㄹ)
    {{KC_E, KC_M, KC_O}, {SFT(KC_Q), KC_K, KC_F, KC_F, KC_L, KC_SPC}},
    // 621. 일반 약어 | 뿌리 (초성 ㅂ+ㄹ / 중성 ㅜ / 종성 )
    {{KC_B, KC_M, KC_O}, {SFT(KC_Q), KC_N, KC_F, KC_L}},
    // 622. 일반 약어 | 쁘게_ (초성 ㅂ+ㄱ / 중성 ㅔ / 종성 )
    {{KC_C, KC_K, KC_O}, {SFT(KC_Q), KC_M, KC_R, KC_P, KC_SPC}},
    // 624. 일반 약어 | 사고 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 )
    {{KC_K, KC_N, KC_V}, {KC_T, KC_K, KC_R, KC_H}},
    // 624. 일반 약어 | 사고 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 )
    {{KC_K, KC_N, KC_DOT}, {KC_T, KC_K, KC_R, KC_H}},
    // 626. 일반 약어 | 사내 (초성 ㅅ+ㄴ / 중성 ㅏ / 종성 )
    {{KC_F, KC_N, KC_U}, {KC_T, KC_K, KC_S, KC_O}},
    // 627. 일반 약어 | 사는_ (초성 ㅅ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_N}, {KC_T, KC_K, KC_S, KC_M, KC_S, KC_SPC}},
    // 628. 일반 약어 | 사라 (초성 ㅅ+ㄹ / 중성 ㅏ / 종성 )
    {{KC_F, KC_M, KC_N}, {KC_T, KC_K, KC_F, KC_K}},
    // 630. 일반 약어 | 사랑 (초성 ㅅ+ㄹ / 중성  / 종성 ㅇ)
    {{KC_A, KC_M, KC_N}, {KC_T, KC_K, KC_F, KC_K, KC_D}},
    // 632. 일반 약어 | 사무 (초성 ㅅ+ㅁ / 중성 ㅏ / 종성 )
    {{KC_F, KC_N, KC_Y}, {KC_T, KC_K, KC_A, KC_N}},
    // 635. 일반 약어 | 사업 (초성 ㅅ+ㅇ / 중성  / 종성 ㅂ)
    {{KC_J, KC_N, KC_W}, {KC_T, KC_K, KC_D, KC_J, KC_Q}},
    // 640. 일반 약어 | 사회 (초성 ㅅ+ㅎ / 중성 ㅏ / 종성 )
    {{KC_F, KC_H, KC_N}, {KC_T, KC_K, KC_G, KC_H, KC_L}},
    // 644. 일반 약어 | 살펴 (초성 ㅅ+ㅂ / 중성  / 종성 ㄹ)
    {{KC_E, KC_N, KC_O}, {KC_T, KC_K, KC_F, KC_V, KC_U}},
    // 650. 일반 약어 | 상식 (초성 ㅅ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_N, KC_X}, {KC_T, KC_K, KC_D, KC_T, KC_L, KC_R}},
    // 650. 일반 약어 | 상식 (초성 ㅅ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_E, KC_N}, {KC_T, KC_K, KC_D, KC_T, KC_L, KC_R}},
    // 652. 일반 약어 | 상품 (초성 ㅅ+ㅂ / 중성  / 종성 ㅁ)
    {{KC_N, KC_O, KC_Z}, {KC_T, KC_K, KC_D, KC_V, KC_N, KC_A}},
    // 657. 일반 약어 | 새벽 (초성 ㅅ+ㅂ / 중성  / 종성 ㄱ)
    {{KC_N, KC_O, KC_X}, {KC_T, KC_O, KC_Q, KC_U, KC_R}},
    // 659. 일반 약어 | 생각 (초성 ㅅ+ㄱ / 중성  / 종성 ㄱ)
    {{KC_K, KC_N, KC_X}, {KC_T, KC_O, KC_D, KC_R, KC_K, KC_R}},
    // 660. 일반 약어 | 생명 (초성 ㅅ+ㅁ / 중성  / 종성 ㅇ)
    {{KC_A, KC_N, KC_Y}, {KC_T, KC_O, KC_D, KC_A, KC_U, KC_D}},
    // 662. 일반 약어 | 생산 (초성 ㅅ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_N, KC_S}, {KC_T, KC_O, KC_D, KC_T, KC_K, KC_S}},
    // 663. 일반 약어 | 생활 (초성 ㅅ+ㅎ / 중성  / 종성 ㅇ)
    {{KC_A, KC_H, KC_N}, {KC_T, KC_O, KC_D, KC_G, KC_H, KC_K, KC_F}},
    // 665. 일반 약어 | 서는_ (초성 ㅅ / 중성 ㅓ+ㅡ / 종성 )
    {{KC_G, KC_N, KC_R}, {KC_T, KC_J, KC_S, KC_M, KC_S, KC_SPC}},
    // 666. 일반 약어 | 서로_ (초성 ㅅ+ㄹ / 중성 ㅓ+ㅗ / 종성 )
    {{KC_M, KC_N, KC_DOT}, {KC_T, KC_J, KC_F, KC_H, KC_SPC}},
    // 668. 일반 약어 | 서서히 (초성 ㅅ+ㅎ / 중성 ㅓ / 종성 )
    {{KC_H, KC_N, KC_R}, {KC_T, KC_J, KC_T, KC_J, KC_G, KC_L}},
    // 669. 일반 약어 | 서울 (초성 ㅅ+ㅇ / 중성  / 종성 ㄹ)
    {{KC_E, KC_J, KC_N}, {KC_T, KC_J, KC_D, KC_N, KC_F}},
    // 675. 일반 약어 | 선생님 (초성 ㅅ+ㄴ / 중성  / 종성 ㅁ)
    {{KC_N, KC_U, KC_Z}, {KC_T, KC_J, KC_S, KC_T, KC_O, KC_D, KC_S, KC_L, KC_A}},
    // 681. 일반 약어 | 성격 (초성 ㅅ+ㄱ / 중성  / 종성 ㅇ)
    {{KC_A, KC_K, KC_N}, {KC_T, KC_J, KC_D, KC_R, KC_U, KC_R}},
    // 688. 일반 약어 | 세계 (초성 ㅅ+ㄱ / 중성 ㅔ / 종성 )
    {{KC_C, KC_K, KC_N}, {KC_T, KC_P, KC_R, SFT(KC_P)}},
    // 692. 일반 약어 | 세대 (초성 ㅅ+ㄷ / 중성 ㅔ / 종성 )
    {{KC_C, KC_I, KC_N}, {KC_T, KC_P, KC_E, KC_O}},
    // 693. 일반 약어 | 세력 (초성 ㅅ+ㄹ / 중성  / 종성 ㄱ)
    {{KC_M, KC_N, KC_X}, {KC_T, KC_P, KC_F, KC_U, KC_R}},
    // 695. 일반 약어 | 세요 (초성 ㅅ / 중성 ㅔ+ㅏ / 종성 )
    {{KC_C, KC_F, KC_N}, {KC_T, KC_P, KC_D, KC_Y}},
    // 698. 일반 약어 | 소개 (초성 ㅅ+ㄱ / 중성 ㅗ+ㅐ / 종성 )
    {{KC_K, KC_N, KC_DOT}, {KC_T, KC_H, KC_R, KC_O}},
    // 700. 일반 약어 | 소녀 (초성 ㅅ+ㄴ / 중성 ㅕ / 종성 )
    {{KC_N, KC_T, KC_U}, {KC_T, KC_H, KC_S, KC_U}},
    // 704. 일반 약어 | 소리 (초성 ㅅ+ㄹ / 중성 ㅣ / 종성 )
    {{KC_D, KC_M, KC_N}, {KC_T, KC_H, KC_F, KC_L}},
    // 705. 일반 약어 | 소문 (초성 ㅅ+ㅁ / 중성 ㅗ / 종성 )
    {{KC_N, KC_V, KC_Y}, {KC_T, KC_H, KC_A, KC_N, KC_S}},
    // 705. 일반 약어 | 소문 (초성 ㅅ+ㅁ / 중성 ㅗ / 종성 )
    {{KC_N, KC_Y, KC_DOT}, {KC_T, KC_H, KC_A, KC_N, KC_S}},
    // 706. 일반 약어 | 소비 (초성 ㅅ+ㅂ / 중성 ㅗ / 종성 )
    {{KC_N, KC_O, KC_V}, {KC_T, KC_H, KC_Q, KC_L}},
    // 706. 일반 약어 | 소비 (초성 ㅅ+ㅂ / 중성 ㅗ / 종성 )
    {{KC_N, KC_O, KC_DOT}, {KC_T, KC_H, KC_Q, KC_L}},
    // 707. 일반 약어 | 소비자 (초성 ㅅ+ㅂ / 중성 ㅗ+ㅏ / 종성 )
    {{KC_N, KC_O, KC_DOT}, {KC_T, KC_H, KC_Q, KC_L, KC_W, KC_K}},
    // 708. 일반 약어 | 소스 (초성 ㅅ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_G, KC_N, KC_V}, {KC_T, KC_H, KC_T, KC_M}},
    // 709. 일반 약어 | 소재 (초성 ㅅ+ㅈ / 중성 ㅗ+ㅐ / 종성 )
    {{KC_L, KC_N, KC_DOT}, {KC_T, KC_H, KC_W, KC_O}},
    // 710. 일반 약어 | 소주 (초성 ㅅ+ㅈ / 중성 ㅗ+ㅜ / 종성 )
    {{KC_L, KC_N, KC_DOT}, {KC_T, KC_H, KC_W, KC_N}},
    // 713. 일반 약어 | 속도 (초성 ㅅ+ㄷ / 중성  / 종성 ㄱ)
    {{KC_I, KC_N, KC_X}, {KC_T, KC_H, KC_R, KC_E, KC_H}},
    // 716. 일반 약어 | 솔직 (초성 ㅅ+ㅈ / 중성  / 종성 ㄹ)
    {{KC_E, KC_L, KC_N}, {KC_T, KC_H, KC_F, KC_W, KC_L, KC_R}},
    // 717. 일반 약어 | 수고 (초성 ㅅ+ㄱ / 중성 ㅜ+ㅗ / 종성 )
    {{KC_K, KC_N, KC_DOT}, {KC_T, KC_N, KC_R, KC_H}},
    // 719. 일반 약어 | 수도 (초성 ㅅ+ㄷ / 중성 ㅜ / 종성 )
    {{KC_B, KC_I, KC_N}, {KC_T, KC_N, KC_E, KC_H}},
    // 720. 일반 약어 | 수록_ (초성 ㅅ+ㄹ / 중성 ㅜ / 종성 )
    {{KC_B, KC_M, KC_N}, {KC_T, KC_N, KC_F, KC_H, KC_R, KC_SPC}},
    // 722. 일반 약어 | 수사 (초성 ㅅ / 중성 ㅜ+ㅏ / 종성 )
    {{KC_B, KC_F, KC_N}, {KC_T, KC_N, KC_T, KC_K}},
    // 725. 일반 약어 | 수준 (초성 ㅅ+ㅈ / 중성 ㅜ / 종성 )
    {{KC_B, KC_L, KC_N}, {KC_T, KC_N, KC_W, KC_N, KC_S}},
    // 727. 일반 약어 | 수행 (초성 ㅅ+ㅎ / 중성 ㅜ / 종성 )
    {{KC_B, KC_H, KC_N}, {KC_T, KC_N, KC_G, KC_O, KC_D}},
    // 732. 일반 약어 | 쉽게_ (초성 ㅅ+ㄱ / 중성  / 종성 ㅂ)
    {{KC_K, KC_N, KC_W}, {KC_T, KC_N, KC_L, KC_Q, KC_R, KC_P, KC_SPC}},
    // 735. 일반 약어 | 스럽 (초성 ㅅ+ㄹ / 중성  / 종성 ㅂ)
    {{KC_M, KC_N, KC_W}, {KC_T, KC_M, KC_F, KC_J, KC_Q}},
    // 736. 일반 약어 | 스스로 (초성 ㅅ+ㄹ / 중성 ㅡ / 종성 )
    {{KC_G, KC_M, KC_N}, {KC_T, KC_M, KC_T, KC_M, KC_F, KC_H}},
    // 739. 일반 약어 | 스트레스 (초성 ㅅ+ㄷ / 중성 ㅡ / 종성 )
    {{KC_G, KC_I, KC_N}, {KC_T, KC_M, KC_X, KC_M, KC_F, KC_P, KC_T, KC_M}},
    // 740. 일반 약어 | 스포츠 (초성 ㅅ+ㅂ / 중성 ㅡ / 종성 )
    {{KC_G, KC_N, KC_O}, {KC_T, KC_M, KC_V, KC_H, KC_C, KC_M}},
    // 745. 일반 약어 | 시간 (초성 ㅅ+ㄱ / 중성  / 종성 ㄴ)
    {{KC_K, KC_N, KC_S}, {KC_T, KC_L, KC_R, KC_K, KC_S}},
    // 748. 일반 약어 | 시기 (초성 ㅅ+ㄱ / 중성 ㅣ / 종성 )
    {{KC_D, KC_K, KC_N}, {KC_T, KC_L, KC_R, KC_L}},
    // 749. 일반 약어 | 시내 (초성 ㅅ+ㄴ / 중성 ㅣ / 종성 )
    {{KC_D, KC_N, KC_U}, {KC_T, KC_L, KC_S, KC_O}},
    // 751. 일반 약어 | 시다._ (초성 ㅅ+ㄷ / 중성 ㅏ / 종성 )
    {{KC_F, KC_I, KC_N}, {KC_T, KC_L, KC_E, KC_K, KC_DOT, KC_SPC}},
    // 752. 일반 약어 | 시대 (초성 ㅅ+ㄷ / 중성 ㅣ / 종성 )
    {{KC_D, KC_I, KC_N}, {KC_T, KC_L, KC_E, KC_O}},
    // 753. 일반 약어 | 시도 (초성 ㅅ+ㄷ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_I, KC_N, KC_DOT}, {KC_T, KC_L, KC_E, KC_H}},
    // 755. 일반 약어 | 시민 (초성 ㅅ+ㅁ / 중성 ㅣ / 종성 )
    {{KC_D, KC_N, KC_Y}, {KC_T, KC_L, KC_A, KC_L, KC_S}},
    // 757. 일반 약어 | 시작 (초성 ㅅ+ㅈ / 중성  / 종성 ㄱ)
    {{KC_L, KC_N, KC_X}, {KC_T, KC_L, KC_W, KC_K, KC_R}},
    // 758. 일반 약어 | 시장 (초성 ㅅ+ㅈ / 중성  / 종성 ㅇ)
    {{KC_A, KC_L, KC_N}, {KC_T, KC_L, KC_W, KC_K, KC_D}},
    // 762. 일반 약어 | 시험 (초성 ㅅ+ㅎ / 중성  / 종성 ㅁ)
    {{KC_H, KC_N, KC_Z}, {KC_T, KC_L, KC_G, KC_J, KC_A}},
    // 767. 일반 약어 | 식사 (초성 ㅅ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_N}, {KC_T, KC_L, KC_R, KC_T, KC_K}},
    // 771. 일반 약어 | 신라 (초성 ㅅ+ㄹ / 중성  / 종성 ㄴ)
    {{KC_M, KC_N, KC_S}, {KC_T, KC_L, KC_S, KC_F, KC_K}},
    // 774. 일반 약어 | 신부 (초성 ㅅ+ㅂ / 중성 ㅣ / 종성 )
    {{KC_D, KC_N, KC_O}, {KC_T, KC_L, KC_S, KC_Q, KC_N}},
    // 788. 일반 약어 | 싶은_ (초성 ㅅ / 중성  / 종성 ㅍ)
    {{KC_N, KC_W, KC_SCLN}, {KC_T, KC_L, KC_V, KC_D, KC_M, KC_S, KC_SPC}},
    // 790. 일반 약어 | 쓰는_ (초성 ㅅ+ㄴ / 중성 ㅡ / 종성 )
    {{KC_G, KC_N, KC_U}, {SFT(KC_T), KC_M, KC_S, KC_M, KC_S, KC_SPC}},
    // 791. 일반 약어 | 쓰레기 (초성 ㅅ+ㄱ / 중성 ㅡ / 종성 )
    {{KC_G, KC_K, KC_N}, {SFT(KC_T), KC_M, KC_F, KC_P, KC_R, KC_L}},
    // 792. 일반 약어 | 아나운서 (초성 ㄴ+ㅅ / 중성  / 종성 ㄴ)
    {{KC_N, KC_S, KC_U}, {KC_D, KC_K, KC_S, KC_K, KC_D, KC_N, KC_S, KC_T, KC_J}},
    // 795. 일반 약어 | 아들 (초성 ㅇ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_J}, {KC_D, KC_K, KC_E, KC_M, KC_F}},
    // 796. 일반 약어 | 아라 (초성 ㅇ+ㄹ / 중성 ㅏ / 종성 )
    {{KC_F, KC_J, KC_M}, {KC_D, KC_K, KC_F, KC_K}},
    // 799. 일반 약어 | 아무 (초성 ㅇ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_J}, {KC_D, KC_K, KC_A, KC_N}},
    // 803. 일반 약어 | 아무리 (초성 ㄹ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_M}, {KC_D, KC_K, KC_A, KC_N, KC_F, KC_L}},
    // 804. 일반 약어 | 아버지 (초성 ㅂ+ㅈ / 중성 ㅏ / 종성 )
    {{KC_F, KC_L, KC_O}, {KC_D, KC_K, KC_Q, KC_J, KC_W, KC_L}},
    // 806. 일반 약어 | 아저씨 (초성 ㅈ+ㅅ / 중성 ㅓ / 종성 )
    {{KC_L, KC_N, KC_R}, {KC_D, KC_K, KC_W, KC_J, SFT(KC_T), KC_L}},
    // 808. 일반 약어 | 아침 (초성 ㅇ+ㅈ / 중성  / 종성 ㅁ)
    {{KC_J, KC_L, KC_Z}, {KC_D, KC_K, KC_C, KC_L, KC_A}},
    // 809. 일반 약어 | 아파트 (초성 ㅇ+ㅎ / 중성 ㅏ / 종성 )
    {{KC_F, KC_H, KC_J}, {KC_D, KC_K, KC_V, KC_K, KC_X, KC_M}},
    // 813. 일반 약어 | 알려 (초성 ㅇ+ㄹ / 중성  / 종성 ㄹ)
    {{KC_E, KC_J, KC_M}, {KC_D, KC_K, KC_F, KC_F, KC_U}},
    // 824. 일반 약어 | 어리석 (초성 ㅇ+ㄹ / 중성  / 종성 ㄱ)
    {{KC_J, KC_M, KC_X}, {KC_D, KC_J, KC_F, KC_L, KC_T, KC_J, KC_R}},
    // 826. 일반 약어 | 어머니 (초성 ㅇ+ㄴ / 중성 ㅓ / 종성 )
    {{KC_J, KC_R, KC_U}, {KC_D, KC_J, KC_A, KC_J, KC_S, KC_L}},
    // 829. 일반 약어 | 어쩌면_ (초성 ㅈ / 중성 ㅓ+ㅕ / 종성 )
    {{KC_L, KC_R, KC_T}, {KC_D, KC_J, SFT(KC_W), KC_J, KC_A, KC_U, KC_S, KC_SPC}},
    // 835. 일반 약어 | 얼굴 (초성 ㅇ+ㄱ / 중성  / 종성 ㄹ)
    {{KC_E, KC_J, KC_K}, {KC_D, KC_J, KC_F, KC_R, KC_N, KC_F}},
    // 837. 일반 약어 | 얼마나_ (초성 ㅇ+ㄴ / 중성  / 종성 ㄹ)
    {{KC_E, KC_J, KC_U}, {KC_D, KC_J, KC_F, KC_A, KC_K, KC_S, KC_K, KC_SPC}},
    // 841. 일반 약어 | 업체 (초성 ㅇ+ㅎ / 중성 ㅔ / 종성 )
    {{KC_C, KC_H, KC_J}, {KC_D, KC_J, KC_Q, KC_C, KC_P}},
    // 844. 일반 약어 | 없이_ (초성 ㅇ / 중성  / 종성 ㅄ)
    {{KC_J, KC_Q, KC_W}, {KC_D, KC_J, KC_Q, KC_T, KC_D, KC_L, KC_SPC}},
    // 846. 일반 약어 | 에너지 (초성 ㄴ+ㅈ / 중성 ㅔ / 종성 )
    {{KC_C, KC_L, KC_U}, {KC_D, KC_P, KC_S, KC_J, KC_W, KC_L}},
    // 849. 일반 약어 | 에요._ (초성 ㅇ / 중성 ㅔ+ㅏ / 종성 )
    {{KC_C, KC_F, KC_J}, {KC_D, KC_P, KC_D, KC_Y, KC_DOT, KC_SPC}},
    // 851. 일반 약어 | 여러_ (초성 ㄹ / 중성 ㅕ+ㅓ / 종성 )
    {{KC_M, KC_R, KC_T}, {KC_D, KC_U, KC_F, KC_J, KC_SPC}},
    // 858. 일반 약어 | 역사 (초성 ㅇ+ㅅ / 중성  / 종성 ㄱ)
    {{KC_J, KC_N, KC_X}, {KC_D, KC_U, KC_R, KC_T, KC_K}},
    // 859. 일반 약어 | 역할 (초성 ㅇ+ㅎ / 중성  / 종성 ㄱ)
    {{KC_H, KC_J, KC_X}, {KC_D, KC_U, KC_R, KC_G, KC_K, KC_F}},
    // 866. 일반 약어 | 연합 (초성 ㅇ+ㅎ / 중성  / 종성 ㅂ)
    {{KC_H, KC_J, KC_W}, {KC_D, KC_U, KC_S, KC_G, KC_K, KC_Q}},
    // 868. 일반 약어 | 영국 (초성 ㅇ / 중성 ㅜ+ㅕ / 종성 )
    {{KC_B, KC_J, KC_T}, {KC_D, KC_U, KC_D, KC_R, KC_N, KC_R}},
    // 870. 일반 약어 | 영어 (초성 ㅇ / 중성 ㅕ+ㅓ / 종성 )
    {{KC_J, KC_R, KC_T}, {KC_D, KC_U, KC_D, KC_D, KC_J}},
    // 873. 일반 약어 | 영화 (초성 ㅇ+ㅎ / 중성  / 종성 ㅇ)
    {{KC_A, KC_H, KC_J}, {KC_D, KC_U, KC_D, KC_G, KC_H, KC_K}},
    // 878. 일반 약어 | 예수님 (초성 ㅇ+ㅅ / 중성  / 종성 ㅁ)
    {{KC_J, KC_N, KC_Z}, {KC_D, SFT(KC_P), KC_T, KC_N, KC_S, KC_L, KC_A}},
    // 880. 일반 약어 | 예외 (초성 ㅇ / 중성 ㅔ+ㅚ / 종성 )
    {{KC_D, KC_J, KC_V}, {KC_D, SFT(KC_P), KC_D, KC_H, KC_L}},
    // 881. 일반 약어 | 예요._ (초성 ㅇ / 중성 ㅔ+ㅓ / 종성 )
    {{KC_C, KC_J, KC_R}, {KC_D, SFT(KC_P), KC_D, KC_Y, KC_DOT, KC_SPC}},
    // 882. 일반 약어 | 예의 (초성 ㅇ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_G, KC_J, KC_V}, {KC_D, SFT(KC_P), KC_D, KC_M, KC_L}},
    // 885. 일반 약어 | 오는_ (초성 ㅇ+ㄴ / 중성  / 종성 ㄴ)
    {{KC_J, KC_S, KC_U}, {KC_D, KC_H, KC_S, KC_M, KC_S, KC_SPC}},
    // 886. 일반 약어 | 오늘 (초성 ㅇ+ㄴ / 중성 ㅗ / 종성 )
    {{KC_J, KC_U, KC_V}, {KC_D, KC_H, KC_S, KC_M, KC_F}},
    // 886. 일반 약어 | 오늘 (초성 ㅇ+ㄴ / 중성 ㅗ / 종성 )
    {{KC_J, KC_U, KC_DOT}, {KC_D, KC_H, KC_S, KC_M, KC_F}},
    // 887. 일반 약어 | 오늘날 (초성 ㅇ+ㄴ / 중성 ㅗ+ㅏ / 종성 )
    {{KC_J, KC_U, KC_DOT}, {KC_D, KC_H, KC_S, KC_M, KC_F, KC_S, KC_K, KC_F}},
    // 888. 일반 약어 | 오래 (초성 ㅇ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_J, KC_M, KC_V}, {KC_D, KC_H, KC_F, KC_O}},
    // 888. 일반 약어 | 오래 (초성 ㅇ+ㄹ / 중성 ㅗ / 종성 )
    {{KC_J, KC_M, KC_DOT}, {KC_D, KC_H, KC_F, KC_O}},
    // 889. 일반 약어 | 오랫동안 (초성 ㅇ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_J, KC_S}, {KC_D, KC_H, KC_F, KC_O, KC_T, KC_E, KC_H, KC_D, KC_D, KC_K, KC_S}},
    // 891. 일반 약어 | 오후 (초성 ㅇ+ㅎ / 중성 ㅗ+ㅜ / 종성 )
    {{KC_H, KC_J, KC_DOT}, {KC_D, KC_H, KC_G, KC_N}},
    // 892. 일반 약어 | 오히려_ (초성 ㅇ+ㅎ / 중성 ㅗ / 종성 )
    {{KC_H, KC_J, KC_V}, {KC_D, KC_H, KC_G, KC_L, KC_F, KC_U, KC_SPC}},
    // 892. 일반 약어 | 오히려_ (초성 ㅇ+ㅎ / 중성 ㅗ / 종성 )
    {{KC_H, KC_J, KC_DOT}, {KC_D, KC_H, KC_G, KC_L, KC_F, KC_U, KC_SPC}},
    // 896. 일반 약어 | 올해 (초성 ㅇ+ㅎ / 중성  / 종성 ㄹ)
    {{KC_E, KC_H, KC_J}, {KC_D, KC_H, KC_F, KC_G, KC_O}},
    // 902. 일반 약어 | 요금 (초성 ㅇ+ㄱ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_J, KC_K, KC_DOT}, {KC_D, KC_Y, KC_R, KC_M, KC_A}},
    // 904. 일반 약어 | 우는_ (초성 ㅇ+ㄴ / 중성 ㅜ / 종성 )
    {{KC_B, KC_J, KC_U}, {KC_D, KC_N, KC_S, KC_M, KC_S, KC_SPC}},
    // 905. 일반 약어 | 우려 (초성 ㄹ / 중성 ㅜ+ㅕ / 종성 )
    {{KC_B, KC_M, KC_T}, {KC_D, KC_N, KC_F, KC_U}},
    // 906. 일반 약어 | 우리 (초성 ㅇ+ㄹ / 중성 ㅜ / 종성 )
    {{KC_B, KC_J, KC_M}, {KC_D, KC_N, KC_F, KC_L}},
    // 908. 일반 약어 | 우선_ (초성 ㅇ+ㅅ / 중성  / 종성 ㄴ)
    {{KC_J, KC_N, KC_S}, {KC_D, KC_N, KC_T, KC_J, KC_S, KC_SPC}},
    // 911. 일반 약어 | 운동 (초성 ㅇ+ㄷ / 중성  / 종성 ㅇ)
    {{KC_A, KC_I, KC_J}, {KC_D, KC_N, KC_S, KC_E, KC_H, KC_D}},
    // 913. 일반 약어 | 움직 (초성 ㅇ / 중성  / 종성 ㅁ+ㄱ)
    {{KC_J, KC_X, KC_Z}, {KC_D, KC_N, KC_A, KC_W, KC_L, KC_R}},
    // 913. 일반 약어 | 움직 (초성 ㅇ / 중성  / 종성 ㅁ+ㄱ)
    {{KC_A, KC_E, KC_J}, {KC_D, KC_N, KC_A, KC_W, KC_L, KC_R}},
    // 914. 일반 약어 | 웃음 (초성 ㅇ / 중성  / 종성 ㅅ+ㅁ)
    {{KC_J, KC_Q, KC_Z}, {KC_D, KC_N, KC_T, KC_D, KC_M, KC_A}},
    // 924. 일반 약어 | 유럽 (초성 ㅇ+ㄹ / 중성  / 종성 ㅂ)
    {{KC_J, KC_M, KC_W}, {KC_D, KC_B, KC_F, KC_J, KC_Q}},
    // 931. 일반 약어 | 으로_ (초성 ㅇ+ㄹ / 중성 ㅡ / 종성 )
    {{KC_G, KC_J, KC_M}, {KC_D, KC_M, KC_F, KC_H, KC_SPC}},
    // 932. 일반 약어 | 으며_ (초성 ㅇ / 중성 ㅡ+ㅕ / 종성 )
    {{KC_G, KC_J, KC_T}, {KC_D, KC_M, KC_A, KC_U, KC_SPC}},
    // 936. 일반 약어 | 은혜 (초성 ㅇ / 중성 ㅡ+ㅔ / 종성 )
    {{KC_C, KC_G, KC_J}, {KC_D, KC_M, KC_S, KC_G, SFT(KC_P)}},
    // 940. 일반 약어 | 음악 (초성 ㅇ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_J}, {KC_D, KC_M, KC_A, KC_D, KC_K, KC_R}},
    // 942. 일반 약어 | 의도 (초성 ㅇ+ㄷ / 중성 ㅡ+ㅗ / 종성 )
    {{KC_I, KC_J, KC_DOT}, {KC_D, KC_M, KC_L, KC_E, KC_H}},
    // 943. 일반 약어 | 의무 (초성 ㅁ / 중성 ㅡ+ㅜ / 종성 )
    {{KC_B, KC_G, KC_Y}, {KC_D, KC_M, KC_L, KC_A, KC_N}},
    // 944. 일반 약어 | 의문 (초성 ㅇ / 중성 ㅡ+ㅜ / 종성 )
    {{KC_B, KC_G, KC_J}, {KC_D, KC_M, KC_L, KC_A, KC_N, KC_S}},
    // 945. 일반 약어 | 의복 (초성 ㅇ+ㅂ / 중성 ㅡ+ㅗ / 종성 )
    {{KC_J, KC_O, KC_DOT}, {KC_D, KC_M, KC_L, KC_Q, KC_H, KC_R}},
    // 947. 일반 약어 | 의원 (초성 ㅇ / 중성 ㅡ+ㅓ / 종성 )
    {{KC_G, KC_J, KC_R}, {KC_D, KC_M, KC_L, KC_D, KC_N, KC_J, KC_S}},
    // 950. 일반 약어 | 이것 (초성 ㅇ+ㄱ / 중성  / 종성 ㅅ)
    {{KC_J, KC_K, KC_Q}, {KC_D, KC_L, KC_R, KC_J, KC_T}},
    // 951. 일반 약어 | 이나_ (초성 ㅇ+ㄴ / 중성 ㅏ / 종성 )
    {{KC_F, KC_J, KC_U}, {KC_D, KC_L, KC_S, KC_K, KC_SPC}},
    // 953. 일반 약어 | 이념 (초성 ㅇ+ㄴ / 중성 ㅕ / 종성 )
    {{KC_J, KC_T, KC_U}, {KC_D, KC_L, KC_S, KC_U, KC_A}},
    // 954. 일반 약어 | 이는_ (초성 ㅇ+ㄴ / 중성 ㅡ / 종성 )
    {{KC_G, KC_J, KC_U}, {KC_D, KC_L, KC_S, KC_M, KC_S, KC_SPC}},
    // 955. 일반 약어 | 이데올로기 (초성 ㄹ+ㄱ / 중성  / 종성 ㄹ)
    {{KC_E, KC_K, KC_M}, {KC_D, KC_L, KC_E, KC_P, KC_D, KC_H, KC_F, KC_F, KC_H, KC_R, KC_L}},
    // 957. 일반 약어 | 이래 (초성 ㅇ+ㄹ / 중성 ㅣ / 종성 )
    {{KC_D, KC_J, KC_M}, {KC_D, KC_L, KC_F, KC_O}},
    // 959. 일반 약어 | 이렇 (초성 ㅇ / 중성  / 종성 ㅎ)
    {{KC_J, KC_S, KC_SCLN}, {KC_D, KC_L, KC_F, KC_J, KC_G}},
    // 960. 일반 약어 | 이론 (초성 ㅇ+ㄹ / 중성  / 종성 ㄴ)
    {{KC_J, KC_M, KC_S}, {KC_D, KC_L, KC_F, KC_H, KC_S}},
    // 962. 일반 약어 | 이름 (초성 ㅇ+ㄹ / 중성  / 종성 ㅁ)
    {{KC_J, KC_M, KC_Z}, {KC_D, KC_L, KC_F, KC_M, KC_A}},
    // 963. 일반 약어 | 이번_ (초성 ㅇ+ㅂ / 중성  / 종성 ㄴ)
    {{KC_J, KC_O, KC_S}, {KC_D, KC_L, KC_Q, KC_J, KC_S, KC_SPC}},
    // 964. 일반 약어 | 이상 (초성 ㅇ+ㅅ / 중성  / 종성 ㅇ)
    {{KC_A, KC_J, KC_N}, {KC_D, KC_L, KC_T, KC_K, KC_D}},
    // 967. 일반 약어 | 이해 (초성 ㅇ+ㅎ / 중성 ㅣ / 종성 )
    {{KC_D, KC_H, KC_J}, {KC_D, KC_L, KC_G, KC_O}},
    // 968. 일반 약어 | 이후 (초성 ㅇ+ㅎ / 중성 ㅜ / 종성 )
    {{KC_B, KC_H, KC_J}, {KC_D, KC_L, KC_G, KC_N}},
    // 969. 일반 약어 | 인간 (초성 ㅇ+ㄱ / 중성  / 종성 ㄴ)
    {{KC_J, KC_K, KC_S}, {KC_D, KC_L, KC_S, KC_R, KC_K, KC_S}},
    // 972. 일반 약어 | 인물 (초성 ㅇ / 중성  / 종성 ㄹ+ㄴ)
    {{KC_E, KC_J, KC_S}, {KC_D, KC_L, KC_S, KC_A, KC_N, KC_F}},
    // 976. 일반 약어 | 인터넷 (초성 ㄷ+ㄴ / 중성  / 종성 ㅅ)
    {{KC_I, KC_Q, KC_U}, {KC_D, KC_L, KC_S, KC_X, KC_J, KC_S, KC_P, KC_T}},
    // 980. 일반 약어 | 일본 (초성 ㅇ+ㅂ / 중성  / 종성 ㄹ)
    {{KC_E, KC_J, KC_O}, {KC_D, KC_L, KC_F, KC_Q, KC_H, KC_S}},
    // 982. 일반 약어 | 일정 (초성 ㅇ+ㅈ / 중성  / 종성 ㄹ)
    {{KC_E, KC_J, KC_L}, {KC_D, KC_L, KC_F, KC_W, KC_J, KC_D}},
    // 989. 일반 약어 | 있는_ (초성 ㅇ+ㄴ / 중성  / 종성 ㅅ)
    {{KC_J, KC_Q, KC_U}, {KC_D, KC_L, SFT(KC_T), KC_S, KC_M, KC_S, KC_SPC}},
    // 994. 일반 약어 | 자기 (초성 ㅈ+ㄱ / 중성 ㅏ / 종성 )
    {{KC_F, KC_K, KC_L}, {KC_W, KC_K, KC_R, KC_L}},
    // 997. 일반 약어 | 자녀 (초성 ㅈ+ㄴ / 중성 ㅕ / 종성 )
    {{KC_L, KC_T, KC_U}, {KC_W, KC_K, KC_S, KC_U}},
    // 998. 일반 약어 | 자동차 (초성 ㅈ+ㄷ / 중성 ㅏ / 종성 )
    {{KC_F, KC_I, KC_L}, {KC_W, KC_K, KC_E, KC_H, KC_D, KC_C, KC_K}},
    // 1000. 일반 약어 | 자료 (초성 ㅈ+ㄹ / 중성 ㅏ / 종성 )
    {{KC_F, KC_L, KC_M}, {KC_W, KC_K, KC_F, KC_Y}},
    // 1001. 일반 약어 | 자리 (초성 ㅈ+ㄹ / 중성 ㅣ / 종성 )
    {{KC_D, KC_L, KC_M}, {KC_W, KC_K, KC_F, KC_L}},
    // 1004. 일반 약어 | 자세 (초성 ㅈ+ㅅ / 중성 ㅔ / 종성 )
    {{KC_C, KC_L, KC_N}, {KC_W, KC_K, KC_T, KC_P}},
    // 1006. 일반 약어 | 자식 (초성 ㅈ+ㅅ / 중성 ㅏ / 종성 )
    {{KC_F, KC_L, KC_N}, {KC_W, KC_K, KC_T, KC_L, KC_R}},
    // 1007. 일반 약어 | 자신 (초성 ㅈ+ㅅ / 중성  / 종성 ㄴ)
    {{KC_L, KC_N, KC_S}, {KC_W, KC_K, KC_T, KC_L, KC_S}},
    // 1008. 일반 약어 | 자연 (초성 ㅈ+ㅇ / 중성  / 종성 ㄴ)
    {{KC_J, KC_L, KC_S}, {KC_W, KC_K, KC_D, KC_U, KC_S}},
    // 1012. 일반 약어 | 자주_ (초성 ㅈ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_L}, {KC_W, KC_K, KC_W, KC_N, KC_SPC}},
    // 1013. 일반 약어 | 자체 (초성 ㅈ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_L}, {KC_W, KC_K, KC_C, KC_P}},
    // 1016. 일반 약어 | 작년 (초성 ㅈ+ㄴ / 중성  / 종성 ㄱ)
    {{KC_L, KC_U, KC_X}, {KC_W, KC_K, KC_R, KC_S, KC_U, KC_S}},
    // 1017. 일반 약어 | 작업 (초성 ㅈ+ㅇ / 중성  / 종성 ㅂ)
    {{KC_J, KC_L, KC_W}, {KC_W, KC_K, KC_R, KC_D, KC_J, KC_Q}},
    // 1019. 일반 약어 | 작은_ (초성 ㅈ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_L}, {KC_W, KC_K, KC_R, KC_D, KC_M, KC_S, KC_SPC}},
    // 1020. 일반 약어 | 작품 (초성 ㅈ+ㅂ / 중성  / 종성 ㄱ)
    {{KC_L, KC_O, KC_X}, {KC_W, KC_K, KC_R, KC_V, KC_N, KC_A}},
    // 1022. 일반 약어 | 잘못 (초성 ㅈ+ㅁ / 중성  / 종성 ㅅ)
    {{KC_L, KC_Q, KC_Y}, {KC_W, KC_K, KC_F, KC_A, KC_H, KC_T}},
    // 1036. 일반 약어 | 저기 (초성 ㅈ+ㄱ / 중성 ㅓ / 종성 )
    {{KC_K, KC_L, KC_R}, {KC_W, KC_J, KC_R, KC_L}},
    // 1037. 일반 약어 | 저녁 (초성 ㅈ+ㄴ / 중성 ㅓ / 종성 )
    {{KC_L, KC_R, KC_U}, {KC_W, KC_J, KC_S, KC_U, KC_R}},
    // 1042. 일반 약어 | 적당 (초성 ㅈ+ㄷ / 중성  / 종성 ㄱ)
    {{KC_I, KC_L, KC_X}, {KC_W, KC_J, KC_R, KC_E, KC_K, KC_D}},
    // 1044. 일반 약어 | 적으로_ (초성 ㅈ+ㄹ / 중성 ㅡ / 종성 )
    {{KC_G, KC_L, KC_M}, {KC_W, KC_J, KC_R, KC_D, KC_M, KC_F, KC_H, KC_SPC}},
    // 1045. 일반 약어 | 적인_ (초성 ㅈ / 중성  / 종성 ㄱ+ㄴ)
    {{KC_L, KC_S, KC_X}, {KC_W, KC_J, KC_R, KC_D, KC_L, KC_S, KC_SPC}},
    // 1045. 일반 약어 | 적인_ (초성 ㅈ / 중성  / 종성 ㄱ+ㄴ)
    {{KC_A, KC_E, KC_L}, {KC_W, KC_J, KC_R, KC_D, KC_L, KC_S, KC_SPC}},
    // 1046. 일반 약어 | 적절 (초성 ㅈ / 중성  / 종성 ㄱ+ㄹ)
    {{KC_E, KC_L, KC_X}, {KC_W, KC_J, KC_R, KC_W, KC_J, KC_F}},
    // 1046. 일반 약어 | 적절 (초성 ㅈ / 중성  / 종성 ㄱ+ㄹ)
    {{KC_A, KC_E, KC_L}, {KC_W, KC_J, KC_R, KC_W, KC_J, KC_F}},
    // 1052. 일반 약어 | 전략 (초성 ㅈ+ㄹ / 중성  / 종성 ㄴ)
    {{KC_L, KC_M, KC_S}, {KC_W, KC_J, KC_S, KC_F, KC_I, KC_R}},
    // 1057. 일반 약어 | 전쟁 (초성 ㅈ / 중성  / 종성 ㄴ+ㅇ)
    {{KC_A, KC_L, KC_S}, {KC_W, KC_J, KC_S, KC_W, KC_O, KC_D}},
    // 1058. 일반 약어 | 전체 (초성 ㅈ / 중성 ㅓ+ㅔ / 종성 )
    {{KC_C, KC_L, KC_R}, {KC_W, KC_J, KC_S, KC_C, KC_P}},
    // 1064. 일반 약어 | 절대 (초성 ㅈ+ㄷ / 중성  / 종성 ㄹ)
    {{KC_E, KC_I, KC_L}, {KC_W, KC_J, KC_F, KC_E, KC_O}},
    // 1073. 일반 약어 | 정말 (초성 ㅈ+ㅁ / 중성  / 종성 ㄹ)
    {{KC_E, KC_L, KC_Y}, {KC_W, KC_J, KC_D, KC_A, KC_K, KC_F}},
    // 1074. 일반 약어 | 정보 (초성 ㅈ+ㅂ / 중성 ㅗ / 종성 )
    {{KC_L, KC_O, KC_V}, {KC_W, KC_J, KC_D, KC_Q, KC_H}},
    // 1074. 일반 약어 | 정보 (초성 ㅈ+ㅂ / 중성 ㅗ / 종성 )
    {{KC_L, KC_O, KC_DOT}, {KC_W, KC_J, KC_D, KC_Q, KC_H}},
    // 1075. 일반 약어 | 정부 (초성 ㅈ+ㅂ / 중성  / 종성 ㅇ)
    {{KC_A, KC_L, KC_O}, {KC_W, KC_J, KC_D, KC_Q, KC_N}},
    // 1079. 일반 약어 | 정책 (초성 ㅈ+ㅎ / 중성  / 종성 ㄱ)
    {{KC_H, KC_L, KC_X}, {KC_W, KC_J, KC_D, KC_C, KC_O, KC_R}},
    // 1080. 일반 약어 | 정치 (초성 ㅈ+ㅎ / 중성  / 종성 ㅇ)
    {{KC_A, KC_H, KC_L}, {KC_W, KC_J, KC_D, KC_C, KC_L}},
    // 1085. 일반 약어 | 제도 (초성 ㅈ+ㄷ / 중성 ㅔ / 종성 )
    {{KC_C, KC_I, KC_L}, {KC_W, KC_P, KC_E, KC_H}},
    // 1086. 일반 약어 | 제목 (초성 ㅈ+ㅁ / 중성 ㅔ+ㅗ / 종성 )
    {{KC_L, KC_Y, KC_DOT}, {KC_W, KC_P, KC_A, KC_H, KC_R}},
    // 1089. 일반 약어 | 제품 (초성 ㅈ+ㅂ / 중성 ㅔ / 종성 )
    {{KC_C, KC_L, KC_O}, {KC_W, KC_P, KC_V, KC_N, KC_A}},
    // 1092. 일반 약어 | 조그 (초성 ㅈ+ㄱ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_K, KC_L, KC_DOT}, {KC_W, KC_H, KC_R, KC_M}},
    // 1094. 일반 약어 | 조미료 (초성 ㅈ+ㅁ / 중성 ㅗ+ㅣ / 종성 )
    {{KC_L, KC_Y, KC_DOT}, {KC_W, KC_H, KC_A, KC_L, KC_F, KC_Y}},
    // 1095. 일반 약어 | 조사 (초성 ㅈ+ㅅ / 중성 ㅗ / 종성 )
    {{KC_L, KC_N, KC_V}, {KC_W, KC_H, KC_T, KC_K}},
    // 1095. 일반 약어 | 조사 (초성 ㅈ+ㅅ / 중성 ㅗ / 종성 )
    {{KC_L, KC_N, KC_DOT}, {KC_W, KC_H, KC_T, KC_K}},
    // 1100. 일반 약어 | 조직 (초성 ㅈ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_L}, {KC_W, KC_H, KC_W, KC_L, KC_R}},
    // 1101. 일반 약어 | 조합 (초성 ㅈ+ㅎ / 중성  / 종성 ㅂ)
    {{KC_H, KC_L, KC_W}, {KC_W, KC_H, KC_G, KC_K, KC_Q}},
    // 1105. 일반 약어 | 종류 (초성 ㅈ+ㄹ / 중성  / 종성 ㅇ)
    {{KC_A, KC_L, KC_M}, {KC_W, KC_H, KC_D, KC_F, KC_B}},
    // 1107. 일반 약어 | 좋아 (초성 ㅈ / 중성  / 종성 ㅎ)
    {{KC_L, KC_S, KC_SCLN}, {KC_W, KC_H, KC_G, KC_D, KC_K}},
    // 1108. 일반 약어 | 좋은_ (초성 ㅈ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_G, KC_L, KC_V}, {KC_W, KC_H, KC_G, KC_D, KC_M, KC_S, KC_SPC}},
    // 1109. 일반 약어 | 주는_ (초성 ㅈ / 중성 ㅜ+ㅡ / 종성 )
    {{KC_B, KC_G, KC_L}, {KC_W, KC_N, KC_S, KC_M, KC_S, KC_SPC}},
    // 1110. 일반 약어 | 주님 (초성 ㅈ+ㄴ / 중성  / 종성 ㅁ)
    {{KC_L, KC_U, KC_Z}, {KC_W, KC_N, KC_S, KC_L, KC_A}},
    // 1111. 일반 약어 | 주로_ (초성 ㅈ+ㄹ / 중성 ㅜ / 종성 )
    {{KC_B, KC_L, KC_M}, {KC_W, KC_N, KC_F, KC_H, KC_SPC}},
    // 1113. 일반 약어 | 주머니 (초성 ㅁ+ㄴ / 중성 ㅜ / 종성 )
    {{KC_B, KC_U, KC_Y}, {KC_W, KC_N, KC_A, KC_J, KC_S, KC_L}},
    // 1115. 일반 약어 | 주민 (초성 ㅈ+ㅁ / 중성 ㅜ / 종성 )
    {{KC_B, KC_L, KC_Y}, {KC_W, KC_N, KC_A, KC_L, KC_S}},
    // 1116. 일반 약어 | 주변 (초성 ㅈ+ㅂ / 중성  / 종성 ㄴ)
    {{KC_L, KC_O, KC_S}, {KC_W, KC_N, KC_Q, KC_U, KC_S}},
    // 1117. 일반 약어 | 주부 (초성 ㅈ+ㅂ / 중성 ㅜ / 종성 )
    {{KC_B, KC_L, KC_O}, {KC_W, KC_N, KC_Q, KC_N}},
    // 1127. 일반 약어 | 중국 (초성 ㅈ+ㄱ / 중성  / 종성 ㄱ)
    {{KC_K, KC_L, KC_X}, {KC_W, KC_N, KC_D, KC_R, KC_N, KC_R}},
    // 1130. 일반 약어 | 중심 (초성 ㅈ+ㅅ / 중성  / 종성 ㅁ)
    {{KC_L, KC_N, KC_Z}, {KC_W, KC_N, KC_D, KC_T, KC_L, KC_A}},
    // 1132. 일반 약어 | 중요 (초성 ㅈ+ㅇ / 중성  / 종성 ㅇ)
    {{KC_A, KC_J, KC_L}, {KC_W, KC_N, KC_D, KC_D, KC_Y}},
    // 1138. 일반 약어 | 지금 (초성 ㅈ+ㄱ / 중성  / 종성 ㅁ)
    {{KC_K, KC_L, KC_Z}, {KC_W, KC_L, KC_R, KC_M, KC_A}},
    // 1139. 일반 약어 | 지나 (초성 ㅈ+ㄴ / 중성 ㅣ / 종성 )
    {{KC_D, KC_L, KC_U}, {KC_W, KC_L, KC_S, KC_K}},
    // 1144. 일반 약어 | 지도 (초성 ㅈ+ㄷ / 중성 ㅣ / 종성 )
    {{KC_D, KC_I, KC_L}, {KC_W, KC_L, KC_E, KC_H}},
    // 1145. 일반 약어 | 지만_ (초성 ㅈ+ㅁ / 중성  / 종성 ㄴ)
    {{KC_L, KC_S, KC_Y}, {KC_W, KC_L, KC_A, KC_K, KC_S, KC_SPC}},
    // 1150. 일반 약어 | 지시 (초성 ㅈ+ㅅ / 중성 ㅣ / 종성 )
    {{KC_D, KC_L, KC_N}, {KC_W, KC_L, KC_T, KC_L}},
    // 1152. 일반 약어 | 지역 (초성 ㅈ+ㅇ / 중성  / 종성 ㄱ)
    {{KC_J, KC_L, KC_X}, {KC_W, KC_L, KC_D, KC_U, KC_R}},
    // 1153. 일반 약어 | 지하철 (초성 ㅈ+ㅎ / 중성  / 종성 ㄹ)
    {{KC_E, KC_H, KC_L}, {KC_W, KC_L, KC_G, KC_K, KC_C, KC_J, KC_F}},
    // 1154. 일반 약어 | 지혜 (초성 ㅈ / 중성 ㅣ+ㅖ / 종성 )
    {{KC_C, KC_L, KC_V}, {KC_W, KC_L, KC_G, SFT(KC_P)}},
    // 1157. 일반 약어 | 직장 (초성 ㅈ / 중성  / 종성 ㄱ+ㅇ)
    {{KC_A, KC_L, KC_X}, {KC_W, KC_L, KC_R, KC_W, KC_K, KC_D}},
    // 1157. 일반 약어 | 직장 (초성 ㅈ / 중성  / 종성 ㄱ+ㅇ)
    {{KC_A, KC_E, KC_L}, {KC_W, KC_L, KC_R, KC_W, KC_K, KC_D}},
    // 1158. 일반 약어 | 직접_ (초성 ㅈ / 중성  / 종성 ㄱ+ㅂ)
    {{KC_L, KC_W, KC_X}, {KC_W, KC_L, KC_R, KC_W, KC_J, KC_Q, KC_SPC}},
    // 1158. 일반 약어 | 직접_ (초성 ㅈ / 중성  / 종성 ㄱ+ㅂ)
    {{KC_A, KC_E, KC_L}, {KC_W, KC_L, KC_R, KC_W, KC_J, KC_Q, KC_SPC}},
    // 1163. 일반 약어 | 진출 (초성 ㅈ / 중성  / 종성 ㄴ+ㄹ)
    {{KC_E, KC_L, KC_S}, {KC_W, KC_L, KC_S, KC_C, KC_N, KC_F}},
    // 1166. 일반 약어 | 집단 (초성 ㅈ+ㄷ / 중성  / 종성 ㅂ)
    {{KC_I, KC_L, KC_W}, {KC_W, KC_L, KC_Q, KC_E, KC_K, KC_S}},
    // 1168. 일반 약어 | 집중 (초성 ㅈ / 중성  / 종성 ㅂ+ㅇ)
    {{KC_A, KC_L, KC_W}, {KC_W, KC_L, KC_Q, KC_W, KC_N, KC_D}},
    // 1170. 일반 약어 | 차라리_ (초성 ㅎ+ㄹ / 중성 ㅣ / 종성 )
    {{KC_D, KC_H, KC_M}, {KC_C, KC_K, KC_F, KC_K, KC_F, KC_L, KC_SPC}},
    // 1174. 일반 약어 | 차원 (초성 ㅎ+ㅇ / 중성  / 종성 ㄴ)
    {{KC_H, KC_J, KC_S}, {KC_C, KC_K, KC_D, KC_N, KC_J, KC_S}},
    // 1184. 일반 약어 | 책임 (초성 ㅎ+ㅇ / 중성  / 종성 ㅁ)
    {{KC_H, KC_J, KC_Z}, {KC_C, KC_O, KC_R, KC_D, KC_L, KC_A}},
    // 1185. 일반 약어 | 처럼_ (초성 ㅈ+ㄹ / 중성  / 종성 ㅁ)
    {{KC_L, KC_M, KC_Z}, {KC_C, KC_J, KC_F, KC_J, KC_A, KC_SPC}},
    // 1186. 일반 약어 | 처리 (초성 ㅈ+ㄹ / 중성 ㅓ / 종성 )
    {{KC_L, KC_M, KC_R}, {KC_C, KC_J, KC_F, KC_L}},
    // 1188. 일반 약어 | 처음 (초성 ㅊ / 중성  / 종성 ㅁ)
    {{KC_H, KC_L, KC_Z}, {KC_C, KC_J, KC_D, KC_M, KC_A}},
    // 1191. 일반 약어 | 청소 (초성 ㅎ+ㅅ / 중성 ㅗ / 종성 )
    {{KC_H, KC_N, KC_V}, {KC_C, KC_J, KC_D, KC_T, KC_H}},
    // 1191. 일반 약어 | 청소 (초성 ㅎ+ㅅ / 중성 ㅗ / 종성 )
    {{KC_H, KC_N, KC_DOT}, {KC_C, KC_J, KC_D, KC_T, KC_H}},
    // 1193. 일반 약어 | 청와대 (초성 ㅈ+ㄷ / 중성 ㅗ+ㅏ / 종성 )
    {{KC_I, KC_L, KC_DOT}, {KC_C, KC_J, KC_D, KC_D, KC_H, KC_K, KC_E, KC_O}},
    // 1197. 일반 약어 | 초기 (초성 ㅈ+ㄱ / 중성 ㅗ+ㅣ / 종성 )
    {{KC_K, KC_L, KC_DOT}, {KC_C, KC_H, KC_R, KC_L}},
    // 1199. 일반 약어 | 최고 (초성 ㅈ+ㄱ / 중성 ㅗ / 종성 )
    {{KC_K, KC_L, KC_V}, {KC_C, KC_H, KC_L, KC_R, KC_H}},
    // 1199. 일반 약어 | 최고 (초성 ㅈ+ㄱ / 중성 ㅗ / 종성 )
    {{KC_K, KC_L, KC_DOT}, {KC_C, KC_H, KC_L, KC_R, KC_H}},
    // 1213. 일반 약어 | 치료 (초성 ㅈ+ㄹ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_L, KC_M, KC_DOT}, {KC_C, KC_L, KC_F, KC_Y}},
    // 1215. 일반 약어 | 친구 (초성 ㅈ+ㄱ / 중성  / 종성 ㄴ)
    {{KC_K, KC_L, KC_S}, {KC_C, KC_L, KC_S, KC_R, KC_N}},
    // 1222. 일반 약어 | 커피 (초성 ㄱ+ㅂ / 중성 ㅓ / 종성 )
    {{KC_K, KC_O, KC_R}, {KC_Z, KC_J, KC_V, KC_L}},
    // 1223. 일반 약어 | 컴퓨터 (초성 ㅋ / 중성  / 종성 ㅁ)
    {{KC_H, KC_K, KC_Z}, {KC_Z, KC_J, KC_A, KC_V, KC_B, KC_X, KC_J}},
    // 1224. 일반 약어 | 코드 (초성 ㄱ+ㄷ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_I, KC_K, KC_DOT}, {KC_Z, KC_H, KC_E, KC_M}},
    // 1226. 일반 약어 | 키는_ (초성 ㅎ+ㄴ / 중성  / 종성 ㄴ)
    {{KC_H, KC_S, KC_U}, {KC_Z, KC_L, KC_S, KC_M, KC_S, KC_SPC}},
    // 1229. 일반 약어 | 텔레비전 (초성 ㄷ+ㄹ / 중성 ㅔ / 종성 )
    {{KC_C, KC_I, KC_M}, {KC_X, KC_P, KC_F, KC_F, KC_P, KC_Q, KC_L, KC_W, KC_J, KC_S}},
    // 1231. 일반 약어 | 토지 (초성 ㄷ+ㅈ / 중성 ㅗ / 종성 )
    {{KC_I, KC_L, KC_V}, {KC_X, KC_H, KC_W, KC_L}},
    // 1231. 일반 약어 | 토지 (초성 ㄷ+ㅈ / 중성 ㅗ / 종성 )
    {{KC_I, KC_L, KC_DOT}, {KC_X, KC_H, KC_W, KC_L}},
    // 1237. 일반 약어 | 투쟁 (초성 ㄷ+ㅈ / 중성 ㅜ / 종성 )
    {{KC_B, KC_I, KC_L}, {KC_X, KC_N, KC_W, KC_O, KC_D}},
    // 1238. 일반 약어 | 특별 (초성 ㄷ+ㅂ / 중성  / 종성 ㄱ)
    {{KC_I, KC_O, KC_X}, {KC_X, KC_M, KC_R, KC_Q, KC_U, KC_F}},
    // 1243. 일반 약어 | 특히_ (초성 ㅌ / 중성  / 종성 ㄱ)
    {{KC_H, KC_I, KC_X}, {KC_X, KC_M, KC_R, KC_G, KC_L, KC_SPC}},
    // 1246. 일반 약어 | 파악 (초성 ㅂ+ㅇ / 중성  / 종성 ㄱ)
    {{KC_J, KC_O, KC_X}, {KC_V, KC_K, KC_D, KC_K, KC_R}},
    // 1250. 일반 약어 | 퍼센트 (초성 ㅂ+ㄷ / 중성 ㅓ / 종성 )
    {{KC_I, KC_O, KC_R}, {KC_V, KC_J, KC_T, KC_P, KC_S, KC_X, KC_M}},
    // 1251. 일반 약어 | 편리 (초성 ㅂ+ㄹ / 중성 ㅣ / 종성 )
    {{KC_D, KC_M, KC_O}, {KC_V, KC_U, KC_S, KC_F, KC_L}},
    // 1259. 일반 약어 | 포기 (초성 ㅂ+ㄱ / 중성 ㅗ+ㅣ / 종성 )
    {{KC_K, KC_O, KC_DOT}, {KC_V, KC_H, KC_R, KC_L}},
    // 1260. 일반 약어 | 포함 (초성 ㅍ / 중성  / 종성 ㅁ)
    {{KC_H, KC_O, KC_Z}, {KC_V, KC_H, KC_G, KC_K, KC_A}},
    // 1263. 일반 약어 | 표정 (초성 ㅍ / 중성  / 종성 ㅇ)
    {{KC_A, KC_H, KC_O}, {KC_V, KC_Y, KC_W, KC_J, KC_D}},
    // 1265. 일반 약어 | 프게_ (초성 ㄱ+ㅂ / 중성 ㅡ / 종성 )
    {{KC_G, KC_K, KC_O}, {KC_V, KC_M, KC_R, KC_P, KC_SPC}},
    // 1266. 일반 약어 | 프랑스 (초성 ㅂ+ㄹ / 중성  / 종성 ㅇ)
    {{KC_A, KC_M, KC_O}, {KC_V, KC_M, KC_F, KC_K, KC_D, KC_T, KC_M}},
    // 1267. 일반 약어 | 프로 (초성 ㅂ+ㄹ / 중성 ㅡ / 종성 )
    {{KC_G, KC_M, KC_O}, {KC_V, KC_M, KC_F, KC_H}},
    // 1268. 일반 약어 | 피로 (초성 ㅂ+ㄹ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_M, KC_O, KC_DOT}, {KC_V, KC_L, KC_F, KC_H}},
    // 1269. 일반 약어 | 필요 (초성 ㅍ / 중성  / 종성 ㄹ)
    {{KC_E, KC_H, KC_O}, {KC_V, KC_L, KC_F, KC_D, KC_Y}},
    // 1271. 일반 약어 | 하게_ (초성 ㅎ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_H}, {KC_G, KC_K, KC_R, KC_P, KC_SPC}},
    // 1272. 일반 약어 | 하겠 (초성 ㅎ+ㄱ / 중성  / 종성 ㅅ)
    {{KC_H, KC_K, KC_Q}, {KC_G, KC_K, KC_R, KC_P, SFT(KC_T)}},
    // 1273. 일반 약어 | 하나 (초성 ㅎ+ㄴ / 중성 ㅏ / 종성 )
    {{KC_F, KC_H, KC_U}, {KC_G, KC_K, KC_S, KC_K}},
    // 1274. 일반 약어 | 하나님 (초성 ㅎ+ㄴ / 중성  / 종성 ㅁ)
    {{KC_H, KC_U, KC_Z}, {KC_G, KC_K, KC_S, KC_K, KC_S, KC_L, KC_A}},
    // 1275. 일반 약어 | 하는_ (초성 ㅎ+ㄴ / 중성 ㅡ / 종성 )
    {{KC_G, KC_H, KC_U}, {KC_G, KC_K, KC_S, KC_M, KC_S, KC_SPC}},
    // 1276. 일반 약어 | 하는데 (초성 ㅎ+ㄴ / 중성 ㅔ / 종성 )
    {{KC_C, KC_H, KC_U}, {KC_G, KC_K, KC_S, KC_M, KC_S, KC_E, KC_P}},
    // 1277. 일반 약어 | 하늘 (초성 ㅎ+ㄴ / 중성  / 종성 ㄹ)
    {{KC_E, KC_H, KC_U}, {KC_G, KC_K, KC_S, KC_M, KC_F}},
    // 1278. 일반 약어 | 하루 (초성 ㅎ+ㄹ / 중성 ㅏ / 종성 )
    {{KC_F, KC_H, KC_M}, {KC_G, KC_K, KC_F, KC_N}},
    // 1279. 일반 약어 | 하셨 (초성 ㅎ+ㅅ / 중성  / 종성 ㅅ)
    {{KC_H, KC_N, KC_Q}, {KC_G, KC_K, KC_T, KC_U, SFT(KC_T)}},
    // 1281. 일반 약어 | 하얗 (초성 ㅎ / 중성  / 종성 ㅎ)
    {{KC_H, KC_S, KC_SCLN}, {KC_G, KC_K, KC_D, KC_I, KC_G}},
    // 1282. 일반 약어 | 하여_ (초성 ㅎ+ㅇ / 중성 ㅕ / 종성 )
    {{KC_H, KC_J, KC_T}, {KC_G, KC_K, KC_D, KC_U, KC_SPC}},
    // 1283. 일반 약어 | 하였 (초성 ㅎ+ㅇ / 중성  / 종성 ㅅ)
    {{KC_H, KC_J, KC_Q}, {KC_G, KC_K, KC_D, KC_U, SFT(KC_T)}},
    // 1284. 일반 약어 | 하지만_ (초성 ㅎ+ㅈ / 중성  / 종성 ㄴ)
    {{KC_H, KC_L, KC_S}, {KC_G, KC_K, KC_W, KC_L, KC_A, KC_K, KC_S, KC_SPC}},
    // 1285. 일반 약어 | 학교 (초성 ㅎ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_H}, {KC_G, KC_K, KC_R, KC_R, KC_Y}},
    // 1286. 일반 약어 | 학년 (초성 ㅎ+ㄴ / 중성  / 종성 ㄱ)
    {{KC_H, KC_U, KC_X}, {KC_G, KC_K, KC_R, KC_S, KC_U, KC_S}},
    // 1287. 일반 약어 | 학생 (초성 ㅎ+ㅅ / 중성  / 종성 ㄱ)
    {{KC_H, KC_N, KC_X}, {KC_G, KC_K, KC_R, KC_T, KC_O, KC_D}},
    // 1288. 일반 약어 | 한강 (초성 ㅎ / 중성  / 종성 ㄴ+ㅇ)
    {{KC_A, KC_H, KC_S}, {KC_G, KC_K, KC_S, KC_R, KC_K, KC_D}},
    // 1307. 일반 약어 | 해외 (초성 ㅎ+ㅇ / 중성 ㅐ+ㅗ / 종성 )
    {{KC_H, KC_J, KC_DOT}, {KC_G, KC_O, KC_D, KC_H, KC_L}},
    // 1309. 일반 약어 | 행동 (초성 ㅎ+ㄷ / 중성  / 종성 ㅇ)
    {{KC_A, KC_H, KC_I}, {KC_G, KC_O, KC_D, KC_E, KC_H, KC_D}},
    // 1313. 일반 약어 | 허리 (초성 ㅎ+ㄹ / 중성 ㅓ / 종성 )
    {{KC_H, KC_M, KC_R}, {KC_G, KC_J, KC_F, KC_L}},
    // 1315. 일반 약어 | 현상 (초성 ㅎ+ㅅ / 중성  / 종성 ㄴ)
    {{KC_H, KC_N, KC_S}, {KC_G, KC_U, KC_S, KC_T, KC_K, KC_D}},
    // 1320. 일반 약어 | 협력 (초성 ㅎ / 중성  / 종성 ㅂ+ㄱ)
    {{KC_H, KC_W, KC_X}, {KC_G, KC_U, KC_Q, KC_F, KC_U, KC_R}},
    // 1320. 일반 약어 | 협력 (초성 ㅎ / 중성  / 종성 ㅂ+ㄱ)
    {{KC_A, KC_E, KC_H}, {KC_G, KC_U, KC_Q, KC_F, KC_U, KC_R}},
    // 1337. 일반 약어 | 환경 (초성 ㅎ+ㄱ / 중성  / 종성 ㄴ)
    {{KC_H, KC_K, KC_S}, {KC_G, KC_H, KC_K, KC_S, KC_R, KC_U, KC_D}},
    // 1338. 일반 약어 | 활동 (초성 ㅎ+ㄷ / 중성  / 종성 ㄹ)
    {{KC_E, KC_H, KC_I}, {KC_G, KC_H, KC_K, KC_F, KC_E, KC_H, KC_D}},
    // 1339. 일반 약어 | 회담 (초성 ㅎ+ㄷ / 중성  / 종성 ㅁ)
    {{KC_H, KC_I, KC_Z}, {KC_G, KC_H, KC_L, KC_E, KC_K, KC_A}},
    // 1344. 일반 약어 | 훈련 (초성 ㅎ+ㄹ / 중성  / 종성 ㄴ)
    {{KC_H, KC_M, KC_S}, {KC_G, KC_N, KC_S, KC_F, KC_U, KC_S}},
    // 1345. 일반 약어 | 훌륭 (초성 ㅎ+ㄹ / 중성  / 종성 ㅇ)
    {{KC_A, KC_H, KC_M}, {KC_G, KC_N, KC_F, KC_F, KC_B, KC_D}},
    // 1346. 일반 약어 | 훨씬_ (초성 ㅎ+ㅅ / 중성  / 종성 ㄹ)
    {{KC_E, KC_H, KC_N}, {KC_G, KC_N, KC_J, KC_F, SFT(KC_T), KC_L, KC_S, KC_SPC}},
    // 1347. 일반 약어 | 흐름 (초성 ㅎ+ㄹ / 중성  / 종성 ㅁ)
    {{KC_H, KC_M, KC_Z}, {KC_G, KC_M, KC_F, KC_M, KC_A}},
    // 1350. 일반 약어 | 희망 (초성 ㅎ+ㅁ / 중성  / 종성 ㅇ)
    {{KC_A, KC_H, KC_Y}, {KC_G, KC_M, KC_L, KC_A, KC_K, KC_D}},
    // 8. 일반 약어 | 가득_ (초성 ㄱ+ㄷ / 중성 ㅡ / 종성 ㄱ)
    {{KC_G, KC_I, KC_K, KC_X}, {KC_R, KC_K, KC_E, KC_M, KC_R, KC_SPC}},
    // 9. 일반 약어 | 가락 (초성 ㄱ+ㄹ / 중성 ㅏ / 종성 ㄱ)
    {{KC_F, KC_K, KC_M, KC_X}, {KC_R, KC_K, KC_F, KC_K, KC_R}},
    // 10. 일반 약어 | 가령_ (초성 ㄱ+ㄹ / 중성 ㅕ / 종성 ㅇ)
    {{KC_A, KC_K, KC_M, KC_T}, {KC_R, KC_K, KC_F, KC_U, KC_D, KC_SPC}},
    // 11. 일반 약어 | 가루 (초성 ㄱ+ㄹ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_K, KC_M}, {KC_R, KC_K, KC_F, KC_N}},
    // 12. 일반 약어 | 가르 (초성 ㄱ+ㄹ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_K, KC_M}, {KC_R, KC_K, KC_F, KC_M}},
    // 13. 일반 약어 | 가만히_ (초성 ㅁ+ㅎ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_H, KC_S, KC_Y}, {KC_R, KC_K, KC_A, KC_K, KC_S, KC_G, KC_L, KC_SPC}},
    // 14. 일반 약어 | 가방 (초성 ㄱ+ㅂ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_K, KC_O}, {KC_R, KC_K, KC_Q, KC_K, KC_D}},
    // 15. 일반 약어 | 가수 (초성 ㄱ+ㅅ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_K, KC_N}, {KC_R, KC_K, KC_T, KC_N}},
    // 16. 일반 약어 | 가스 (초성 ㄱ+ㅅ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_K, KC_N}, {KC_R, KC_K, KC_T, KC_M}},
    // 17. 일반 약어 | 가슴 (초성 ㄱ+ㅅ / 중성 ㅡ / 종성 ㅁ)
    {{KC_G, KC_K, KC_N, KC_Z}, {KC_R, KC_K, KC_T, KC_M, KC_A}},
    // 21. 일반 약어 | 가정 (초성 ㄱ+ㅈ / 중성 ㅓ / 종성 ㅇ)
    {{KC_A, KC_K, KC_L, KC_R}, {KC_R, KC_K, KC_W, KC_J, KC_D}},
    // 23. 일반 약어 | 가족 (초성 ㄱ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_K, KC_L, KC_V, KC_X}, {KC_R, KC_K, KC_W, KC_H, KC_R}},
    // 23. 일반 약어 | 가족 (초성 ㄱ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_K, KC_L, KC_X, KC_DOT}, {KC_R, KC_K, KC_W, KC_H, KC_R}},
    // 24. 일반 약어 | 가지 (초성 ㄱ+ㅈ / 중성 ㅏ+ㅣ / 종성 )
    {{KC_D, KC_F, KC_K, KC_L}, {KC_R, KC_K, KC_W, KC_L}},
    // 25. 일반 약어 | 각종 (초성 ㄱ+ㅈ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_K, KC_L, KC_V}, {KC_R, KC_K, KC_R, KC_W, KC_H, KC_D}},
    // 25. 일반 약어 | 각종 (초성 ㄱ+ㅈ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_K, KC_L, KC_DOT}, {KC_R, KC_K, KC_R, KC_W, KC_H, KC_D}},
    // 26. 일반 약어 | 간단 (초성 ㄱ+ㄷ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_I, KC_K, KC_S}, {KC_R, KC_K, KC_S, KC_E, KC_K, KC_S}},
    // 27. 일반 약어 | 간부 (초성 ㄱ+ㅂ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_K, KC_O}, {KC_R, KC_K, KC_S, KC_Q, KC_N}},
    // 30. 일반 약어 | 감동 (초성 ㄱ+ㄷ / 중성 ㅏ / 종성 ㅁ)
    {{KC_F, KC_I, KC_K, KC_Z}, {KC_R, KC_K, KC_A, KC_E, KC_H, KC_D}},
    // 31. 일반 약어 | 감사 (초성 ㄱ+ㅅ / 중성 ㅏ / 종성 ㅁ)
    {{KC_F, KC_K, KC_N, KC_Z}, {KC_R, KC_K, KC_A, KC_T, KC_K}},
    // 34. 일반 약어 | 강력 (초성 ㄱ+ㄹ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_K, KC_M}, {KC_R, KC_K, KC_D, KC_F, KC_U, KC_R}},
    // 36. 일반 약어 | 강조 (초성 ㄱ+ㅈ / 중성 ㅏ+ㅗ / 종성 ㅇ)
    {{KC_A, KC_K, KC_L, KC_DOT}, {KC_R, KC_K, KC_D, KC_W, KC_H}},
    // 37. 일반 약어 | 같은_ (초성 ㄱ / 중성 ㅏ+ㅡ / 종성 ㅁ)
    {{KC_F, KC_G, KC_K, KC_Z}, {KC_R, KC_K, KC_X, KC_D, KC_M, KC_S, KC_SPC}},
    // 38. 일반 약어 | 같이_ (초성 ㄱ+ㅇ / 중성  / 종성 ㅌ)
    {{KC_J, KC_K, KC_S, KC_Z}, {KC_R, KC_K, KC_X, KC_D, KC_L, KC_SPC}},
    // 46. 일반 약어 | 개혁 (초성 ㄱ+ㅎ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_H, KC_K}, {KC_R, KC_O, KC_G, KC_U, KC_R}},
    // 47. 일반 약어 | 객관적 (초성 ㄱ / 중성 ㅓ / 종성 ㄱ+ㄴ)
    {{KC_K, KC_R, KC_S, KC_X}, {KC_R, KC_O, KC_R, KC_R, KC_H, KC_K, KC_S, KC_W, KC_J, KC_R}},
    // 47. 일반 약어 | 객관적 (초성 ㄱ / 중성 ㅓ / 종성 ㄱ+ㄴ)
    {{KC_A, KC_E, KC_K, KC_R}, {KC_R, KC_O, KC_R, KC_R, KC_H, KC_K, KC_S, KC_W, KC_J, KC_R}},
    // 52. 일반 약어 | 거부 (초성 ㄱ+ㅂ / 중성 ㅓ+ㅜ / 종성 )
    {{KC_B, KC_K, KC_O, KC_R}, {KC_R, KC_J, KC_Q, KC_N}},
    // 53. 일반 약어 | 거의_ (초성 ㄱ+ㅇ / 중성 ㅓ+ㅡ / 종성 )
    {{KC_G, KC_J, KC_K, KC_R}, {KC_R, KC_J, KC_D, KC_M, KC_L, KC_SPC}},
    // 55. 일반 약어 | 거칠 (초성 ㄱ+ㅈ / 중성 ㅣ / 종성 ㄹ)
    {{KC_D, KC_E, KC_K, KC_L}, {KC_R, KC_J, KC_C, KC_L, KC_F}},
    // 56. 일반 약어 | 걱정 (초성 ㄱ+ㅈ / 중성 ㅓ / 종성 ㄱ)
    {{KC_K, KC_L, KC_R, KC_X}, {KC_R, KC_J, KC_R, KC_W, KC_J, KC_D}},
    // 58. 일반 약어 | 건설 (초성 ㄱ+ㅅ / 중성 ㅓ / 종성 ㄹ)
    {{KC_E, KC_K, KC_N, KC_R}, {KC_R, KC_J, KC_S, KC_T, KC_J, KC_F}},
    // 59. 일반 약어 | 건축 (초성 ㄱ+ㅈ / 중성  / 종성 ㄴ+ㄱ)
    {{KC_K, KC_L, KC_S, KC_X}, {KC_R, KC_J, KC_S, KC_C, KC_N, KC_R}},
    // 59. 일반 약어 | 건축 (초성 ㄱ+ㅈ / 중성  / 종성 ㄴ+ㄱ)
    {{KC_A, KC_E, KC_K, KC_L}, {KC_R, KC_J, KC_S, KC_C, KC_N, KC_R}},
    // 61. 일반 약어 | 검사 (초성 ㄱ+ㅅ / 중성 ㅓ / 종성 ㅁ)
    {{KC_K, KC_N, KC_R, KC_Z}, {KC_R, KC_J, KC_A, KC_T, KC_K}},
    // 62. 일반 약어 | 검은_ (초성 ㄱ / 중성 ㅓ+ㅡ / 종성 ㅁ)
    {{KC_G, KC_K, KC_R, KC_Z}, {KC_R, KC_J, KC_A, KC_D, KC_M, KC_S, KC_SPC}},
    // 63. 일반 약어 | 검찰 (초성 ㄱ+ㅈ / 중성 ㅓ / 종성 ㅁ)
    {{KC_K, KC_L, KC_R, KC_Z}, {KC_R, KC_J, KC_A, KC_C, KC_K, KC_F}},
    // 65. 일반 약어 | 것도_ (초성 ㄱ+ㄷ / 중성 ㅓ / 종성 ㅅ)
    {{KC_I, KC_K, KC_Q, KC_R}, {KC_R, KC_J, KC_T, KC_E, KC_H, KC_SPC}},
    // 67. 일반 약어 | 것을_ (초성 ㄱ / 중성 ㅓ+ㅡ / 종성 ㄹ)
    {{KC_E, KC_G, KC_K, KC_R}, {KC_R, KC_J, KC_T, KC_D, KC_M, KC_F, KC_SPC}},
    // 68. 일반 약어 | 게다가_ (초성 ㄱ+ㄷ / 중성 ㅔ+ㅏ / 종성 )
    {{KC_C, KC_F, KC_I, KC_K}, {KC_R, KC_P, KC_E, KC_K, KC_R, KC_K, KC_SPC}},
    // 73. 일반 약어 | 결론 (초성 ㄱ+ㄹ / 중성 ㅗ / 종성 ㄴ)
    {{KC_K, KC_M, KC_S, KC_V}, {KC_R, KC_U, KC_F, KC_F, KC_H, KC_S}},
    // 73. 일반 약어 | 결론 (초성 ㄱ+ㄹ / 중성 ㅗ / 종성 ㄴ)
    {{KC_K, KC_M, KC_S, KC_DOT}, {KC_R, KC_U, KC_F, KC_F, KC_H, KC_S}},
    // 74. 일반 약어 | 결심 (초성 ㄱ+ㅅ / 중성 ㅕ / 종성 ㄹ)
    {{KC_E, KC_K, KC_N, KC_T}, {KC_R, KC_U, KC_F, KC_T, KC_L, KC_A}},
    // 75. 일반 약어 | 결정 (초성 ㄱ+ㅈ / 중성 ㅕ / 종성 ㄹ)
    {{KC_E, KC_K, KC_L, KC_T}, {KC_R, KC_U, KC_F, KC_W, KC_J, KC_D}},
    // 77. 일반 약어 | 결혼 (초성 ㄱ+ㅎ / 중성  / 종성 ㄹ+ㄴ)
    {{KC_E, KC_H, KC_K, KC_S}, {KC_R, KC_U, KC_F, KC_G, KC_H, KC_S}},
    // 79. 일반 약어 | 경상 (초성 ㄱ+ㅅ / 중성 ㅕ / 종성 ㅇ)
    {{KC_A, KC_K, KC_N, KC_T}, {KC_R, KC_U, KC_D, KC_T, KC_K, KC_D}},
    // 82. 일반 약어 | 경제 (초성 ㄱ+ㅈ / 중성 ㅕ / 종성 ㅇ)
    {{KC_A, KC_K, KC_L, KC_T}, {KC_R, KC_U, KC_D, KC_W, KC_P}},
    // 85. 일반 약어 | 경향 (초성 ㄱ+ㅎ / 중성 ㅕ+ㅡ / 종성 )
    {{KC_G, KC_H, KC_K, KC_T}, {KC_R, KC_U, KC_D, KC_G, KC_I, KC_D}},
    // 86. 일반 약어 | 경험 (초성 ㄱ / 중성 ㅕ+ㅓ / 종성 ㅇ)
    {{KC_A, KC_K, KC_R, KC_T}, {KC_R, KC_U, KC_D, KC_G, KC_J, KC_A}},
    // 88. 일반 약어 | 계단 (초성 ㄱ+ㄷ / 중성 ㅖ / 종성 )
    {{KC_C, KC_I, KC_K, KC_DOT}, {KC_R, SFT(KC_P), KC_E, KC_K, KC_S}},
    // 88. 일반 약어 | 계단 (초성 ㄱ+ㄷ / 중성 ㅖ / 종성 )
    {{KC_C, KC_I, KC_K, KC_V}, {KC_R, SFT(KC_P), KC_E, KC_K, KC_S}},
    // 90. 일반 약어 | 계속 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 ㄱ)
    {{KC_K, KC_N, KC_V, KC_X}, {KC_R, SFT(KC_P), KC_T, KC_H, KC_R}},
    // 90. 일반 약어 | 계속 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 ㄱ)
    {{KC_K, KC_N, KC_X, KC_DOT}, {KC_R, SFT(KC_P), KC_T, KC_H, KC_R}},
    // 93. 일반 약어 | 계층 (초성 ㄱ+ㅈ / 중성 ㅔ+ㅡ / 종성 )
    {{KC_C, KC_G, KC_K, KC_L}, {KC_R, SFT(KC_P), KC_C, KC_M, KC_D}},
    // 94. 일반 약어 | 계획 (초성 ㄱ / 중성 ㅔ+ㅚ / 종성 ㄱ)
    {{KC_D, KC_K, KC_V, KC_X}, {KC_R, SFT(KC_P), KC_G, KC_H, KC_L, KC_R}},
    // 97. 일반 약어 | 고는_ (초성 ㄴ / 중성 ㅗ+ㅡ / 종성 ㄴ)
    {{KC_G, KC_S, KC_U, KC_V}, {KC_R, KC_H, KC_S, KC_M, KC_S, KC_SPC}},
    // 99. 일반 약어 | 고등 (초성 ㄱ+ㄷ / 중성 ㅡ / 종성 ㅇ)
    {{KC_A, KC_G, KC_I, KC_K}, {KC_R, KC_H, KC_E, KC_M, KC_D}},
    // 100. 일반 약어 | 고려 (초성 ㄱ+ㄹ / 중성 ㅗ+ㅕ / 종성 )
    {{KC_K, KC_M, KC_T, KC_V}, {KC_R, KC_H, KC_F, KC_U}},
    // 101. 일반 약어 | 고생 (초성 ㄱ+ㅅ / 중성 ㅗ+ㅐ / 종성 ㅇ)
    {{KC_A, KC_K, KC_N, KC_DOT}, {KC_R, KC_H, KC_T, KC_O, KC_D}},
    // 103. 일반 약어 | 고통 (초성 ㄱ+ㄷ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_I, KC_K, KC_V}, {KC_R, KC_H, KC_X, KC_H, KC_D}},
    // 103. 일반 약어 | 고통 (초성 ㄱ+ㄷ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_I, KC_K, KC_DOT}, {KC_R, KC_H, KC_X, KC_H, KC_D}},
    // 111. 일반 약어 | 공사 (초성 ㄱ+ㅅ / 중성 ㅗ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_K, KC_N, KC_DOT}, {KC_R, KC_H, KC_D, KC_T, KC_K}},
    // 112. 일반 약어 | 공산 (초성 ㄱ+ㅅ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_K, KC_N, KC_S}, {KC_R, KC_H, KC_D, KC_T, KC_K, KC_S}},
    // 113. 일반 약어 | 공식 (초성 ㄱ+ㅅ / 중성 ㅗ+ㅣ / 종성 ㄱ)
    {{KC_K, KC_N, KC_X, KC_DOT}, {KC_R, KC_H, KC_D, KC_T, KC_L, KC_R}},
    // 114. 일반 약어 | 공업 (초성 ㄱ+ㅇ / 중성  / 종성 ㅇ+ㅂ)
    {{KC_A, KC_J, KC_K, KC_W}, {KC_R, KC_H, KC_D, KC_D, KC_J, KC_Q}},
    // 115. 일반 약어 | 공연 (초성 ㄱ+ㅇ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_J, KC_K, KC_S}, {KC_R, KC_H, KC_D, KC_D, KC_U, KC_S}},
    // 116. 일반 약어 | 공장 (초성 ㄱ+ㅈ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_K, KC_L}, {KC_R, KC_H, KC_D, KC_W, KC_K, KC_D}},
    // 117. 일반 약어 | 공포 (초성 ㄱ+ㅂ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_K, KC_O, KC_V}, {KC_R, KC_H, KC_D, KC_V, KC_H}},
    // 117. 일반 약어 | 공포 (초성 ㄱ+ㅂ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_K, KC_O, KC_DOT}, {KC_R, KC_H, KC_D, KC_V, KC_H}},
    // 118. 일반 약어 | 과정 (초성 ㄱ+ㅈ / 중성 ㅘ / 종성 )
    {{KC_F, KC_K, KC_L, KC_DOT}, {KC_R, KC_H, KC_K, KC_W, KC_J, KC_D}},
    // 118. 일반 약어 | 과정 (초성 ㄱ+ㅈ / 중성 ㅘ / 종성 )
    {{KC_F, KC_K, KC_L, KC_V}, {KC_R, KC_H, KC_K, KC_W, KC_J, KC_D}},
    // 119. 일반 약어 | 과제 (초성 ㄱ+ㅈ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_K, KC_L}, {KC_R, KC_H, KC_K, KC_W, KC_P}},
    // 120. 일반 약어 | 과학자 (초성 ㄱ+ㅈ / 중성 ㅗ+ㅏ / 종성 ㄱ)
    {{KC_K, KC_L, KC_X, KC_DOT}, {KC_R, KC_H, KC_K, KC_G, KC_K, KC_R, KC_W, KC_K}},
    // 121. 일반 약어 | 과학적 (초성 ㄱ+ㅈ / 중성 ㅗ+ㅓ / 종성 ㄱ)
    {{KC_K, KC_L, KC_X, KC_DOT}, {KC_R, KC_H, KC_K, KC_G, KC_K, KC_R, KC_W, KC_J, KC_R}},
    // 123. 일반 약어 | 관계 (초성 ㄱ / 중성 ㅏ+ㅔ / 종성 ㄴ)
    {{KC_C, KC_F, KC_K, KC_S}, {KC_R, KC_H, KC_K, KC_S, KC_R, SFT(KC_P)}},
    // 124. 일반 약어 | 관계자 (초성 ㄱ+ㅈ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_K, KC_L, KC_S}, {KC_R, KC_H, KC_K, KC_S, KC_R, SFT(KC_P), KC_W, KC_K}},
    // 126. 일반 약어 | 관련 (초성 ㄱ+ㄹ / 중성 ㅕ / 종성 ㄴ)
    {{KC_K, KC_M, KC_S, KC_T}, {KC_R, KC_H, KC_K, KC_S, KC_F, KC_U, KC_S}},
    // 131. 일반 약어 | 관찰 (초성 ㄱ+ㅈ / 중성  / 종성 ㄴ+ㄹ)
    {{KC_E, KC_K, KC_L, KC_S}, {KC_R, KC_H, KC_K, KC_S, KC_C, KC_K, KC_F}},
    // 134. 일반 약어 | 괜찮 (초성 ㄱ+ㅈ / 중성  / 종성 ㄶ)
    {{KC_A, KC_K, KC_L, KC_S}, {KC_R, KC_H, KC_O, KC_S, KC_C, KC_K, KC_S, KC_G}},
    // 136. 일반 약어 | 교사 (초성 ㄱ+ㅅ / 중성 ㅛ / 종성 )
    {{KC_K, KC_N, KC_V, KC_DOT}, {KC_R, KC_Y, KC_T, KC_K}},
    // 136. 일반 약어 | 교사 (초성 ㄱ+ㅅ / 중성 ㅛ / 종성 )
    {{KC_F, KC_K, KC_N, KC_R}, {KC_R, KC_Y, KC_T, KC_K}},
    // 138. 일반 약어 | 교육 (초성 ㄱ+ㅇ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_J, KC_K}, {KC_R, KC_Y, KC_D, KC_B, KC_R}},
    // 141. 일반 약어 | 구경 (초성 ㄱ / 중성 ㅜ+ㅕ / 종성 ㅇ)
    {{KC_A, KC_B, KC_K, KC_T}, {KC_R, KC_N, KC_R, KC_U, KC_D}},
    // 144. 일반 약어 | 구름 (초성 ㄱ+ㄹ / 중성 ㅜ+ㅡ / 종성 )
    {{KC_B, KC_G, KC_K, KC_M}, {KC_R, KC_N, KC_F, KC_M, KC_A}},
    // 145. 일반 약어 | 구분 (초성 ㄱ+ㅂ / 중성 ㅜ / 종성 ㄴ)
    {{KC_B, KC_K, KC_O, KC_S}, {KC_R, KC_N, KC_Q, KC_N, KC_S}},
    // 146. 일반 약어 | 구석 (초성 ㄱ+ㅅ / 중성 ㅓ / 종성 ㄱ)
    {{KC_K, KC_N, KC_R, KC_X}, {KC_R, KC_N, KC_T, KC_J, KC_R}},
    // 147. 일반 약어 | 구성 (초성 ㄱ+ㅅ / 중성 ㅜ / 종성 ㅇ)
    {{KC_A, KC_B, KC_K, KC_N}, {KC_R, KC_N, KC_T, KC_J, KC_D}},
    // 148. 일반 약어 | 구속 (초성 ㄱ+ㅅ / 중성 ㅜ / 종성 ㄱ)
    {{KC_B, KC_K, KC_N, KC_X}, {KC_R, KC_N, KC_T, KC_H, KC_R}},
    // 152. 일반 약어 | 국내 (초성 ㄱ / 중성 ㅜ+ㅏ / 종성 ㄱ)
    {{KC_B, KC_F, KC_K, KC_X}, {KC_R, KC_N, KC_R, KC_S, KC_O}},
    // 155. 일반 약어 | 군대 (초성 ㄱ+ㄷ / 중성 ㅜ / 종성 ㄴ)
    {{KC_B, KC_I, KC_K, KC_S}, {KC_R, KC_N, KC_S, KC_E, KC_O}},
    // 158. 일반 약어 | 권력 (초성 ㄱ+ㄹ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_M}, {KC_R, KC_N, KC_J, KC_S, KC_F, KC_U, KC_R}},
    // 160. 일반 약어 | 귀족 (초성 ㄱ+ㅈ / 중성 ㅣ+ㅗ / 종성 ㄱ)
    {{KC_K, KC_L, KC_X, KC_DOT}, {KC_R, KC_N, KC_L, KC_W, KC_H, KC_R}},
    // 161. 일반 약어 | 규정 (초성 ㄱ+ㅈ / 중성 ㅠ / 종성 )
    {{KC_B, KC_K, KC_L, KC_DOT}, {KC_R, KC_B, KC_W, KC_J, KC_D}},
    // 161. 일반 약어 | 규정 (초성 ㄱ+ㅈ / 중성 ㅠ / 종성 )
    {{KC_B, KC_K, KC_L, KC_V}, {KC_R, KC_B, KC_W, KC_J, KC_D}},
    // 162. 일반 약어 | 균형 (초성 ㄱ+ㅎ / 중성  / 종성 ㄴ+ㅇ)
    {{KC_A, KC_H, KC_K, KC_S}, {KC_R, KC_B, KC_S, KC_G, KC_U, KC_D}},
    // 166. 일반 약어 | 그냥_ (초성 ㄴ / 중성 ㅡ+왼쪽ㅗ / 종성 ㅇ)
    {{KC_A, KC_G, KC_U, KC_DOT}, {KC_R, KC_M, KC_S, KC_I, KC_D, KC_SPC}},
    // 170. 일반 약어 | 그동안 (초성 ㄱ+ㄷ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_I, KC_K, KC_S}, {KC_R, KC_M, KC_E, KC_H, KC_D, KC_D, KC_K, KC_S}},
    // 171. 일반 약어 | 그때 (초성 ㄱ+ㄷ / 중성 ㅡ+ㅏ / 종성 )
    {{KC_F, KC_G, KC_I, KC_K}, {KC_R, KC_M, SFT(KC_E), KC_O}},
    // 172. 일반 약어 | 그래 (초성 ㄱ+ㄹ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_K, KC_M}, {KC_R, KC_M, KC_F, KC_O}},
    // 177. 일반 약어 | 그러 (초성 ㄱ+ㄹ / 중성 ㅡ+ㅓ / 종성 )
    {{KC_G, KC_K, KC_M, KC_R}, {KC_R, KC_M, KC_F, KC_J}},
    // 180. 일반 약어 | 그러려고_ (초성 ㄱ+ㄹ / 중성 ㅓ+ㅕ / 종성 )
    {{KC_K, KC_M, KC_R, KC_T}, {KC_R, KC_M, KC_F, KC_J, KC_F, KC_U, KC_R, KC_H, KC_SPC}},
    // 185. 일반 약어 | 그럼_ (초성 ㄱ+ㄹ / 중성 ㅓ / 종성 ㅁ)
    {{KC_K, KC_M, KC_R, KC_Z}, {KC_R, KC_M, KC_F, KC_J, KC_A, KC_SPC}},
    // 186. 일반 약어 | 그렇 (초성 ㄱ+ㄹ / 중성  / 종성 ㅎ)
    {{KC_K, KC_M, KC_S, KC_SCLN}, {KC_R, KC_M, KC_F, KC_J, KC_G}},
    // 187. 일반 약어 | 그렇지 (초성 ㄱ+ㅈ / 중성 ㅡ+ㅣ / 종성 )
    {{KC_D, KC_G, KC_K, KC_L}, {KC_R, KC_M, KC_F, KC_J, KC_G, KC_W, KC_L}},
    // 189. 일반 약어 | 그릇 (초성 ㄱ+ㄹ / 중성 ㅡ / 종성 ㅅ)
    {{KC_G, KC_K, KC_M, KC_Q}, {KC_R, KC_M, KC_F, KC_M, KC_T}},
    // 190. 일반 약어 | 그리 (초성 ㄱ+ㄹ / 중성 ㅡ+ㅣ / 종성 )
    {{KC_D, KC_G, KC_K, KC_M}, {KC_R, KC_M, KC_F, KC_L}},
    // 192. 일반 약어 | 그리하여_ (초성 ㄱ+ㄹ / 중성 ㅡ+ㅕ / 종성 )
    {{KC_G, KC_K, KC_M, KC_T}, {KC_R, KC_M, KC_F, KC_L, KC_G, KC_K, KC_D, KC_U, KC_SPC}},
    // 193. 일반 약어 | 그림 (초성 ㄱ+ㄹ / 중성 ㅣ / 종성 ㅁ)
    {{KC_D, KC_K, KC_M, KC_Z}, {KC_R, KC_M, KC_F, KC_L, KC_A}},
    // 195. 일반 약어 | 그만 (초성 ㄱ / 중성 ㅡ+ㅏ / 종성 ㄴ)
    {{KC_F, KC_G, KC_K, KC_S}, {KC_R, KC_M, KC_A, KC_K, KC_S}},
    // 196. 일반 약어 | 그만큼 (초성 ㅁ+ㅎ / 중성 ㅡ / 종성 ㅁ)
    {{KC_G, KC_H, KC_Y, KC_Z}, {KC_R, KC_M, KC_A, KC_K, KC_S, KC_Z, KC_M, KC_A}},
    // 198. 일반 약어 | 그중 (초성 ㄱ+ㅈ / 중성 ㅡ+ㅜ / 종성 )
    {{KC_B, KC_G, KC_K, KC_L}, {KC_R, KC_M, KC_W, KC_N, KC_D}},
    // 199. 일반 약어 | 극복 (초성 ㄱ+ㅂ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_O}, {KC_R, KC_M, KC_R, KC_Q, KC_H, KC_R}},
    // 201. 일반 약어 | 근거 (초성 ㄱ / 중성 ㅡ+ㅓ / 종성 ㄴ)
    {{KC_G, KC_K, KC_R, KC_S}, {KC_R, KC_M, KC_S, KC_R, KC_J}},
    // 202. 일반 약어 | 근데_ (초성 ㄱ+ㄷ / 중성 ㅡ / 종성 ㄴ)
    {{KC_G, KC_I, KC_K, KC_S}, {KC_R, KC_M, KC_S, KC_E, KC_P, KC_SPC}},
    // 203. 일반 약어 | 근로 (초성 ㄱ+ㄹ / 중성 ㅡ / 종성 ㄴ)
    {{KC_G, KC_K, KC_M, KC_S}, {KC_R, KC_M, KC_S, KC_F, KC_H}},
    // 204. 일반 약어 | 근무 (초성 ㄱ / 중성 ㅡ+ㅜ / 종성 ㄴ)
    {{KC_B, KC_G, KC_K, KC_S}, {KC_R, KC_M, KC_S, KC_A, KC_N}},
    // 205. 일반 약어 | 근본적 (초성 ㄱ+ㅂ / 중성 ㅡ / 종성 ㄱ)
    {{KC_G, KC_K, KC_O, KC_X}, {KC_R, KC_M, KC_S, KC_Q, KC_H, KC_S, KC_W, KC_J, KC_R}},
    // 207. 일반 약어 | 근처 (초성 ㄱ+ㅈ / 중성 ㅡ / 종성 ㄴ)
    {{KC_G, KC_K, KC_L, KC_S}, {KC_R, KC_M, KC_S, KC_C, KC_J}},
    // 208. 일반 약어 | 글쎄 (초성 ㄱ+ㅅ / 중성 ㅡ / 종성 ㄹ)
    {{KC_E, KC_G, KC_K, KC_N}, {KC_R, KC_M, KC_F, SFT(KC_T), KC_P}},
    // 209. 일반 약어 | 글자 (초성 ㄱ+ㅈ / 중성 ㅡ+ㅏ / 종성 )
    {{KC_F, KC_G, KC_K, KC_L}, {KC_R, KC_M, KC_F, KC_W, KC_K}},
    // 210. 일반 약어 | 금방_ (초성 ㄱ+ㅂ / 중성 ㅡ / 종성 ㅁ)
    {{KC_G, KC_K, KC_O, KC_Z}, {KC_R, KC_M, KC_A, KC_Q, KC_K, KC_D, KC_SPC}},
    // 213. 일반 약어 | 기계 (초성 ㄱ / 중성 ㅣ+ㅖ / 종성 )
    {{KC_C, KC_D, KC_K, KC_DOT}, {KC_R, KC_L, KC_R, SFT(KC_P)}},
    // 216. 일반 약어 | 기대 (초성 ㄱ+ㄷ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_I, KC_K}, {KC_R, KC_L, KC_E, KC_O}},
    // 217. 일반 약어 | 기도 (초성 ㄱ+ㄷ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_D, KC_I, KC_K, KC_V}, {KC_R, KC_L, KC_E, KC_H}},
    // 218. 일반 약어 | 기독교 (초성 ㄱ+ㄷ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_I, KC_K}, {KC_R, KC_L, KC_E, KC_H, KC_R, KC_R, KC_Y}},
    // 219. 일반 약어 | 기록 (초성 ㄱ+ㄹ / 중성 ㅗ / 종성 ㄱ)
    {{KC_K, KC_M, KC_V, KC_X}, {KC_R, KC_L, KC_F, KC_H, KC_R}},
    // 219. 일반 약어 | 기록 (초성 ㄱ+ㄹ / 중성 ㅗ / 종성 ㄱ)
    {{KC_K, KC_M, KC_X, KC_DOT}, {KC_R, KC_L, KC_F, KC_H, KC_R}},
    // 220. 일반 약어 | 기름 (초성 ㄱ+ㄹ / 중성 ㅡ / 종성 ㅁ)
    {{KC_G, KC_K, KC_M, KC_Z}, {KC_R, KC_L, KC_F, KC_M, KC_A}},
    // 221. 일반 약어 | 기본 (초성 ㄱ+ㅂ / 중성 ㅗ / 종성 ㄴ)
    {{KC_K, KC_O, KC_S, KC_V}, {KC_R, KC_L, KC_Q, KC_H, KC_S}},
    // 221. 일반 약어 | 기본 (초성 ㄱ+ㅂ / 중성 ㅗ / 종성 ㄴ)
    {{KC_K, KC_O, KC_S, KC_DOT}, {KC_R, KC_L, KC_Q, KC_H, KC_S}},
    // 222. 일반 약어 | 기본적 (초성 ㄱ+ㅂ / 중성 ㅣ / 종성 ㄱ)
    {{KC_D, KC_K, KC_O, KC_X}, {KC_R, KC_L, KC_Q, KC_H, KC_S, KC_W, KC_J, KC_R}},
    // 224. 일반 약어 | 기쁨 (초성 ㄱ+ㅂ / 중성 ㅣ+ㅡ / 종성 )
    {{KC_D, KC_G, KC_K, KC_O}, {KC_R, KC_L, SFT(KC_Q), KC_M, KC_A}},
    // 229. 일반 약어 | 기존 (초성 ㄱ+ㅈ / 중성 ㅗ / 종성 ㄴ)
    {{KC_K, KC_L, KC_S, KC_V}, {KC_R, KC_L, KC_W, KC_H, KC_S}},
    // 229. 일반 약어 | 기존 (초성 ㄱ+ㅈ / 중성 ㅗ / 종성 ㄴ)
    {{KC_K, KC_L, KC_S, KC_DOT}, {KC_R, KC_L, KC_W, KC_H, KC_S}},
    // 230. 일반 약어 | 기준 (초성 ㄱ+ㅈ / 중성 ㅜ / 종성 ㄴ)
    {{KC_B, KC_K, KC_L, KC_S}, {KC_R, KC_L, KC_W, KC_N, KC_S}},
    // 233. 일반 약어 | 김치 (초성 ㄱ+ㅈ / 중성 ㅣ / 종성 ㅁ)
    {{KC_D, KC_K, KC_L, KC_Z}, {KC_R, KC_L, KC_A, KC_C, KC_L}},
    // 235. 일반 약어 | 깊이 (초성 ㄱ+ㅇ / 중성  / 종성 ㅍ)
    {{KC_J, KC_K, KC_W, KC_SCLN}, {KC_R, KC_L, KC_V, KC_D, KC_L}},
    // 236. 일반 약어 | 까닭 (초성 ㄱ+ㄷ / 중성  / 종성 ㄺ)
    {{KC_E, KC_I, KC_K, KC_X}, {SFT(KC_R), KC_K, KC_E, KC_K, KC_F, KC_R}},
    // 236. 일반 약어 | 까닭 (초성 ㄱ+ㄷ / 중성  / 종성 ㄺ)
    {{KC_I, KC_K, KC_X, KC_Z}, {SFT(KC_R), KC_K, KC_E, KC_K, KC_F, KC_R}},
    // 239. 일반 약어 | 껍질 (초성 ㄱ+ㅈ / 중성  / 종성 ㅂ+ㄹ)
    {{KC_E, KC_K, KC_L, KC_W}, {SFT(KC_R), KC_J, KC_Q, KC_W, KC_L, KC_F}},
    // 240. 일반 약어 | 께서_ (초성 ㄲ / 중성 ㅔ+ㅓ / 종성 )
    {{KC_C, KC_J, KC_K, KC_R}, {SFT(KC_R), KC_P, KC_T, KC_J, KC_SPC}},
    // 241. 일반 약어 | 꼬리 (초성 ㄱ+ㄹ / 중성 ㅗ+ㅣ / 종성 )
    {{KC_D, KC_K, KC_M, KC_V}, {SFT(KC_R), KC_H, KC_F, KC_L}},
    // 242. 일반 약어 | 꾸는_ (초성 ㄲ / 중성 ㅜ+ㅡ / 종성 )
    {{KC_B, KC_G, KC_J, KC_K}, {SFT(KC_R), KC_N, KC_S, KC_M, KC_S, KC_SPC}},
    // 243. 일반 약어 | 끊임없 (초성 ㄲ / 중성  / 종성 ㅄ)
    {{KC_J, KC_K, KC_Q, KC_W}, {SFT(KC_R), KC_M, KC_S, KC_G, KC_D, KC_L, KC_A, KC_D, KC_J, KC_Q, KC_T}},
    // 250. 일반 약어 | 나무 (초성 ㄴ+ㅁ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_U, KC_Y}, {KC_S, KC_K, KC_A, KC_N}},
    // 253. 일반 약어 | 낚시 (초성 ㄴ+ㅅ / 중성 ㅏ+ㅣ / 종성 )
    {{KC_D, KC_F, KC_N, KC_U}, {KC_S, KC_K, SFT(KC_R), KC_T, KC_L}},
    // 255. 일반 약어 | 남부 (초성 ㄴ+ㅂ / 중성 ㅏ / 종성 ㅁ)
    {{KC_F, KC_O, KC_U, KC_Z}, {KC_S, KC_K, KC_A, KC_Q, KC_N}},
    // 257. 일반 약어 | 남쪽 (초성 ㄴ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_L, KC_U, KC_V, KC_X}, {KC_S, KC_K, KC_A, SFT(KC_W), KC_H, KC_R}},
    // 257. 일반 약어 | 남쪽 (초성 ㄴ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_L, KC_U, KC_X, KC_DOT}, {KC_S, KC_K, KC_A, SFT(KC_W), KC_H, KC_R}},
    // 259. 일반 약어 | 남한 (초성 ㄴ+ㅎ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_H, KC_S, KC_U}, {KC_S, KC_K, KC_A, KC_G, KC_K, KC_S}},
    // 260. 일반 약어 | 낮은_ (초성 ㄴ / 중성 ㅏ+ㅡ / 종성 ㄹ)
    {{KC_E, KC_F, KC_G, KC_U}, {KC_S, KC_K, KC_W, KC_D, KC_M, KC_S, KC_SPC}},
    // 263. 일반 약어 | 내는_ (초성 ㄴ / 중성 ㅐ+ㅡ / 종성 )
    {{KC_D, KC_F, KC_G, KC_U}, {KC_S, KC_O, KC_S, KC_M, KC_S, KC_SPC}},
    // 264. 일반 약어 | 내려 (초성 ㄴ+ㄹ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_M, KC_U}, {KC_S, KC_O, KC_F, KC_U}},
    // 267. 일반 약어 | 내일 (초성 ㄴ+ㅇ / 중성 ㅣ / 종성 ㄹ)
    {{KC_D, KC_E, KC_J, KC_U}, {KC_S, KC_O, KC_D, KC_L, KC_F}},
    // 268. 일반 약어 | 내지_ (초성 ㄴ+ㅈ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_L, KC_U}, {KC_S, KC_O, KC_W, KC_L, KC_SPC}},
    // 271. 일반 약어 | 너희 (초성 ㄴ+ㅎ / 중성 ㅓ+ㅡ / 종성 )
    {{KC_G, KC_H, KC_R, KC_U}, {KC_S, KC_J, KC_G, KC_M, KC_L}},
    // 276. 일반 약어 | 년대 (초성 ㄴ+ㄷ / 중성 ㅕ / 종성 ㄴ)
    {{KC_I, KC_S, KC_T, KC_U}, {KC_S, KC_U, KC_S, KC_E, KC_O}},
    // 278. 일반 약어 | 노동자 (초성 ㄴ+ㄷ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_I, KC_U}, {KC_S, KC_H, KC_E, KC_H, KC_D, KC_W, KC_K}},
    // 280. 일반 약어 | 노력 (초성 ㄴ+ㄹ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_M, KC_U}, {KC_S, KC_H, KC_F, KC_U, KC_R}},
    // 281. 일반 약어 | 노인 (초성 ㄴ+ㅇ / 중성 ㅣ / 종성 ㄴ)
    {{KC_D, KC_J, KC_S, KC_U}, {KC_S, KC_H, KC_D, KC_L, KC_S}},
    // 284. 일반 약어 | 논의 (초성 ㄴ+ㅇ / 중성 ㅗ / 종성 ㄴ)
    {{KC_J, KC_S, KC_U, KC_V}, {KC_S, KC_H, KC_S, KC_D, KC_M, KC_L}},
    // 284. 일반 약어 | 논의 (초성 ㄴ+ㅇ / 중성 ㅗ / 종성 ㄴ)
    {{KC_J, KC_S, KC_U, KC_DOT}, {KC_S, KC_H, KC_S, KC_D, KC_M, KC_L}},
    // 287. 일반 약어 | 농사 (초성 ㄴ+ㅅ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_N, KC_U, KC_V}, {KC_S, KC_H, KC_D, KC_T, KC_K}},
    // 287. 일반 약어 | 농사 (초성 ㄴ+ㅅ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_N, KC_U, KC_DOT}, {KC_S, KC_H, KC_D, KC_T, KC_K}},
    // 288. 일반 약어 | 농산물 (초성 ㄴ+ㅁ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_S, KC_U, KC_Y}, {KC_S, KC_H, KC_D, KC_T, KC_K, KC_S, KC_A, KC_N, KC_F}},
    // 289. 일반 약어 | 농업 (초성 ㄴ+ㅇ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_J, KC_U, KC_V}, {KC_S, KC_H, KC_D, KC_D, KC_J, KC_Q}},
    // 289. 일반 약어 | 농업 (초성 ㄴ+ㅇ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_J, KC_U, KC_DOT}, {KC_S, KC_H, KC_D, KC_D, KC_J, KC_Q}},
    // 290. 일반 약어 | 농촌 (초성 ㄴ+ㅎ / 중성 ㅗ / 종성 ㄴ)
    {{KC_H, KC_S, KC_U, KC_V}, {KC_S, KC_H, KC_D, KC_C, KC_H, KC_S}},
    // 290. 일반 약어 | 농촌 (초성 ㄴ+ㅎ / 중성 ㅗ / 종성 ㄴ)
    {{KC_H, KC_S, KC_U, KC_DOT}, {KC_S, KC_H, KC_D, KC_C, KC_H, KC_S}},
    // 291. 일반 약어 | 높은_ (초성 ㄴ+ㅇ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_G, KC_J, KC_U, KC_V}, {KC_S, KC_H, KC_V, KC_D, KC_M, KC_S, KC_SPC}},
    // 297. 일반 약어 | 눈앞 (초성 ㄴ+ㅇ / 중성 ㅜ+ㅏ / 종성 )
    {{KC_B, KC_F, KC_J, KC_U}, {KC_S, KC_N, KC_S, KC_D, KC_K, KC_V}},
    // 298. 일반 약어 | 뉴스 (초성 ㄴ+ㅅ / 중성 ㅠ / 종성 )
    {{KC_B, KC_N, KC_U, KC_DOT}, {KC_S, KC_B, KC_T, KC_M}},
    // 298. 일반 약어 | 뉴스 (초성 ㄴ+ㅅ / 중성 ㅠ / 종성 )
    {{KC_B, KC_N, KC_U, KC_V}, {KC_S, KC_B, KC_T, KC_M}},
    // 299. 일반 약어 | 느낌 (초성 ㄴ+ㅇ / 중성 ㅣ / 종성 ㅁ)
    {{KC_D, KC_J, KC_U, KC_Z}, {KC_S, KC_M, SFT(KC_R), KC_L, KC_A}},
    // 301. 일반 약어 | 는가 (초성 ㄴ / 중성 ㅡ+ㅏ / 종성 ㄴ)
    {{KC_F, KC_G, KC_S, KC_U}, {KC_S, KC_M, KC_S, KC_R, KC_K}},
    // 302. 일반 약어 | 는다._ (초성 ㄴ+ㄷ / 중성 ㅡ+ㅏ / 종성 )
    {{KC_F, KC_G, KC_I, KC_U}, {KC_S, KC_M, KC_S, KC_E, KC_K, KC_DOT, KC_SPC}},
    // 304. 일반 약어 | 는데도_ (초성 ㄴ+ㄷ / 중성 ㅔ+ㅗ / 종성 )
    {{KC_C, KC_I, KC_U, KC_V}, {KC_S, KC_M, KC_S, KC_E, KC_P, KC_E, KC_H, KC_SPC}},
    // 306. 일반 약어 | 늘어 (초성 ㄴ+ㅇ / 중성 ㅡ / 종성 ㄹ)
    {{KC_E, KC_G, KC_J, KC_U}, {KC_S, KC_M, KC_F, KC_D, KC_J}},
    // 311. 일반 약어 | 다고 (초성 ㄷ+ㄱ / 중성 ㅏ+ㅗ / 종성 )
    {{KC_F, KC_I, KC_K, KC_V}, {KC_E, KC_K, KC_R, KC_H}},
    // 312. 일반 약어 | 다는_ (초성 ㄷ+ㄴ / 중성 ㅡ / 종성 ㄴ)
    {{KC_G, KC_I, KC_S, KC_U}, {KC_E, KC_K, KC_S, KC_M, KC_S, KC_SPC}},
    // 313. 일반 약어 | 다니 (초성 ㄷ+ㄴ / 중성 ㅏ+ㅣ / 종성 )
    {{KC_D, KC_F, KC_I, KC_U}, {KC_E, KC_K, KC_S, KC_L}},
    // 316. 일반 약어 | 다소_ (초성 ㄷ+ㅅ / 중성 ㅏ+ㅗ / 종성 )
    {{KC_F, KC_I, KC_N, KC_V}, {KC_E, KC_K, KC_T, KC_H, KC_SPC}},
    // 317. 일반 약어 | 다수 (초성 ㄷ+ㅅ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_I, KC_N}, {KC_E, KC_K, KC_T, KC_N}},
    // 318. 일반 약어 | 다시_ (초성 ㄷ+ㅅ / 중성 ㅏ+ㅣ / 종성 )
    {{KC_D, KC_F, KC_I, KC_N}, {KC_E, KC_K, KC_T, KC_L, KC_SPC}},
    // 320. 일반 약어 | 다운_ (초성 ㄷ / 중성 ㅏ+ㅜ / 종성 ㄴ)
    {{KC_B, KC_F, KC_I, KC_S}, {KC_E, KC_K, KC_D, KC_N, KC_S, KC_SPC}},
    // 323. 일반 약어 | 단계 (초성 ㄷ+ㄱ / 중성 ㅔ / 종성 ㄴ)
    {{KC_C, KC_I, KC_K, KC_S}, {KC_E, KC_K, KC_S, KC_R, SFT(KC_P)}},
    // 324. 일반 약어 | 단순 (초성 ㄷ+ㅅ / 중성 ㅜ / 종성 ㄴ)
    {{KC_B, KC_I, KC_N, KC_S}, {KC_E, KC_K, KC_S, KC_T, KC_N, KC_S}},
    // 326. 일반 약어 | 단지 (초성 ㄷ+ㅈ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_I, KC_L, KC_S}, {KC_E, KC_K, KC_S, KC_W, KC_L}},
    // 327. 일반 약어 | 단체 (초성 ㄷ / 중성 ㅏ+ㅔ / 종성 ㄴ)
    {{KC_C, KC_F, KC_I, KC_S}, {KC_E, KC_K, KC_S, KC_C, KC_P}},
    // 328. 일반 약어 | 달걀 (초성 ㄷ+ㄱ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_I, KC_K}, {KC_E, KC_K, KC_F, KC_R, KC_I, KC_F}},
    // 329. 일반 약어 | 달라 (초성 ㄷ+ㄹ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_I, KC_M}, {KC_E, KC_K, KC_F, KC_F, KC_K}},
    // 337. 일반 약어 | 당장 (초성 ㄷ+ㅈ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_I, KC_L}, {KC_E, KC_K, KC_D, KC_W, KC_K, KC_D}},
    // 339. 일반 약어 | 대로_ (초성 ㄷ+ㄹ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_I, KC_M}, {KC_E, KC_O, KC_F, KC_H, KC_SPC}},
    // 340. 일반 약어 | 대문 (초성 ㅁ / 중성 ㅏ+ㅜ / 종성 ㄴ)
    {{KC_B, KC_F, KC_S, KC_Y}, {KC_E, KC_O, KC_A, KC_N, KC_S}},
    // 343. 일반 약어 | 대상 (초성 ㄷ+ㅅ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_I, KC_N}, {KC_E, KC_O, KC_T, KC_K, KC_D}},
    // 344. 일반 약어 | 대신 (초성 ㄷ+ㅅ / 중성 ㅣ / 종성 ㄴ)
    {{KC_D, KC_I, KC_N, KC_S}, {KC_E, KC_O, KC_T, KC_L, KC_S}},
    // 345. 일반 약어 | 대중 (초성 ㄷ+ㅈ / 중성 ㅜ / 종성 ㅇ)
    {{KC_A, KC_B, KC_I, KC_L}, {KC_E, KC_O, KC_W, KC_N, KC_D}},
    // 347. 일반 약어 | 대체 (초성 ㄷ+ㅈ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_I, KC_L}, {KC_E, KC_O, KC_C, KC_P}},
    // 349. 일반 약어 | 대표 (초성 ㄷ+ㅂ / 중성 ㅛ / 종성 )
    {{KC_I, KC_O, KC_V, KC_DOT}, {KC_E, KC_O, KC_V, KC_Y}},
    // 349. 일반 약어 | 대표 (초성 ㄷ+ㅂ / 중성 ㅛ / 종성 )
    {{KC_F, KC_I, KC_O, KC_R}, {KC_E, KC_O, KC_V, KC_Y}},
    // 353. 일반 약어 | 대한민국 (초성 ㄷ+ㅎ / 중성  / 종성 ㄴ+ㄱ)
    {{KC_H, KC_I, KC_S, KC_X}, {KC_E, KC_O, KC_G, KC_K, KC_S, KC_A, KC_L, KC_S, KC_R, KC_N, KC_R}},
    // 353. 일반 약어 | 대한민국 (초성 ㄷ+ㅎ / 중성  / 종성 ㄴ+ㄱ)
    {{KC_A, KC_E, KC_H, KC_I}, {KC_E, KC_O, KC_G, KC_K, KC_S, KC_A, KC_L, KC_S, KC_R, KC_N, KC_R}},
    // 354. 일반 약어 | 더구나_ (초성 ㄷ+ㄱ / 중성 ㅜ+ㅏ / 종성 )
    {{KC_B, KC_F, KC_I, KC_K}, {KC_E, KC_J, KC_R, KC_N, KC_S, KC_K, KC_SPC}},
    // 357. 일반 약어 | 더라._ (초성 ㄷ+ㄹ / 중성 ㅓ+ㅏ / 종성 )
    {{KC_F, KC_I, KC_M, KC_R}, {KC_E, KC_J, KC_F, KC_K, KC_DOT, KC_SPC}},
    // 358. 일반 약어 | 더욱_ (초성 ㄷ+ㅇ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_I, KC_J}, {KC_E, KC_J, KC_D, KC_N, KC_R, KC_SPC}},
    // 359. 일반 약어 | 던가?_ (초성 ㄷ+ㄱ / 중성 ㅓ / 종성 ㄴ)
    {{KC_I, KC_K, KC_R, KC_S}, {KC_E, KC_J, KC_S, KC_R, KC_K, SFT(KC_SLASH), KC_SPC}},
    // 360. 일반 약어 | 도_불구하고_ (초성 ㄷ+ㅂ / 중성 ㅏ+ㅗ / 종성 )
    {{KC_F, KC_I, KC_O, KC_V}, {KC_E, KC_H, KC_SPC, KC_Q, KC_N, KC_F, KC_R, KC_N, KC_G, KC_K, KC_R, KC_H, KC_SPC}},
    // 361. 일반 약어 | 도록_ (초성 ㄷ+ㄹ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_I, KC_M}, {KC_E, KC_H, KC_F, KC_H, KC_R, KC_SPC}},
    // 362. 일반 약어 | 도서관 (초성 ㄷ+ㅅ / 중성 ㅗ+ㅓ / 종성 )
    {{KC_I, KC_N, KC_R, KC_V}, {KC_E, KC_H, KC_T, KC_J, KC_R, KC_H, KC_K, KC_S}},
    // 366. 일반 약어 | 도착 (초성 ㄷ+ㅈ / 중성 ㅏ / 종성 ㄱ)
    {{KC_F, KC_I, KC_L, KC_X}, {KC_E, KC_H, KC_C, KC_K, KC_R}},
    // 367. 일반 약어 | 독립 (초성 ㄷ+ㄹ / 중성 ㅣ / 종성 ㅂ)
    {{KC_D, KC_I, KC_M, KC_W}, {KC_E, KC_H, KC_R, KC_F, KC_L, KC_Q}},
    // 368. 일반 약어 | 독일 (초성 ㄷ+ㅇ / 중성  / 종성 ㄱ+ㄹ)
    {{KC_E, KC_I, KC_J, KC_X}, {KC_E, KC_H, KC_R, KC_D, KC_L, KC_F}},
    // 368. 일반 약어 | 독일 (초성 ㄷ+ㅇ / 중성  / 종성 ㄱ+ㄹ)
    {{KC_A, KC_E, KC_I, KC_J}, {KC_E, KC_H, KC_R, KC_D, KC_L, KC_F}},
    // 370. 일반 약어 | 동기 (초성 ㄷ+ㄱ / 중성 ㅣ / 종성 ㅇ)
    {{KC_A, KC_D, KC_I, KC_K}, {KC_E, KC_H, KC_D, KC_R, KC_L}},
    // 371. 일반 약어 | 동네 (초성 ㄷ+ㄴ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_I, KC_U, KC_V}, {KC_E, KC_H, KC_D, KC_S, KC_P}},
    // 371. 일반 약어 | 동네 (초성 ㄷ+ㄴ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_I, KC_U, KC_DOT}, {KC_E, KC_H, KC_D, KC_S, KC_P}},
    // 372. 일반 약어 | 동료 (초성 ㄷ+ㄹ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_I, KC_M, KC_V}, {KC_E, KC_H, KC_D, KC_F, KC_Y}},
    // 372. 일반 약어 | 동료 (초성 ㄷ+ㄹ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_I, KC_M, KC_DOT}, {KC_E, KC_H, KC_D, KC_F, KC_Y}},
    // 374. 일반 약어 | 동시 (초성 ㄷ+ㅅ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_I, KC_N, KC_V}, {KC_E, KC_H, KC_D, KC_T, KC_L}},
    // 374. 일반 약어 | 동시 (초성 ㄷ+ㅅ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_I, KC_N, KC_DOT}, {KC_E, KC_H, KC_D, KC_T, KC_L}},
    // 375. 일반 약어 | 동안 (초성 ㄷ+ㅇ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_I, KC_J, KC_S}, {KC_E, KC_H, KC_D, KC_D, KC_K, KC_S}},
    // 376. 일반 약어 | 동작 (초성 ㄷ+ㅈ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_I, KC_L, KC_X}, {KC_E, KC_H, KC_D, KC_W, KC_K, KC_R}},
    // 376. 일반 약어 | 동작 (초성 ㄷ+ㅈ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_E, KC_I, KC_L}, {KC_E, KC_H, KC_D, KC_W, KC_K, KC_R}},
    // 377. 일반 약어 | 동쪽 (초성 ㄷ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_I, KC_L, KC_V, KC_X}, {KC_E, KC_H, KC_D, SFT(KC_W), KC_H, KC_R}},
    // 377. 일반 약어 | 동쪽 (초성 ㄷ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_I, KC_L, KC_X, KC_DOT}, {KC_E, KC_H, KC_D, SFT(KC_W), KC_H, KC_R}},
    // 379. 일반 약어 | 되는_ (초성 ㄷ+ㄴ / 중성 ㅗ+ㅣ / 종성 )
    {{KC_D, KC_I, KC_U, KC_V}, {KC_E, KC_H, KC_L, KC_S, KC_M, KC_S, KC_SPC}},
    // 380. 일반 약어 | 되는데 (초성 ㄷ+ㄴ / 중성 ㅣ+ㅔ / 종성 )
    {{KC_C, KC_D, KC_I, KC_U}, {KC_E, KC_H, KC_L, KC_S, KC_M, KC_S, KC_E, KC_P}},
    // 383. 일반 약어 | 드디어_ (초성 ㄷ+ㅇ / 중성 ㅡ+ㅓ / 종성 )
    {{KC_G, KC_I, KC_J, KC_R}, {KC_E, KC_M, KC_E, KC_L, KC_D, KC_J, KC_SPC}},
    // 384. 일반 약어 | 드라마 (초성 ㄷ+ㄹ / 중성 ㅡ+ㅏ / 종성 )
    {{KC_F, KC_G, KC_I, KC_M}, {KC_E, KC_M, KC_F, KC_K, KC_A, KC_K}},
    // 385. 일반 약어 | 드러 (초성 ㄷ+ㄹ / 중성 ㅡ+ㅓ / 종성 )
    {{KC_G, KC_I, KC_M, KC_R}, {KC_E, KC_M, KC_F, KC_J}},
    // 388. 일반 약어 | 들어 (초성 ㄷ / 중성 ㅡ+ㅓ / 종성 ㄹ)
    {{KC_E, KC_G, KC_I, KC_R}, {KC_E, KC_M, KC_F, KC_D, KC_J}},
    // 393. 일반 약어 | 등록 (초성 ㄷ+ㄹ / 중성 ㅡ / 종성 ㅇ)
    {{KC_A, KC_G, KC_I, KC_M}, {KC_E, KC_M, KC_D, KC_F, KC_H, KC_R}},
    // 394. 일반 약어 | 등장 (초성 ㄷ+ㅈ / 중성 ㅡ / 종성 ㅇ)
    {{KC_A, KC_G, KC_I, KC_L}, {KC_E, KC_M, KC_D, KC_W, KC_K, KC_D}},
    // 395. 일반 약어 | 따뜻 (초성 ㄸ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_I, KC_J}, {SFT(KC_E), KC_K, SFT(KC_E), KC_M, KC_T}},
    // 404. 일반 약어 | 또한_ (초성 ㅇ+ㅎ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_H, KC_J, KC_S}, {SFT(KC_E), KC_H, KC_G, KC_K, KC_S, KC_SPC}},
    // 405. 일반 약어 | 뜨거운_ (초성 ㄷ+ㄱ / 중성 ㅡ+ㅓ / 종성 )
    {{KC_G, KC_I, KC_K, KC_R}, {SFT(KC_E), KC_M, KC_R, KC_J, KC_D, KC_N, KC_S, KC_SPC}},
    // 407. 일반 약어 | 라고 (초성 ㄹ+ㄱ / 중성 ㅏ+ㅗ / 종성 )
    {{KC_F, KC_K, KC_M, KC_V}, {KC_F, KC_K, KC_R, KC_H}},
    // 409. 일반 약어 | 라도_ (초성 ㄹ+ㄷ / 중성 ㅏ+ㅗ / 종성 )
    {{KC_F, KC_I, KC_M, KC_V}, {KC_F, KC_K, KC_E, KC_H, KC_SPC}},
    // 410. 일반 약어 | 라디오 (초성 ㄹ+ㅇ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_D, KC_J, KC_M, KC_V}, {KC_F, KC_K, KC_E, KC_L, KC_D, KC_H}},
    // 411. 일반 약어 | 라면 (초성 ㄹ+ㅁ / 중성 ㅕ / 종성 ㄴ)
    {{KC_M, KC_S, KC_T, KC_Y}, {KC_F, KC_K, KC_A, KC_U, KC_S}},
    // 412. 일반 약어 | 러시아 (초성 ㄹ+ㅇ / 중성 ㅓ+ㅏ / 종성 )
    {{KC_F, KC_J, KC_M, KC_R}, {KC_F, KC_J, KC_T, KC_L, KC_D, KC_K}},
    // 419. 일반 약어 | 로운_ (초성 ㄹ+ㅇ / 중성 ㅜ / 종성 ㄴ)
    {{KC_B, KC_J, KC_M, KC_S}, {KC_F, KC_H, KC_D, KC_N, KC_S, KC_SPC}},
    // 420. 일반 약어 | 롭게_ (초성 ㄹ+ㄱ / 중성 ㅗ+ㅔ / 종성 )
    {{KC_C, KC_K, KC_M, KC_V}, {KC_F, KC_H, KC_Q, KC_R, KC_P, KC_SPC}},
    // 423. 일반 약어 | 리는_ (초성 ㄹ+ㄴ / 중성 ㅣ+ㅡ / 종성 )
    {{KC_D, KC_G, KC_M, KC_U}, {KC_F, KC_L, KC_S, KC_M, KC_S, KC_SPC}},
    // 424. 일반 약어 | 리얼 (초성 ㄹ+ㅇ / 중성 ㅓ / 종성 ㄹ)
    {{KC_E, KC_J, KC_M, KC_R}, {KC_F, KC_L, KC_D, KC_J, KC_F}},
    // 425. 일반 약어 | 마늘 (초성 ㅁ+ㄴ / 중성 ㅡ / 종성 ㄹ)
    {{KC_E, KC_G, KC_U, KC_Y}, {KC_A, KC_K, KC_S, KC_M, KC_F}},
    // 426. 일반 약어 | 마련 (초성 ㅁ+ㄹ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_M, KC_S, KC_Y}, {KC_A, KC_K, KC_F, KC_U, KC_S}},
    // 427. 일반 약어 | 마루 (초성 ㅁ+ㄹ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_M, KC_Y}, {KC_A, KC_K, KC_F, KC_N}},
    // 433. 일반 약어 | 마주_ (초성 ㅁ+ㅈ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_L, KC_Y}, {KC_A, KC_K, KC_W, KC_N, KC_SPC}},
    // 434. 일반 약어 | 마지막 (초성 ㅁ+ㅈ / 중성 ㅏ / 종성 ㄱ)
    {{KC_F, KC_L, KC_X, KC_Y}, {KC_A, KC_K, KC_W, KC_L, KC_A, KC_K, KC_R}},
    // 435. 일반 약어 | 마찬가지 (초성 ㅁ+ㅈ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_L, KC_S, KC_Y}, {KC_A, KC_K, KC_C, KC_K, KC_S, KC_R, KC_K, KC_W, KC_L}},
    // 441. 일반 약어 | 만족 (초성 ㅁ+ㅈ / 중성  / 종성 ㄴ+ㄱ)
    {{KC_L, KC_S, KC_X, KC_Y}, {KC_A, KC_K, KC_S, KC_W, KC_H, KC_R}},
    // 441. 일반 약어 | 만족 (초성 ㅁ+ㅈ / 중성  / 종성 ㄴ+ㄱ)
    {{KC_A, KC_E, KC_L, KC_Y}, {KC_A, KC_K, KC_S, KC_W, KC_H, KC_R}},
    // 443. 일반 약어 | 만화 (초성 ㅁ+ㅎ / 중성 ㅘ / 종성 )
    {{KC_F, KC_H, KC_Y, KC_DOT}, {KC_A, KC_K, KC_S, KC_G, KC_H, KC_K}},
    // 443. 일반 약어 | 만화 (초성 ㅁ+ㅎ / 중성 ㅘ / 종성 )
    {{KC_F, KC_H, KC_V, KC_Y}, {KC_A, KC_K, KC_S, KC_G, KC_H, KC_K}},
    // 444. 일반 약어 | 많은_ (초성 ㅁ / 중성 ㅏ+ㅡ / 종성 ㄴ)
    {{KC_F, KC_G, KC_S, KC_Y}, {KC_A, KC_K, KC_S, KC_G, KC_D, KC_M, KC_S, KC_SPC}},
    // 448. 일반 약어 | 맞는_ (초성 ㅁ+ㄴ / 중성 ㅡ / 종성 ㄴ)
    {{KC_G, KC_S, KC_U, KC_Y}, {KC_A, KC_K, KC_W, KC_S, KC_M, KC_S, KC_SPC}},
    // 453. 일반 약어 | 머릿속 (초성 ㅁ+ㅅ / 중성 ㅣ / 종성 ㅅ)
    {{KC_D, KC_N, KC_Q, KC_Y}, {KC_A, KC_J, KC_F, KC_L, KC_T, KC_T, KC_H, KC_R}},
    // 455. 일반 약어 | 먼저 (초성 ㅁ+ㅈ / 중성 ㅓ / 종성 ㄴ)
    {{KC_L, KC_R, KC_S, KC_Y}, {KC_A, KC_J, KC_S, KC_W, KC_J}},
    // 458. 일반 약어 | 면서_ (초성 ㅁ+ㅅ / 중성 ㅕ / 종성 ㄴ)
    {{KC_N, KC_S, KC_T, KC_Y}, {KC_A, KC_U, KC_S, KC_T, KC_J, KC_SPC}},
    // 465. 일반 약어 | 목소리 (초성 ㅁ+ㅅ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_N, KC_Y}, {KC_A, KC_H, KC_R, KC_T, KC_H, KC_F, KC_L}},
    // 466. 일반 약어 | 목숨 (초성 ㅁ+ㅅ / 중성  / 종성 ㄱ+ㅁ)
    {{KC_N, KC_X, KC_Y, KC_Z}, {KC_A, KC_H, KC_R, KC_T, KC_N, KC_A}},
    // 466. 일반 약어 | 목숨 (초성 ㅁ+ㅅ / 중성  / 종성 ㄱ+ㅁ)
    {{KC_A, KC_E, KC_N, KC_Y}, {KC_A, KC_H, KC_R, KC_T, KC_N, KC_A}},
    // 467. 일반 약어 | 목적 (초성 ㅁ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_L, KC_V, KC_X, KC_Y}, {KC_A, KC_H, KC_R, KC_W, KC_J, KC_R}},
    // 467. 일반 약어 | 목적 (초성 ㅁ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_L, KC_X, KC_Y, KC_DOT}, {KC_A, KC_H, KC_R, KC_W, KC_J, KC_R}},
    // 468. 일반 약어 | 목표 (초성 ㅁ+ㅂ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_O, KC_Y}, {KC_A, KC_H, KC_R, KC_V, KC_Y}},
    // 469. 일반 약어 | 몰래_ (초성 ㅁ+ㄹ / 중성 ㅗ / 종성 ㄹ)
    {{KC_E, KC_M, KC_V, KC_Y}, {KC_A, KC_H, KC_F, KC_F, KC_O, KC_SPC}},
    // 469. 일반 약어 | 몰래_ (초성 ㅁ+ㄹ / 중성 ㅗ / 종성 ㄹ)
    {{KC_E, KC_M, KC_Y, KC_DOT}, {KC_A, KC_H, KC_F, KC_F, KC_O, KC_SPC}},
    // 470. 일반 약어 | 몹시_ (초성 ㅁ+ㅅ / 중성 ㅗ / 종성 ㅂ)
    {{KC_N, KC_V, KC_W, KC_Y}, {KC_A, KC_H, KC_Q, KC_T, KC_L, KC_SPC}},
    // 470. 일반 약어 | 몹시_ (초성 ㅁ+ㅅ / 중성 ㅗ / 종성 ㅂ)
    {{KC_N, KC_W, KC_Y, KC_DOT}, {KC_A, KC_H, KC_Q, KC_T, KC_L, KC_SPC}},
    // 472. 일반 약어 | 무려_ (초성 ㅁ+ㄹ / 중성 ㅜ+ㅕ / 종성 )
    {{KC_B, KC_M, KC_T, KC_Y}, {KC_A, KC_N, KC_F, KC_U, KC_SPC}},
    // 473. 일반 약어 | 무렵 (초성 ㅁ / 중성 ㅜ+ㅕ / 종성 ㅂ)
    {{KC_B, KC_T, KC_W, KC_Y}, {KC_A, KC_N, KC_F, KC_U, KC_Q}},
    // 476. 일반 약어 | 무사 (초성 ㅁ+ㅅ / 중성 ㅜ+ㅏ / 종성 )
    {{KC_B, KC_F, KC_N, KC_Y}, {KC_A, KC_N, KC_T, KC_K}},
    // 481. 일반 약어 | 무척_ (초성 ㅁ+ㅈ / 중성 ㅓ / 종성 ㄱ)
    {{KC_L, KC_R, KC_X, KC_Y}, {KC_A, KC_N, KC_C, KC_J, KC_R, KC_SPC}},
    // 483. 일반 약어 | 문자 (초성 ㅁ+ㅈ / 중성 ㅜ / 종성 ㄴ)
    {{KC_B, KC_L, KC_S, KC_Y}, {KC_A, KC_N, KC_S, KC_W, KC_K}},
    // 485. 일반 약어 | 문제점 (초성 ㅁ+ㅈ / 중성 ㅔ / 종성 ㅁ)
    {{KC_C, KC_L, KC_Y, KC_Z}, {KC_A, KC_N, KC_S, KC_W, KC_P, KC_W, KC_J, KC_A}},
    // 486. 일반 약어 | 문학 (초성 ㅁ+ㅎ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_H, KC_Y}, {KC_A, KC_N, KC_S, KC_G, KC_K, KC_R}},
    // 489. 일반 약어 | 물가 (초성 ㅁ / 중성 ㅜ+ㅏ / 종성 ㄹ)
    {{KC_B, KC_E, KC_F, KC_Y}, {KC_A, KC_N, KC_F, KC_R, KC_K}},
    // 492. 일반 약어 | 물리 (초성 ㅁ+ㄹ / 중성 ㅜ / 종성 ㄹ)
    {{KC_B, KC_E, KC_M, KC_Y}, {KC_A, KC_N, KC_F, KC_F, KC_L}},
    // 493. 일반 약어 | 물속 (초성 ㅁ+ㅅ / 중성 ㅗ / 종성 ㄱ)
    {{KC_N, KC_V, KC_X, KC_Y}, {KC_A, KC_N, KC_F, KC_T, KC_H, KC_R}},
    // 493. 일반 약어 | 물속 (초성 ㅁ+ㅅ / 중성 ㅗ / 종성 ㄱ)
    {{KC_N, KC_X, KC_Y, KC_DOT}, {KC_A, KC_N, KC_F, KC_T, KC_H, KC_R}},
    // 495. 일반 약어 | 물체 (초성 ㅁ+ㅎ / 중성 ㅜ+ㅔ / 종성 )
    {{KC_B, KC_C, KC_H, KC_Y}, {KC_A, KC_N, KC_F, KC_C, KC_P}},
    // 498. 일반 약어 | 미래 (초성 ㅁ+ㄹ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_M, KC_Y}, {KC_A, KC_L, KC_F, KC_O}},
    // 499. 일반 약어 | 미련 (초성 ㅁ+ㄹ / 중성 ㅣ / 종성 ㄴ)
    {{KC_D, KC_M, KC_S, KC_Y}, {KC_A, KC_L, KC_F, KC_U, KC_S}},
    // 501. 일반 약어 | 미소 (초성 ㅁ+ㅅ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_D, KC_N, KC_V, KC_Y}, {KC_A, KC_L, KC_T, KC_H}},
    // 502. 일반 약어 | 미술 (초성 ㅁ+ㅅ / 중성 ㅜ / 종성 ㄹ)
    {{KC_B, KC_E, KC_N, KC_Y}, {KC_A, KC_L, KC_T, KC_N, KC_F}},
    // 504. 일반 약어 | 민족 (초성 ㅁ+ㅈ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_Y}, {KC_A, KC_L, KC_S, KC_W, KC_H, KC_R}},
    // 505. 일반 약어 | 민주 (초성 ㅁ+ㅈ / 중성 ㅣ / 종성 ㄴ)
    {{KC_D, KC_L, KC_S, KC_Y}, {KC_A, KC_L, KC_S, KC_W, KC_N}},
    // 506. 일반 약어 | 민중 (초성 ㅁ+ㅈ / 중성 ㅜ / 종성 ㅇ)
    {{KC_A, KC_B, KC_L, KC_Y}, {KC_A, KC_L, KC_S, KC_W, KC_N, KC_D}},
    // 508. 일반 약어 | 밀리 (초성 ㅁ+ㄹ / 중성 ㅣ / 종성 ㄹ)
    {{KC_D, KC_E, KC_M, KC_Y}, {KC_A, KC_L, KC_F, KC_F, KC_L}},
    // 509. 일반 약어 | 바깥 (초성 ㅂ+ㄱ / 중성  / 종성 ㅌ)
    {{KC_K, KC_O, KC_S, KC_Z}, {KC_Q, KC_K, SFT(KC_R), KC_K, KC_X}},
    // 510. 일반 약어 | 바늘 (초성 ㅂ+ㄴ / 중성 ㅡ / 종성 ㄹ)
    {{KC_E, KC_G, KC_O, KC_U}, {KC_Q, KC_K, KC_S, KC_M, KC_F}},
    // 512. 일반 약어 | 바닥 (초성 ㅂ+ㄷ / 중성 ㅏ / 종성 ㄱ)
    {{KC_F, KC_I, KC_O, KC_X}, {KC_Q, KC_K, KC_E, KC_K, KC_R}},
    // 515. 일반 약어 | 바람직 (초성 ㅂ+ㄹ / 중성  / 종성 ㅁ+ㄱ)
    {{KC_M, KC_O, KC_X, KC_Z}, {KC_Q, KC_K, KC_F, KC_K, KC_A, KC_W, KC_L, KC_R}},
    // 515. 일반 약어 | 바람직 (초성 ㅂ+ㄹ / 중성  / 종성 ㅁ+ㄱ)
    {{KC_A, KC_E, KC_M, KC_O}, {KC_Q, KC_K, KC_F, KC_K, KC_A, KC_W, KC_L, KC_R}},
    // 520. 일반 약어 | 박물관 (초성 ㅂ+ㅁ / 중성 ㅏ / 종성 ㄱ)
    {{KC_F, KC_O, KC_X, KC_Y}, {KC_Q, KC_K, KC_R, KC_A, KC_N, KC_F, KC_R, KC_H, KC_K, KC_S}},
    // 521. 일반 약어 | 박사 (초성 ㅂ+ㅅ / 중성 ㅏ / 종성 ㄱ)
    {{KC_F, KC_N, KC_O, KC_X}, {KC_Q, KC_K, KC_R, KC_T, KC_K}},
    // 523. 일반 약어 | 반갑 (초성 ㅂ+ㄱ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_K, KC_O, KC_S}, {KC_Q, KC_K, KC_S, KC_R, KC_K, KC_Q}},
    // 525. 일반 약어 | 반도 (초성 ㅂ+ㄷ / 중성 ㅏ+ㅗ / 종성 ㄴ)
    {{KC_I, KC_O, KC_S, KC_DOT}, {KC_Q, KC_K, KC_S, KC_E, KC_H}},
    // 526. 일반 약어 | 반드시_ (초성 ㅂ+ㄷ / 중성 ㅡ / 종성 ㄴ)
    {{KC_G, KC_I, KC_O, KC_S}, {KC_Q, KC_K, KC_S, KC_E, KC_M, KC_T, KC_L, KC_SPC}},
    // 532. 일반 약어 | 발견 (초성 ㅂ+ㄱ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_K, KC_O}, {KC_Q, KC_K, KC_F, KC_R, KC_U, KC_S}},
    // 534. 일반 약어 | 발생 (초성 ㅂ+ㅅ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_N, KC_O}, {KC_Q, KC_K, KC_F, KC_T, KC_O, KC_D}},
    // 538. 일반 약어 | 방문 (초성 ㅂ+ㅁ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_O, KC_Y}, {KC_Q, KC_K, KC_D, KC_A, KC_N, KC_S}},
    // 540. 일반 약어 | 방송 (초성 ㅂ+ㅅ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_N, KC_O}, {KC_Q, KC_K, KC_D, KC_T, KC_H, KC_D}},
    // 541. 일반 약어 | 방송국 (초성 ㅂ+ㅅ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_N, KC_O, KC_X}, {KC_Q, KC_K, KC_D, KC_T, KC_H, KC_D, KC_R, KC_N, KC_R}},
    // 541. 일반 약어 | 방송국 (초성 ㅂ+ㅅ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_E, KC_N, KC_O}, {KC_Q, KC_K, KC_D, KC_T, KC_H, KC_D, KC_R, KC_N, KC_R}},
    // 543. 일반 약어 | 방안 (초성 ㅂ+ㅇ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_J, KC_O, KC_S}, {KC_Q, KC_K, KC_D, KC_D, KC_K, KC_S}},
    // 545. 일반 약어 | 배경 (초성 ㅂ+ㄱ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_K, KC_O}, {KC_Q, KC_O, KC_R, KC_U, KC_D}},
    // 546. 일반 약어 | 배우 (초성 ㅂ+ㅇ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_J, KC_O}, {KC_Q, KC_O, KC_D, KC_N}},
    // 549. 일반 약어 | 백화점 (초성 ㅂ+ㅈ / 중성 ㅓ / 종성 ㅁ)
    {{KC_L, KC_O, KC_R, KC_Z}, {KC_Q, KC_O, KC_R, KC_G, KC_H, KC_K, KC_W, KC_J, KC_A}},
    // 550. 일반 약어 | 버릇 (초성 ㅂ+ㄹ / 중성 ㅡ / 종성 ㅅ)
    {{KC_G, KC_M, KC_O, KC_Q}, {KC_Q, KC_J, KC_F, KC_M, KC_T}},
    // 551. 일반 약어 | 버스 (초성 ㅂ+ㅅ / 중성 ㅡ+ㅓ / 종성 )
    {{KC_G, KC_N, KC_O, KC_R}, {KC_Q, KC_J, KC_T, KC_M}},
    // 552. 일반 약어 | 번째 (초성 ㅂ+ㅈ / 중성 ㅓ / 종성 ㄴ)
    {{KC_L, KC_O, KC_R, KC_S}, {KC_Q, KC_J, KC_S, SFT(KC_W), KC_O}},
    // 553. 일반 약어 | 벌써_ (초성 ㅂ+ㅅ / 중성 ㅓ / 종성 ㄹ)
    {{KC_E, KC_N, KC_O, KC_R}, {KC_Q, KC_J, KC_F, SFT(KC_T), KC_J, KC_SPC}},
    // 555. 일반 약어 | 범죄 (초성 ㅂ+ㅈ / 중성 ㅚ / 종성 )
    {{KC_D, KC_L, KC_O, KC_DOT}, {KC_Q, KC_J, KC_A, KC_W, KC_H, KC_L}},
    // 555. 일반 약어 | 범죄 (초성 ㅂ+ㅈ / 중성 ㅚ / 종성 )
    {{KC_D, KC_L, KC_O, KC_V}, {KC_Q, KC_J, KC_A, KC_W, KC_H, KC_L}},
    // 556. 일반 약어 | 법률 (초성 ㅂ+ㄹ / 중성 ㅓ / 종성 ㅂ)
    {{KC_M, KC_O, KC_R, KC_W}, {KC_Q, KC_J, KC_Q, KC_F, KC_B, KC_F}},
    // 557. 일반 약어 | 법원 (초성 ㅂ+ㅇ / 중성  / 종성 ㅂ+ㄴ)
    {{KC_J, KC_O, KC_S, KC_W}, {KC_Q, KC_J, KC_Q, KC_D, KC_N, KC_J, KC_S}},
    // 560. 일반 약어 | 별로_ (초성 ㅂ+ㄹ / 중성 ㅕ / 종성 ㄹ)
    {{KC_E, KC_M, KC_O, KC_T}, {KC_Q, KC_U, KC_F, KC_F, KC_H, KC_SPC}},
    // 564. 일반 약어 | 보내 (초성 ㅂ+ㄴ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_O, KC_U}, {KC_Q, KC_H, KC_S, KC_O}},
    // 568. 일반 약어 | 보장 (초성 ㅂ+ㅈ / 중성 ㅗ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_L, KC_O, KC_DOT}, {KC_Q, KC_H, KC_W, KC_K, KC_D}},
    // 569. 일반 약어 | 보통 (초성 ㅂ+ㄷ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_I, KC_O, KC_V}, {KC_Q, KC_H, KC_X, KC_H, KC_D}},
    // 569. 일반 약어 | 보통 (초성 ㅂ+ㄷ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_I, KC_O, KC_DOT}, {KC_Q, KC_H, KC_X, KC_H, KC_D}},
    // 570. 일반 약어 | 복잡 (초성 ㅂ+ㅈ / 중성 ㅏ / 종성 ㅂ)
    {{KC_F, KC_L, KC_O, KC_W}, {KC_Q, KC_H, KC_R, KC_W, KC_K, KC_Q}},
    // 571. 일반 약어 | 본격적 (초성 ㅂ+ㄱ / 중성 ㅗ / 종성 ㄱ)
    {{KC_K, KC_O, KC_V, KC_X}, {KC_Q, KC_H, KC_S, KC_R, KC_U, KC_R, KC_W, KC_J, KC_R}},
    // 571. 일반 약어 | 본격적 (초성 ㅂ+ㄱ / 중성 ㅗ / 종성 ㄱ)
    {{KC_K, KC_O, KC_X, KC_DOT}, {KC_Q, KC_H, KC_S, KC_R, KC_U, KC_R, KC_W, KC_J, KC_R}},
    // 572. 일반 약어 | 본래 (초성 ㅂ+ㄹ / 중성 ㅗ / 종성 ㄴ)
    {{KC_M, KC_O, KC_S, KC_V}, {KC_Q, KC_H, KC_S, KC_F, KC_O}},
    // 572. 일반 약어 | 본래 (초성 ㅂ+ㄹ / 중성 ㅗ / 종성 ㄴ)
    {{KC_M, KC_O, KC_S, KC_DOT}, {KC_Q, KC_H, KC_S, KC_F, KC_O}},
    // 573. 일반 약어 | 본질 (초성 ㅂ+ㅈ / 중성 ㅣ / 종성 ㄹ)
    {{KC_D, KC_E, KC_L, KC_O}, {KC_Q, KC_H, KC_S, KC_W, KC_L, KC_F}},
    // 574. 일반 약어 | 부끄 (초성 ㅂ+ㄱ / 중성 ㅜ+ㅡ / 종성 )
    {{KC_B, KC_G, KC_K, KC_O}, {KC_Q, KC_N, SFT(KC_R), KC_M}},
    // 575. 일반 약어 | 부담 (초성 ㅂ+ㄷ / 중성 ㅜ+ㅏ / 종성 )
    {{KC_B, KC_F, KC_I, KC_O}, {KC_Q, KC_N, KC_E, KC_K, KC_A}},
    // 576. 일반 약어 | 부대 (초성 ㅂ+ㄷ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_I, KC_O}, {KC_Q, KC_N, KC_E, KC_O}},
    // 577. 일반 약어 | 부도 (초성 ㅂ+ㄷ / 중성 ㅜ+ㅗ / 종성 )
    {{KC_B, KC_I, KC_O, KC_V}, {KC_Q, KC_N, KC_E, KC_H}},
    // 580. 일반 약어 | 부딪 (초성 ㅂ+ㄷ / 중성  / 종성 ㅈ)
    {{KC_E, KC_I, KC_O, KC_SCLN}, {KC_Q, KC_N, KC_E, KC_L, KC_W}},
    // 583. 일반 약어 | 부문 (초성 ㅂ+ㅁ / 중성 ㅜ / 종성 ㄴ)
    {{KC_B, KC_O, KC_S, KC_Y}, {KC_Q, KC_N, KC_A, KC_N, KC_S}},
    // 588. 일반 약어 | 부자 (초성 ㅂ+ㅈ / 중성 ㅜ+ㅏ / 종성 )
    {{KC_B, KC_F, KC_L, KC_O}, {KC_Q, KC_N, KC_W, KC_K}},
    // 590. 일반 약어 | 부정 (초성 ㅂ+ㅈ / 중성 ㅜ+ㅓ / 종성 )
    {{KC_B, KC_L, KC_O, KC_R}, {KC_Q, KC_N, KC_W, KC_J, KC_D}},
    // 591. 일반 약어 | 부족 (초성 ㅂ+ㅈ / 중성 ㅜ / 종성 ㄱ)
    {{KC_B, KC_L, KC_O, KC_X}, {KC_Q, KC_N, KC_W, KC_H, KC_R}},
    // 595. 일반 약어 | 북쪽 (초성 ㅂ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_L, KC_O, KC_V, KC_X}, {KC_Q, KC_N, KC_R, SFT(KC_W), KC_H, KC_R}},
    // 595. 일반 약어 | 북쪽 (초성 ㅂ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_L, KC_O, KC_X, KC_DOT}, {KC_Q, KC_N, KC_R, SFT(KC_W), KC_H, KC_R}},
    // 598. 일반 약어 | 분명히_ (초성 ㅂ+ㅁ / 중성 ㅣ / 종성 ㅇ)
    {{KC_A, KC_D, KC_O, KC_Y}, {KC_Q, KC_N, KC_S, KC_A, KC_U, KC_D, KC_G, KC_L, KC_SPC}},
    // 599. 일반 약어 | 분석 (초성 ㅂ+ㅅ / 중성 ㅜ / 종성 ㄴ)
    {{KC_B, KC_N, KC_O, KC_S}, {KC_Q, KC_N, KC_S, KC_T, KC_J, KC_R}},
    // 601. 일반 약어 | 불과 (초성 ㅂ+ㄱ / 중성 ㅘ / 종성 )
    {{KC_F, KC_K, KC_O, KC_DOT}, {KC_Q, KC_N, KC_F, KC_R, KC_H, KC_K}},
    // 601. 일반 약어 | 불과 (초성 ㅂ+ㄱ / 중성 ㅘ / 종성 )
    {{KC_F, KC_K, KC_O, KC_V}, {KC_Q, KC_N, KC_F, KC_R, KC_H, KC_K}},
    // 602. 일반 약어 | 불교 (초성 ㅂ+ㄱ / 중성 ㅜ / 종성 ㄹ)
    {{KC_B, KC_E, KC_K, KC_O}, {KC_Q, KC_N, KC_F, KC_R, KC_Y}},
    // 604. 일반 약어 | 불만 (초성 ㅂ+ㅁ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_O, KC_Y}, {KC_Q, KC_N, KC_F, KC_A, KC_K, KC_S}},
    // 607. 일반 약어 | 불편 (초성 ㅍ / 중성  / 종성 ㄹ+ㄴ)
    {{KC_E, KC_H, KC_O, KC_S}, {KC_Q, KC_N, KC_F, KC_V, KC_U, KC_S}},
    // 608. 일반 약어 | 비교 (초성 ㅂ+ㄱ / 중성 ㅛ / 종성 )
    {{KC_K, KC_O, KC_V, KC_DOT}, {KC_Q, KC_L, KC_R, KC_Y}},
    // 608. 일반 약어 | 비교 (초성 ㅂ+ㄱ / 중성 ㅛ / 종성 )
    {{KC_F, KC_K, KC_O, KC_R}, {KC_Q, KC_L, KC_R, KC_Y}},
    // 611. 일반 약어 | 비난 (초성 ㅂ+ㄴ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_O, KC_S, KC_U}, {KC_Q, KC_L, KC_S, KC_K, KC_S}},
    // 613. 일반 약어 | 비디오 (초성 ㅂ+ㄷ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_D, KC_I, KC_O, KC_V}, {KC_Q, KC_L, KC_E, KC_L, KC_D, KC_H}},
    // 614. 일반 약어 | 비로소_ (초성 ㅂ+ㅅ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_D, KC_N, KC_O, KC_V}, {KC_Q, KC_L, KC_F, KC_H, KC_T, KC_H, KC_SPC}},
    // 615. 일반 약어 | 비록_ (초성 ㅂ+ㄹ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_M, KC_O}, {KC_Q, KC_L, KC_F, KC_H, KC_R, KC_SPC}},
    // 619. 일반 약어 | 비행기 (초성 ㅂ+ㄱ / 중성 ㅣ / 종성 ㅇ)
    {{KC_A, KC_D, KC_K, KC_O}, {KC_Q, KC_L, KC_G, KC_O, KC_D, KC_R, KC_L}},
    // 623. 일반 약어 | 사건 (초성 ㄱ+ㅅ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_K, KC_N, KC_S}, {KC_T, KC_K, KC_R, KC_J, KC_S}},
    // 625. 일반 약어 | 사과 (초성 ㅅ+ㄱ / 중성 ㅘ / 종성 )
    {{KC_F, KC_K, KC_N, KC_DOT}, {KC_T, KC_K, KC_R, KC_H, KC_K}},
    // 625. 일반 약어 | 사과 (초성 ㅅ+ㄱ / 중성 ㅘ / 종성 )
    {{KC_F, KC_K, KC_N, KC_V}, {KC_T, KC_K, KC_R, KC_H, KC_K}},
    // 631. 일반 약어 | 사례 (초성 ㅅ+ㄹ / 중성 ㅖ / 종성 )
    {{KC_C, KC_M, KC_N, KC_DOT}, {KC_T, KC_K, KC_F, SFT(KC_P)}},
    // 631. 일반 약어 | 사례 (초성 ㅅ+ㄹ / 중성 ㅖ / 종성 )
    {{KC_C, KC_M, KC_N, KC_V}, {KC_T, KC_K, KC_F, SFT(KC_P)}},
    // 633. 일반 약어 | 사물 (초성 ㅅ+ㅁ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_N, KC_Y}, {KC_T, KC_K, KC_A, KC_N, KC_F}},
    // 636. 일반 약어 | 사장 (초성 ㅅ+ㅈ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_L, KC_N}, {KC_T, KC_K, KC_W, KC_K, KC_D}},
    // 639. 일반 약어 | 사진 (초성 ㅅ+ㅈ / 중성 ㅣ / 종성 ㄴ)
    {{KC_D, KC_L, KC_N, KC_S}, {KC_T, KC_K, KC_W, KC_L, KC_S}},
    // 641. 일반 약어 | 사회적 (초성 ㅅ+ㅎ / 중성 ㅏ / 종성 ㄱ)
    {{KC_F, KC_H, KC_N, KC_X}, {KC_T, KC_K, KC_G, KC_H, KC_L, KC_W, KC_J, KC_R}},
    // 642. 일반 약어 | 산업 (초성 ㅅ+ㅇ / 중성  / 종성 ㄴ+ㅂ)
    {{KC_J, KC_N, KC_S, KC_W}, {KC_T, KC_K, KC_S, KC_D, KC_J, KC_Q}},
    // 643. 일반 약어 | 살짝_ (초성 ㅅ+ㅈ / 중성  / 종성 ㄹ+ㄱ)
    {{KC_E, KC_L, KC_N, KC_X}, {KC_T, KC_K, KC_F, SFT(KC_W), KC_K, KC_R, KC_SPC}},
    // 643. 일반 약어 | 살짝_ (초성 ㅅ+ㅈ / 중성  / 종성 ㄹ+ㄱ)
    {{KC_A, KC_E, KC_L, KC_N}, {KC_T, KC_K, KC_F, SFT(KC_W), KC_K, KC_R, KC_SPC}},
    // 645. 일반 약어 | 삼국 (초성 ㅅ+ㄱ / 중성  / 종성 ㅁ+ㄱ)
    {{KC_K, KC_N, KC_X, KC_Z}, {KC_T, KC_K, KC_A, KC_R, KC_N, KC_R}},
    // 645. 일반 약어 | 삼국 (초성 ㅅ+ㄱ / 중성  / 종성 ㅁ+ㄱ)
    {{KC_A, KC_E, KC_K, KC_N}, {KC_T, KC_K, KC_A, KC_R, KC_N, KC_R}},
    // 646. 일반 약어 | 상관 (초성 ㅅ+ㄱ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_K, KC_N}, {KC_T, KC_K, KC_D, KC_R, KC_H, KC_K, KC_S}},
    // 647. 일반 약어 | 상당히_ (초성 ㅅ+ㅎ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_H, KC_N}, {KC_T, KC_K, KC_D, KC_E, KC_K, KC_D, KC_G, KC_L, KC_SPC}},
    // 651. 일반 약어 | 상태 (초성 ㅅ+ㅎ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_H, KC_N}, {KC_T, KC_K, KC_D, KC_X, KC_O}},
    // 654. 일반 약어 | 새끼 (초성 ㅅ+ㄱ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_K, KC_N}, {KC_T, KC_O, SFT(KC_R), KC_L}},
    // 655. 일반 약어 | 새로_ (초성 ㅅ+ㄹ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_M, KC_N}, {KC_T, KC_O, KC_F, KC_H, KC_SPC}},
    // 657. 일반 약어 | 새벽 (초성 ㅅ+ㅂ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_N, KC_O}, {KC_T, KC_O, KC_Q, KC_U, KC_R}},
    // 658. 일반 약어 | 색깔 (초성 ㅅ+ㄱ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_K, KC_N}, {KC_T, KC_O, KC_R, SFT(KC_R), KC_K, KC_F}},
    // 659. 일반 약어 | 생각 (초성 ㅅ+ㄱ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_N}, {KC_T, KC_O, KC_D, KC_R, KC_K, KC_R}},
    // 664. 일반 약어 | 서구 (초성 ㅅ+ㄱ / 중성 ㅓ+ㅜ / 종성 )
    {{KC_B, KC_K, KC_N, KC_R}, {KC_T, KC_J, KC_R, KC_N}},
    // 666. 일반 약어 | 서로_ (초성 ㅅ+ㄹ / 중성 ㅓ+ㅗ / 종성 )
    {{KC_M, KC_N, KC_R, KC_V}, {KC_T, KC_J, KC_F, KC_H, KC_SPC}},
    // 667. 일반 약어 | 서비스 (초성 ㅂ+ㅅ / 중성 ㅣ+ㅡ / 종성 )
    {{KC_D, KC_G, KC_N, KC_O}, {KC_T, KC_J, KC_Q, KC_L, KC_T, KC_M}},
    // 670. 일반 약어 | 서쪽 (초성 ㅅ+ㅈ / 중성 ㅓ+ㅗ / 종성 ㄱ)
    {{KC_L, KC_N, KC_X, KC_DOT}, {KC_T, KC_J, SFT(KC_W), KC_H, KC_R}},
    // 671. 일반 약어 | 선거 (초성 ㅅ+ㄱ / 중성 ㅓ / 종성 ㄴ)
    {{KC_K, KC_N, KC_R, KC_S}, {KC_T, KC_J, KC_S, KC_R, KC_J}},
    // 672. 일반 약어 | 선물 (초성 ㅅ+ㅁ / 중성  / 종성 ㄴ+ㄹ)
    {{KC_E, KC_N, KC_S, KC_Y}, {KC_T, KC_J, KC_S, KC_A, KC_N, KC_F}},
    // 673. 일반 약어 | 선배 (초성 ㅅ+ㅂ / 중성 ㅓ / 종성 ㄴ)
    {{KC_N, KC_O, KC_R, KC_S}, {KC_T, KC_J, KC_S, KC_Q, KC_O}},
    // 677. 일반 약어 | 선진국 (초성 ㅅ+ㅈ / 중성 ㅜ+ㅓ / 종성 )
    {{KC_B, KC_L, KC_N, KC_R}, {KC_T, KC_J, KC_S, KC_W, KC_L, KC_S, KC_R, KC_N, KC_R}},
    // 678. 일반 약어 | 선택 (초성 ㅅ+ㄷ / 중성 ㅓ / 종성 ㄴ)
    {{KC_I, KC_N, KC_R, KC_S}, {KC_T, KC_J, KC_S, KC_X, KC_O, KC_R}},
    // 679. 일반 약어 | 설명 (초성 ㅅ+ㅁ / 중성 ㅓ / 종성 ㄹ)
    {{KC_E, KC_N, KC_R, KC_Y}, {KC_T, KC_J, KC_F, KC_A, KC_U, KC_D}},
    // 680. 일반 약어 | 설탕 (초성 ㅅ+ㄷ / 중성 ㅓ / 종성 ㄹ)
    {{KC_E, KC_I, KC_N, KC_R}, {KC_T, KC_J, KC_F, KC_X, KC_K, KC_D}},
    // 682. 일반 약어 | 성경 (초성 ㅅ+ㄱ / 중성 ㅓ / 종성 ㅇ)
    {{KC_A, KC_K, KC_N, KC_R}, {KC_T, KC_J, KC_D, KC_R, KC_U, KC_D}},
    // 683. 일반 약어 | 성공 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_K, KC_N, KC_V}, {KC_T, KC_J, KC_D, KC_R, KC_H, KC_D}},
    // 683. 일반 약어 | 성공 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_K, KC_N, KC_DOT}, {KC_T, KC_J, KC_D, KC_R, KC_H, KC_D}},
    // 684. 일반 약어 | 성령 (초성 ㅅ+ㄹ / 중성 ㅓ / 종성 ㅇ)
    {{KC_A, KC_M, KC_N, KC_R}, {KC_T, KC_J, KC_D, KC_F, KC_U, KC_D}},
    // 685. 일반 약어 | 성장 (초성 ㅅ+ㅈ / 중성 ㅓ / 종성 ㅇ)
    {{KC_A, KC_L, KC_N, KC_R}, {KC_T, KC_J, KC_D, KC_W, KC_K, KC_D}},
    // 686. 일반 약어 | 성적 (초성 ㅅ+ㅈ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_L, KC_N, KC_X}, {KC_T, KC_J, KC_D, KC_W, KC_J, KC_R}},
    // 686. 일반 약어 | 성적 (초성 ㅅ+ㅈ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_E, KC_L, KC_N}, {KC_T, KC_J, KC_D, KC_W, KC_J, KC_R}},
    // 689. 일반 약어 | 세계적 (초성 ㅅ+ㄱ / 중성 ㅔ / 종성 ㄱ)
    {{KC_C, KC_K, KC_N, KC_X}, {KC_T, KC_P, KC_R, SFT(KC_P), KC_W, KC_J, KC_R}},
    // 690. 일반 약어 | 세금 (초성 ㅅ+ㄱ / 중성 ㅔ / 종성 ㅁ)
    {{KC_C, KC_K, KC_N, KC_Z}, {KC_T, KC_P, KC_R, KC_M, KC_A}},
    // 691. 일반 약어 | 세기 (초성 ㅅ+ㄱ / 중성 ㅔ+ㅣ / 종성 )
    {{KC_C, KC_D, KC_K, KC_N}, {KC_T, KC_P, KC_R, KC_L}},
    // 693. 일반 약어 | 세력 (초성 ㅅ+ㄹ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_M, KC_N}, {KC_T, KC_P, KC_F, KC_U, KC_R}},
    // 697. 일반 약어 | 센티 (초성 ㅅ+ㅎ / 중성 ㅔ / 종성 ㄴ)
    {{KC_C, KC_H, KC_N, KC_S}, {KC_T, KC_P, KC_S, KC_X, KC_L}},
    // 699. 일반 약어 | 소금 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 ㅁ)
    {{KC_K, KC_N, KC_V, KC_Z}, {KC_T, KC_H, KC_R, KC_M, KC_A}},
    // 699. 일반 약어 | 소금 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 ㅁ)
    {{KC_K, KC_N, KC_Z, KC_DOT}, {KC_T, KC_H, KC_R, KC_M, KC_A}},
    // 701. 일반 약어 | 소년 (초성 ㅅ+ㄴ / 중성 ㅕ / 종성 ㄴ)
    {{KC_N, KC_S, KC_T, KC_U}, {KC_T, KC_H, KC_S, KC_U, KC_S}},
    // 702. 일반 약어 | 소득 (초성 ㅅ+ㄷ / 중성 ㅡ / 종성 ㄱ)
    {{KC_G, KC_I, KC_N, KC_X}, {KC_T, KC_H, KC_E, KC_M, KC_R}},
    // 703. 일반 약어 | 소련 (초성 ㅅ+ㄹ / 중성 ㅕ / 종성 ㄴ)
    {{KC_M, KC_N, KC_S, KC_T}, {KC_T, KC_H, KC_F, KC_U, KC_S}},
    // 707. 일반 약어 | 소비자 (초성 ㅅ+ㅂ / 중성 ㅗ+ㅏ / 종성 )
    {{KC_F, KC_N, KC_O, KC_V}, {KC_T, KC_H, KC_Q, KC_L, KC_W, KC_K}},
    // 710. 일반 약어 | 소주 (초성 ㅅ+ㅈ / 중성 ㅗ+ㅜ / 종성 )
    {{KC_B, KC_L, KC_N, KC_V}, {KC_T, KC_H, KC_W, KC_N}},
    // 711. 일반 약어 | 소중 (초성 ㅅ+ㅈ / 중성 ㅜ / 종성 ㅇ)
    {{KC_A, KC_B, KC_L, KC_N}, {KC_T, KC_H, KC_W, KC_N, KC_D}},
    // 712. 일반 약어 | 소프트웨어 (초성 ㅅ+ㅂ / 중성 ㅔ+ㅓ / 종성 )
    {{KC_C, KC_N, KC_O, KC_R}, {KC_T, KC_H, KC_V, KC_M, KC_X, KC_M, KC_D, KC_N, KC_P, KC_D, KC_J}},
    // 713. 일반 약어 | 속도 (초성 ㅅ+ㄷ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_I, KC_N}, {KC_T, KC_H, KC_R, KC_E, KC_H}},
    // 714. 일반 약어 | 손가락 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 ㄴ)
    {{KC_K, KC_N, KC_S, KC_V}, {KC_T, KC_H, KC_S, KC_R, KC_K, KC_F, KC_K, KC_R}},
    // 714. 일반 약어 | 손가락 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 ㄴ)
    {{KC_K, KC_N, KC_S, KC_DOT}, {KC_T, KC_H, KC_S, KC_R, KC_K, KC_F, KC_K, KC_R}},
    // 715. 일반 약어 | 손님 (초성 ㅅ+ㄴ / 중성 ㅗ / 종성 ㄴ)
    {{KC_N, KC_S, KC_U, KC_V}, {KC_T, KC_H, KC_S, KC_S, KC_L, KC_A}},
    // 715. 일반 약어 | 손님 (초성 ㅅ+ㄴ / 중성 ㅗ / 종성 ㄴ)
    {{KC_N, KC_S, KC_U, KC_DOT}, {KC_T, KC_H, KC_S, KC_S, KC_L, KC_A}},
    // 717. 일반 약어 | 수고 (초성 ㅅ+ㄱ / 중성 ㅜ+ㅗ / 종성 )
    {{KC_B, KC_K, KC_N, KC_V}, {KC_T, KC_N, KC_R, KC_H}},
    // 718. 일반 약어 | 수단 (초성 ㅅ+ㄷ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_I, KC_N, KC_S}, {KC_T, KC_N, KC_E, KC_K, KC_S}},
    // 721. 일반 약어 | 수리 (초성 ㅅ+ㄹ / 중성 ㅜ+ㅣ / 종성 )
    {{KC_B, KC_D, KC_M, KC_N}, {KC_T, KC_N, KC_F, KC_L}},
    // 723. 일반 약어 | 수상 (초성 ㅅ / 중성 ㅜ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_B, KC_F, KC_N}, {KC_T, KC_N, KC_T, KC_K, KC_D}},
    // 724. 일반 약어 | 수요 (초성 ㅅ+ㅇ / 중성 ㅜ+ㅏ / 종성 )
    {{KC_B, KC_F, KC_J, KC_N}, {KC_T, KC_N, KC_D, KC_Y}},
    // 726. 일반 약어 | 수출 (초성 ㅅ+ㅈ / 중성 ㅜ / 종성 ㄹ)
    {{KC_B, KC_E, KC_L, KC_N}, {KC_T, KC_N, KC_C, KC_N, KC_F}},
    // 728. 일반 약어 | 수혜 (초성 ㅅ+ㅎ / 중성 ㅖ / 종성 )
    {{KC_C, KC_H, KC_N, KC_DOT}, {KC_T, KC_N, KC_G, SFT(KC_P)}},
    // 728. 일반 약어 | 수혜 (초성 ㅅ+ㅎ / 중성 ㅖ / 종성 )
    {{KC_C, KC_H, KC_N, KC_V}, {KC_T, KC_N, KC_G, SFT(KC_P)}},
    // 730. 일반 약어 | 순간 (초성 ㅅ+ㄱ / 중성 ㅜ / 종성 ㄴ)
    {{KC_B, KC_K, KC_N, KC_S}, {KC_T, KC_N, KC_S, KC_R, KC_K, KC_S}},
    // 731. 일반 약어 | 숫자 (초성 ㅅ+ㅈ / 중성 ㅜ+ㅏ / 종성 )
    {{KC_B, KC_F, KC_L, KC_N}, {KC_T, KC_N, KC_T, KC_W, KC_K}},
    // 733. 일반 약어 | 스러 (초성 ㅅ+ㄹ / 중성 ㅡ+ㅓ / 종성 )
    {{KC_G, KC_M, KC_N, KC_R}, {KC_T, KC_M, KC_F, KC_J}},
    // 737. 일반 약어 | 스타 (초성 ㅅ+ㄷ / 중성 ㅡ+ㅏ / 종성 )
    {{KC_F, KC_G, KC_I, KC_N}, {KC_T, KC_M, KC_X, KC_K}},
    // 741. 일반 약어 | 습관 (초성 ㅅ+ㄱ / 중성 ㅡ / 종성 ㅂ)
    {{KC_G, KC_K, KC_N, KC_W}, {KC_T, KC_M, KC_Q, KC_R, KC_H, KC_K, KC_S}},
    // 743. 일반 약어 | 승리 (초성 ㅅ+ㄹ / 중성 ㅡ / 종성 ㅇ)
    {{KC_A, KC_G, KC_M, KC_N}, {KC_T, KC_M, KC_D, KC_F, KC_L}},
    // 746. 일반 약어 | 시계 (초성 ㅅ+ㄱ / 중성 ㅖ / 종성 )
    {{KC_C, KC_K, KC_N, KC_DOT}, {KC_T, KC_L, KC_R, SFT(KC_P)}},
    // 746. 일반 약어 | 시계 (초성 ㅅ+ㄱ / 중성 ㅖ / 종성 )
    {{KC_C, KC_K, KC_N, KC_V}, {KC_T, KC_L, KC_R, SFT(KC_P)}},
    // 747. 일반 약어 | 시골 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 ㄹ)
    {{KC_E, KC_K, KC_N, KC_V}, {KC_T, KC_L, KC_R, KC_H, KC_F}},
    // 747. 일반 약어 | 시골 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 ㄹ)
    {{KC_E, KC_K, KC_N, KC_DOT}, {KC_T, KC_L, KC_R, KC_H, KC_F}},
    // 750. 일반 약어 | 시는_ (초성 ㅅ+ㄴ / 중성 ㅣ+ㅡ / 종성 )
    {{KC_D, KC_G, KC_N, KC_U}, {KC_T, KC_L, KC_S, KC_M, KC_S, KC_SPC}},
    // 753. 일반 약어 | 시도 (초성 ㅅ+ㄷ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_D, KC_I, KC_N, KC_V}, {KC_T, KC_L, KC_E, KC_H}},
    // 754. 일반 약어 | 시리즈 (초성 ㅅ+ㅈ / 중성 ㅣ+ㅡ / 종성 )
    {{KC_D, KC_G, KC_L, KC_N}, {KC_T, KC_L, KC_F, KC_L, KC_W, KC_M}},
    // 756. 일반 약어 | 시스템 (초성 ㅅ+ㄷ / 중성 ㅔ / 종성 ㅁ)
    {{KC_C, KC_I, KC_N, KC_Z}, {KC_T, KC_L, KC_T, KC_M, KC_X, KC_P, KC_A}},
    // 757. 일반 약어 | 시작 (초성 ㅅ+ㅈ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_N}, {KC_T, KC_L, KC_W, KC_K, KC_R}},
    // 760. 일반 약어 | 시점 (초성 ㅅ+ㅈ / 중성 ㅓ / 종성 ㅁ)
    {{KC_L, KC_N, KC_R, KC_Z}, {KC_T, KC_L, KC_W, KC_J, KC_A}},
    // 761. 일반 약어 | 시청 (초성 ㅅ+ㅎ / 중성 ㅓ / 종성 ㅇ)
    {{KC_A, KC_H, KC_N, KC_R}, {KC_T, KC_L, KC_C, KC_J, KC_D}},
    // 763. 일반 약어 | 식구 (초성 ㅅ+ㄱ / 중성 ㅣ / 종성 ㄱ)
    {{KC_D, KC_K, KC_N, KC_X}, {KC_T, KC_L, KC_R, KC_R, KC_N}},
    // 764. 일반 약어 | 식당 (초성 ㅅ+ㄷ / 중성 ㅣ / 종성 ㄱ)
    {{KC_D, KC_I, KC_N, KC_X}, {KC_T, KC_L, KC_R, KC_E, KC_K, KC_D}},
    // 765. 일반 약어 | 식량 (초성 ㅅ+ㄹ / 중성 ㅣ / 종성 ㄱ)
    {{KC_D, KC_M, KC_N, KC_X}, {KC_T, KC_L, KC_R, KC_F, KC_I, KC_D}},
    // 766. 일반 약어 | 식물 (초성 ㅅ+ㅁ / 중성 ㅣ / 종성 ㄱ)
    {{KC_D, KC_N, KC_X, KC_Y}, {KC_T, KC_L, KC_R, KC_A, KC_N, KC_F}},
    // 768. 일반 약어 | 식품 (초성 ㅅ+ㅂ / 중성 ㅣ / 종성 ㄱ)
    {{KC_D, KC_N, KC_O, KC_X}, {KC_T, KC_L, KC_R, KC_V, KC_N, KC_A}},
    // 769. 일반 약어 | 신경 (초성 ㅅ+ㄱ / 중성 ㅣ / 종성 ㄴ)
    {{KC_D, KC_K, KC_N, KC_S}, {KC_T, KC_L, KC_S, KC_R, KC_U, KC_D}},
    // 770. 일반 약어 | 신고 (초성 ㅅ+ㄱ / 중성 ㅣ+ㅗ / 종성 ㄴ)
    {{KC_K, KC_N, KC_S, KC_DOT}, {KC_T, KC_L, KC_S, KC_R, KC_H}},
    // 772. 일반 약어 | 신문 (초성 ㅅ+ㅁ / 중성 ㅣ / 종성 ㄴ)
    {{KC_D, KC_N, KC_S, KC_Y}, {KC_T, KC_L, KC_S, KC_A, KC_N, KC_S}},
    // 773. 일반 약어 | 신발 (초성 ㅅ+ㅂ / 중성  / 종성 ㄴ+ㄹ)
    {{KC_E, KC_N, KC_O, KC_S}, {KC_T, KC_L, KC_S, KC_Q, KC_K, KC_F}},
    // 775. 일반 약어 | 신분 (초성 ㅅ+ㅂ / 중성 ㅣ / 종성 ㄴ)
    {{KC_D, KC_N, KC_O, KC_S}, {KC_T, KC_L, KC_S, KC_Q, KC_N, KC_S}},
    // 777. 일반 약어 | 신호 (초성 ㅅ+ㅎ / 중성 ㅣ+ㅗ / 종성 ㄴ)
    {{KC_H, KC_N, KC_S, KC_DOT}, {KC_T, KC_L, KC_S, KC_G, KC_H}},
    // 778. 일반 약어 | 신화 (초성 ㅅ+ㅎ / 중성 ㅘ / 종성 )
    {{KC_F, KC_H, KC_N, KC_DOT}, {KC_T, KC_L, KC_S, KC_G, KC_H, KC_K}},
    // 778. 일반 약어 | 신화 (초성 ㅅ+ㅎ / 중성 ㅘ / 종성 )
    {{KC_F, KC_H, KC_N, KC_V}, {KC_T, KC_L, KC_S, KC_G, KC_H, KC_K}},
    // 779. 일반 약어 | 실내 (초성 ㅅ+ㄴ / 중성 ㅣ / 종성 ㄹ)
    {{KC_D, KC_E, KC_N, KC_U}, {KC_T, KC_L, KC_F, KC_S, KC_O}},
    // 780. 일반 약어 | 실정 (초성 ㅅ+ㅈ / 중성 ㅣ / 종성 ㅇ)
    {{KC_A, KC_D, KC_L, KC_N}, {KC_T, KC_L, KC_F, KC_W, KC_J, KC_D}},
    // 781. 일반 약어 | 실제 (초성 ㅅ+ㅈ / 중성 ㅣ / 종성 ㄹ)
    {{KC_D, KC_E, KC_L, KC_N}, {KC_T, KC_L, KC_F, KC_W, KC_P}},
    // 782. 일반 약어 | 실천 (초성 ㅅ+ㅎ / 중성 ㅣ / 종성 ㄹ)
    {{KC_D, KC_E, KC_H, KC_N}, {KC_T, KC_L, KC_F, KC_C, KC_J, KC_S}},
    // 783. 일반 약어 | 실패 (초성 ㅅ+ㅂ / 중성 ㅣ / 종성 ㄹ)
    {{KC_D, KC_E, KC_N, KC_O}, {KC_T, KC_L, KC_F, KC_V, KC_O}},
    // 784. 일반 약어 | 실험 (초성 ㅅ+ㅎ / 중성  / 종성 ㄹ+ㅁ)
    {{KC_E, KC_H, KC_N, KC_Z}, {KC_T, KC_L, KC_F, KC_G, KC_J, KC_A}},
    // 785. 일반 약어 | 심각 (초성 ㅅ+ㄱ / 중성 ㅣ / 종성 ㅁ)
    {{KC_D, KC_K, KC_N, KC_Z}, {KC_T, KC_L, KC_A, KC_R, KC_K, KC_R}},
    // 786. 일반 약어 | 심리 (초성 ㅅ+ㄹ / 중성 ㅣ / 종성 ㅁ)
    {{KC_D, KC_M, KC_N, KC_Z}, {KC_T, KC_L, KC_A, KC_F, KC_L}},
    // 787. 일반 약어 | 심장 (초성 ㅅ+ㅈ / 중성  / 종성 ㅁ+ㅇ)
    {{KC_A, KC_L, KC_N, KC_Z}, {KC_T, KC_L, KC_A, KC_W, KC_K, KC_D}},
    // 793. 일반 약어 | 아내 (초성 ㅇ+ㄴ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_J, KC_U}, {KC_D, KC_K, KC_S, KC_O}},
    // 794. 일반 약어 | 아는_ (초성 ㅇ / 중성 ㅏ+ㅡ / 종성 ㄴ)
    {{KC_F, KC_G, KC_J, KC_S}, {KC_D, KC_K, KC_S, KC_M, KC_S, KC_SPC}},
    // 797. 일반 약어 | 아래 (초성 ㅇ+ㄹ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_J, KC_M}, {KC_D, KC_K, KC_F, KC_O}},
    // 798. 일반 약어 | 아름 (초성 ㅇ+ㄹ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_J, KC_M}, {KC_D, KC_K, KC_F, KC_M, KC_A}},
    // 800. 일반 약어 | 아무것 (초성 ㅇ / 중성 ㅏ+ㅜ / 종성 ㅅ)
    {{KC_B, KC_F, KC_J, KC_Q}, {KC_D, KC_K, KC_A, KC_N, KC_R, KC_J, KC_T}},
    // 801. 일반 약어 | 아무래도_ (초성 ㄹ+ㄷ / 중성 ㅜ+ㅏ / 종성 )
    {{KC_B, KC_F, KC_I, KC_M}, {KC_D, KC_K, KC_A, KC_N, KC_F, KC_O, KC_E, KC_H, KC_SPC}},
    // 802. 일반 약어 | 아무런_ (초성 ㅁ+ㄹ / 중성 ㅓ / 종성 ㄴ)
    {{KC_M, KC_R, KC_S, KC_Y}, {KC_D, KC_K, KC_A, KC_N, KC_F, KC_J, KC_S, KC_SPC}},
    // 805. 일반 약어 | 아울러 (초성 ㅇ / 중성 ㅏ+ㅜ / 종성 ㄹ)
    {{KC_B, KC_E, KC_F, KC_J}, {KC_D, KC_K, KC_D, KC_N, KC_F, KC_F, KC_J}},
    // 807. 일반 약어 | 아주_ (초성 ㅇ+ㅈ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_J, KC_L}, {KC_D, KC_K, KC_W, KC_N, KC_SPC}},
    // 810. 일반 약어 | 안녕 (초성 ㅇ+ㄴ / 중성  / 종성 ㄴ+ㅇ)
    {{KC_A, KC_J, KC_S, KC_U}, {KC_D, KC_K, KC_S, KC_S, KC_U, KC_D}},
    // 811. 일반 약어 | 않는_ (초성 ㄴ / 중성 ㅏ+ㅡ / 종성 ㅇ)
    {{KC_A, KC_F, KC_G, KC_U}, {KC_D, KC_K, KC_S, KC_G, KC_S, KC_M, KC_S, KC_SPC}},
    // 812. 일반 약어 | 않은_ (초성 ㅇ / 중성 ㅏ+ㅡ / 종성 ㅇ)
    {{KC_A, KC_F, KC_G, KC_J}, {KC_D, KC_K, KC_S, KC_G, KC_D, KC_M, KC_S, KC_SPC}},
    // 814. 일반 약어 | 압력 (초성 ㅇ / 중성 ㅏ / 종성 ㅂ+ㄱ)
    {{KC_F, KC_J, KC_W, KC_X}, {KC_D, KC_K, KC_Q, KC_F, KC_U, KC_R}},
    // 814. 일반 약어 | 압력 (초성 ㅇ / 중성 ㅏ / 종성 ㅂ+ㄱ)
    {{KC_A, KC_E, KC_F, KC_J}, {KC_D, KC_K, KC_Q, KC_F, KC_U, KC_R}},
    // 815. 일반 약어 | 야말로_ (초성 ㅁ+ㄹ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_M, KC_Y}, {KC_D, KC_I, KC_A, KC_K, KC_F, KC_F, KC_H, KC_SPC}},
    // 816. 일반 약어 | 약간 (초성 ㅇ+ㄱ / 중성  / 종성 ㄱ+ㄴ)
    {{KC_J, KC_K, KC_S, KC_X}, {KC_D, KC_I, KC_R, KC_R, KC_K, KC_S}},
    // 816. 일반 약어 | 약간 (초성 ㅇ+ㄱ / 중성  / 종성 ㄱ+ㄴ)
    {{KC_A, KC_E, KC_J, KC_K}, {KC_D, KC_I, KC_R, KC_R, KC_K, KC_S}},
    // 817. 일반 약어 | 양식 (초성 ㅇ+ㅅ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_J, KC_N, KC_X}, {KC_D, KC_I, KC_D, KC_T, KC_L, KC_R}},
    // 817. 일반 약어 | 양식 (초성 ㅇ+ㅅ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_E, KC_J, KC_N}, {KC_D, KC_I, KC_D, KC_T, KC_L, KC_R}},
    // 818. 일반 약어 | 어느_ (초성 ㅇ+ㄴ / 중성 ㅓ+ㅡ / 종성 )
    {{KC_G, KC_J, KC_R, KC_U}, {KC_D, KC_J, KC_S, KC_M, KC_SPC}},
    // 819. 일반 약어 | 어느새_ (초성 ㅇ+ㄴ / 중성 ㅡ+ㅏ / 종성 )
    {{KC_F, KC_G, KC_J, KC_U}, {KC_D, KC_J, KC_S, KC_M, KC_T, KC_O, KC_SPC}},
    // 821. 일반 약어 | 어떻 (초성 ㄸ / 중성  / 종성 ㅎ)
    {{KC_I, KC_J, KC_S, KC_SCLN}, {KC_D, KC_J, SFT(KC_E), KC_J, KC_G}},
    // 823. 일반 약어 | 어른 (초성 ㅇ+ㄹ / 중성 ㅓ+ㅡ / 종성 )
    {{KC_G, KC_J, KC_M, KC_R}, {KC_D, KC_J, KC_F, KC_M, KC_S}},
    // 824. 일반 약어 | 어리석 (초성 ㅇ+ㄹ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_J, KC_M}, {KC_D, KC_J, KC_F, KC_L, KC_T, KC_J, KC_R}},
    // 825. 일반 약어 | 어린_ (초성 ㅇ+ㄹ / 중성 ㅣ / 종성 ㄴ)
    {{KC_D, KC_J, KC_M, KC_S}, {KC_D, KC_J, KC_F, KC_L, KC_S, KC_SPC}},
    // 827. 일반 약어 | 어제 (초성 ㅇ+ㅈ / 중성 ㅓ+ㅔ / 종성 )
    {{KC_C, KC_J, KC_L, KC_R}, {KC_D, KC_J, KC_W, KC_P}},
    // 828. 일반 약어 | 어쨌든_ (초성 ㅈ+ㄷ / 중성 ㅓ+ㅡ / 종성 )
    {{KC_G, KC_I, KC_L, KC_R}, {KC_D, KC_J, SFT(KC_W), KC_O, SFT(KC_T), KC_E, KC_M, KC_S, KC_SPC}},
    // 830. 일반 약어 | 언니 (초성 ㅇ+ㄴ / 중성 ㅓ / 종성 ㄴ)
    {{KC_J, KC_R, KC_S, KC_U}, {KC_D, KC_J, KC_S, KC_S, KC_L}},
    // 831. 일반 약어 | 언론 (초성 ㅇ+ㄹ / 중성 ㅓ / 종성 ㄴ)
    {{KC_J, KC_M, KC_R, KC_S}, {KC_D, KC_J, KC_S, KC_F, KC_H, KC_S}},
    // 833. 일반 약어 | 언제나_ (초성 ㅇ / 중성 ㅓ+ㅔ / 종성 ㄴ)
    {{KC_C, KC_J, KC_R, KC_S}, {KC_D, KC_J, KC_S, KC_W, KC_P, KC_S, KC_K, KC_SPC}},
    // 836. 일반 약어 | 얼른_ (초성 ㅇ+ㄹ / 중성 ㅡ / 종성 ㄴ)
    {{KC_G, KC_J, KC_M, KC_S}, {KC_D, KC_J, KC_F, KC_F, KC_M, KC_S, KC_SPC}},
    // 838. 일반 약어 | 엄격 (초성 ㅇ+ㄱ / 중성  / 종성 ㅁ+ㄱ)
    {{KC_J, KC_K, KC_X, KC_Z}, {KC_D, KC_J, KC_A, KC_R, KC_U, KC_R}},
    // 838. 일반 약어 | 엄격 (초성 ㅇ+ㄱ / 중성  / 종성 ㅁ+ㄱ)
    {{KC_A, KC_E, KC_J, KC_K}, {KC_D, KC_J, KC_A, KC_R, KC_U, KC_R}},
    // 839. 일반 약어 | 엄청_ (초성 ㅇ+ㅎ / 중성 ㅓ / 종성 ㅇ)
    {{KC_A, KC_H, KC_J, KC_R}, {KC_D, KC_J, KC_A, KC_C, KC_J, KC_D, KC_SPC}},
    // 842. 일반 약어 | 없는_ (초성 ㅇ+ㄴ / 중성  / 종성 ㅄ)
    {{KC_J, KC_Q, KC_U, KC_W}, {KC_D, KC_J, KC_Q, KC_T, KC_S, KC_M, KC_S, KC_SPC}},
    // 845. 일반 약어 | 에게서_ (초성 ㄱ+ㅅ / 중성 ㅔ+ㅓ / 종성 )
    {{KC_C, KC_K, KC_N, KC_R}, {KC_D, KC_P, KC_R, KC_P, KC_T, KC_J, KC_SPC}},
    // 847. 일반 약어 | 에다_ (초성 ㅇ+ㄷ / 중성 ㅔ+ㅏ / 종성 )
    {{KC_C, KC_F, KC_I, KC_J}, {KC_D, KC_P, KC_E, KC_K, KC_SPC}},
    // 848. 일반 약어 | 에서_ (초성 ㅇ+ㅅ / 중성 ㅔ+ㅓ / 종성 )
    {{KC_C, KC_J, KC_N, KC_R}, {KC_D, KC_P, KC_T, KC_J, KC_SPC}},
    // 850. 일반 약어 | 여기저기 (초성 ㅈ+ㄱ / 중성 ㅕ+ㅓ / 종성 )
    {{KC_K, KC_L, KC_R, KC_T}, {KC_D, KC_U, KC_R, KC_L, KC_W, KC_J, KC_R, KC_L}},
    // 852. 일반 약어 | 여러분 (초성 ㅇ+ㅂ / 중성 ㅕ+ㅓ / 종성 )
    {{KC_J, KC_O, KC_R, KC_T}, {KC_D, KC_U, KC_F, KC_J, KC_Q, KC_N, KC_S}},
    // 853. 일반 약어 | 여론 (초성 ㅇ+ㄹ / 중성 ㅕ / 종성 ㄴ)
    {{KC_J, KC_M, KC_S, KC_T}, {KC_D, KC_U, KC_F, KC_H, KC_S}},
    // 856. 일반 약어 | 여전 (초성 ㅇ+ㅈ / 중성 ㅕ+ㅓ / 종성 )
    {{KC_J, KC_L, KC_R, KC_T}, {KC_D, KC_U, KC_W, KC_J, KC_S}},
    // 857. 일반 약어 | 여전히_ (초성 ㅇ+ㅎ / 중성 ㅕ+ㅓ / 종성 )
    {{KC_H, KC_J, KC_R, KC_T}, {KC_D, KC_U, KC_W, KC_J, KC_S, KC_G, KC_L, KC_SPC}},
    // 858. 일반 약어 | 역사 (초성 ㅇ+ㅅ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_J, KC_N}, {KC_D, KC_U, KC_R, KC_T, KC_K}},
    // 859. 일반 약어 | 역할 (초성 ㅇ+ㅎ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_H, KC_J}, {KC_D, KC_U, KC_R, KC_G, KC_K, KC_F}},
    // 860. 일반 약어 | 연결 (초성 ㅇ+ㄱ / 중성  / 종성 ㄴ+ㄹ)
    {{KC_E, KC_J, KC_K, KC_S}, {KC_D, KC_U, KC_S, KC_R, KC_U, KC_F}},
    // 861. 일반 약어 | 연구 (초성 ㅇ+ㄱ / 중성 ㅕ+ㅜ / 종성 )
    {{KC_B, KC_J, KC_K, KC_T}, {KC_D, KC_U, KC_S, KC_R, KC_N}},
    // 862. 일반 약어 | 연구소 (초성 ㄱ+ㅅ / 중성 ㅕ+ㅜ / 종성 )
    {{KC_B, KC_K, KC_N, KC_T}, {KC_D, KC_U, KC_S, KC_R, KC_N, KC_T, KC_H}},
    // 863. 일반 약어 | 연극 (초성 ㅇ+ㄱ / 중성 ㅡ+ㅕ / 종성 )
    {{KC_G, KC_J, KC_K, KC_T}, {KC_D, KC_U, KC_S, KC_R, KC_M, KC_R}},
    // 864. 일반 약어 | 연락 (초성 ㅇ+ㄹ / 중성 ㅏ / 종성 ㄱ)
    {{KC_F, KC_J, KC_M, KC_X}, {KC_D, KC_U, KC_S, KC_F, KC_K, KC_R}},
    // 865. 일반 약어 | 연습 (초성 ㅇ+ㅅ / 중성 ㅕ+ㅡ / 종성 )
    {{KC_G, KC_J, KC_N, KC_T}, {KC_D, KC_U, KC_S, KC_T, KC_M, KC_Q}},
    // 867. 일반 약어 | 열심 (초성 ㅇ+ㅅ / 중성  / 종성 ㄹ+ㅁ)
    {{KC_E, KC_J, KC_N, KC_Z}, {KC_D, KC_U, KC_F, KC_T, KC_L, KC_A}},
    // 869. 일반 약어 | 영양 (초성 ㅇ / 중성 ㅕ+ㅓ / 종성 ㅇ)
    {{KC_A, KC_J, KC_R, KC_T}, {KC_D, KC_U, KC_D, KC_D, KC_I, KC_D}},
    // 871. 일반 약어 | 영원 (초성 ㅇ / 중성 ㅕ+ㅓ / 종성 ㄴ)
    {{KC_J, KC_R, KC_S, KC_T}, {KC_D, KC_U, KC_D, KC_D, KC_N, KC_J, KC_S}},
    // 872. 일반 약어 | 영향 (초성 ㅇ+ㅎ / 중성 ㅕ / 종성 ㅇ)
    {{KC_A, KC_H, KC_J, KC_T}, {KC_D, KC_U, KC_D, KC_G, KC_I, KC_D}},
    // 874. 일반 약어 | 예금 (초성 ㅇ+ㄱ / 중성 ㅔ+ㅡ / 종성 )
    {{KC_C, KC_G, KC_J, KC_K}, {KC_D, SFT(KC_P), KC_R, KC_M, KC_A}},
    // 875. 일반 약어 | 예방 (초성 ㅇ+ㅂ / 중성 ㅔ+ㅏ / 종성 )
    {{KC_C, KC_F, KC_J, KC_O}, {KC_D, SFT(KC_P), KC_Q, KC_K, KC_D}},
    // 879. 일반 약어 | 예술가 (초성 ㅇ+ㅅ / 중성 ㅔ+ㅏ / 종성 )
    {{KC_C, KC_F, KC_J, KC_N}, {KC_D, SFT(KC_P), KC_T, KC_N, KC_F, KC_R, KC_K}},
    // 880. 일반 약어 | 예외 (초성 ㅇ / 중성 ㅔ+ㅚ / 종성 )
    {{KC_C, KC_D, KC_J, KC_DOT}, {KC_D, SFT(KC_P), KC_D, KC_H, KC_L}},
    // 884. 일반 약어 | 옛날 (초성 ㅇ+ㄴ / 중성  / 종성 ㅅ+ㄹ)
    {{KC_E, KC_J, KC_Q, KC_U}, {KC_D, SFT(KC_P), KC_T, KC_S, KC_K, KC_F}},
    // 887. 일반 약어 | 오늘날 (초성 ㅇ+ㄴ / 중성 ㅗ+ㅏ / 종성 )
    {{KC_F, KC_J, KC_U, KC_V}, {KC_D, KC_H, KC_S, KC_M, KC_F, KC_S, KC_K, KC_F}},
    // 890. 일반 약어 | 오른쪽 (초성 ㄹ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_L, KC_M, KC_V, KC_X}, {KC_D, KC_H, KC_F, KC_M, KC_S, SFT(KC_W), KC_H, KC_R}},
    // 890. 일반 약어 | 오른쪽 (초성 ㄹ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_L, KC_M, KC_X, KC_DOT}, {KC_D, KC_H, KC_F, KC_M, KC_S, SFT(KC_W), KC_H, KC_R}},
    // 891. 일반 약어 | 오후 (초성 ㅇ+ㅎ / 중성 ㅗ+ㅜ / 종성 )
    {{KC_B, KC_H, KC_J, KC_V}, {KC_D, KC_H, KC_G, KC_N}},
    // 893. 일반 약어 | 온갖_ (초성 ㅇ+ㄱ / 중성  / 종성 ㅈ)
    {{KC_E, KC_J, KC_K, KC_SCLN}, {KC_D, KC_H, KC_S, KC_R, KC_K, KC_W, KC_SPC}},
    // 894. 일반 약어 | 올라 (초성 ㅇ+ㄹ / 중성 ㅗ / 종성 ㄹ)
    {{KC_E, KC_J, KC_M, KC_V}, {KC_D, KC_H, KC_F, KC_F, KC_K}},
    // 894. 일반 약어 | 올라 (초성 ㅇ+ㄹ / 중성 ㅗ / 종성 ㄹ)
    {{KC_E, KC_J, KC_M, KC_DOT}, {KC_D, KC_H, KC_F, KC_F, KC_K}},
    // 895. 일반 약어 | 올림픽 (초성 ㄹ+ㅂ / 중성 ㅗ+ㅣ / 종성 ㄱ)
    {{KC_M, KC_O, KC_X, KC_DOT}, {KC_D, KC_H, KC_F, KC_F, KC_L, KC_A, KC_V, KC_L, KC_R}},
    // 901. 일반 약어 | 요구 (초성 ㅇ+ㄱ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_J, KC_K}, {KC_D, KC_Y, KC_R, KC_N}},
    // 902. 일반 약어 | 요금 (초성 ㅇ+ㄱ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_G, KC_J, KC_K, KC_V}, {KC_D, KC_Y, KC_R, KC_M, KC_A}},
    // 909. 일반 약어 | 우승 (초성 ㅇ+ㅅ / 중성 ㅜ+ㅡ / 종성 )
    {{KC_B, KC_G, KC_J, KC_N}, {KC_D, KC_N, KC_T, KC_M, KC_D}},
    // 910. 일반 약어 | 우연 (초성 ㅇ / 중성 ㅜ+ㅕ / 종성 ㄴ)
    {{KC_B, KC_J, KC_S, KC_T}, {KC_D, KC_N, KC_D, KC_U, KC_S}},
    // 912. 일반 약어 | 운명 (초성 ㅁ / 중성 ㅜ+ㅕ / 종성 ㄴ)
    {{KC_B, KC_S, KC_T, KC_Y}, {KC_D, KC_N, KC_S, KC_A, KC_U, KC_D}},
    // 921. 일반 약어 | 위치 (초성 ㅇ+ㅎ / 중성 ㅟ / 종성 )
    {{KC_B, KC_D, KC_H, KC_J}, {KC_D, KC_N, KC_L, KC_C, KC_L}},
    // 921. 일반 약어 | 위치 (초성 ㅇ+ㅎ / 중성 ㅟ / 종성 )
    {{KC_C, KC_D, KC_H, KC_J}, {KC_D, KC_N, KC_L, KC_C, KC_L}},
    // 922. 일반 약어 | 위험 (초성 ㅇ+ㅎ / 중성 ㅓ / 종성 ㅁ)
    {{KC_H, KC_J, KC_R, KC_Z}, {KC_D, KC_N, KC_L, KC_G, KC_J, KC_A}},
    // 923. 일반 약어 | 위협 (초성 ㅇ+ㅎ / 중성 ㅕ / 종성 ㅂ)
    {{KC_H, KC_J, KC_T, KC_W}, {KC_D, KC_N, KC_L, KC_G, KC_U, KC_Q}},
    // 925. 일반 약어 | 유리 (초성 ㅇ+ㄹ / 중성 ㅠ+ㅣ / 종성 )
    {{KC_B, KC_J, KC_M, KC_V}, {KC_D, KC_B, KC_F, KC_L}},
    // 926. 일반 약어 | 유명 (초성 ㅁ / 중성 ㅜ+ㅕ / 종성 ㅇ)
    {{KC_A, KC_B, KC_T, KC_Y}, {KC_D, KC_B, KC_A, KC_U, KC_D}},
    // 927. 일반 약어 | 유학 (초성 ㅇ+ㅎ / 중성 ㅏ / 종성 ㄱ)
    {{KC_F, KC_H, KC_J, KC_X}, {KC_D, KC_B, KC_G, KC_K, KC_R}},
    // 929. 일반 약어 | 으니 (초성 ㅇ+ㄴ / 중성 ㅡ+ㅣ / 종성 )
    {{KC_D, KC_G, KC_J, KC_U}, {KC_D, KC_M, KC_S, KC_L}},
    // 930. 일반 약어 | 으려 (초성 ㅇ+ㄹ / 중성 ㅡ+ㅕ / 종성 )
    {{KC_G, KC_J, KC_M, KC_T}, {KC_D, KC_M, KC_F, KC_U}},
    // 933. 일반 약어 | 으면_ (초성 ㅇ / 중성 ㅡ+ㅕ / 종성 ㄴ)
    {{KC_G, KC_J, KC_S, KC_T}, {KC_D, KC_M, KC_A, KC_U, KC_S, KC_SPC}},
    // 934. 일반 약어 | 은데 (초성 ㅇ+ㄷ / 중성 ㅡ+ㅔ / 종성 )
    {{KC_C, KC_G, KC_I, KC_J}, {KC_D, KC_M, KC_S, KC_E, KC_P}},
    // 935. 일반 약어 | 은행 (초성 ㅇ+ㅎ / 중성 ㅡ / 종성 ㄴ)
    {{KC_G, KC_H, KC_J, KC_S}, {KC_D, KC_M, KC_S, KC_G, KC_O, KC_D}},
    // 937. 일반 약어 | 을까?_ (초성 ㅇ+ㄱ / 중성 ㅡ+ㅏ / 종성 )
    {{KC_F, KC_G, KC_J, KC_K}, {KC_D, KC_M, KC_F, SFT(KC_R), KC_K, SFT(KC_SLASH), KC_SPC}},
    // 938. 일반 약어 | 음료 (초성 ㅇ+ㄹ / 중성 ㅡ / 종성 ㅁ)
    {{KC_G, KC_J, KC_M, KC_Z}, {KC_D, KC_M, KC_A, KC_F, KC_Y}},
    // 942. 일반 약어 | 의도 (초성 ㅇ+ㄷ / 중성 ㅡ+ㅗ / 종성 )
    {{KC_G, KC_I, KC_J, KC_V}, {KC_D, KC_M, KC_L, KC_E, KC_H}},
    // 945. 일반 약어 | 의복 (초성 ㅇ+ㅂ / 중성 ㅡ+ㅗ / 종성 )
    {{KC_G, KC_J, KC_O, KC_V}, {KC_D, KC_M, KC_L, KC_Q, KC_H, KC_R}},
    // 946. 일반 약어 | 의사 (초성 ㅇ+ㅅ / 중성 ㅡ+ㅏ / 종성 )
    {{KC_F, KC_G, KC_J, KC_N}, {KC_D, KC_M, KC_L, KC_T, KC_K}},
    // 948. 일반 약어 | 의자 (초성 ㅇ+ㅈ / 중성 ㅡ+ㅏ / 종성 )
    {{KC_F, KC_G, KC_J, KC_L}, {KC_D, KC_M, KC_L, KC_W, KC_K}},
    // 949. 일반 약어 | 의학 (초성 ㅇ+ㅎ / 중성 ㅡ+ㅏ / 종성 )
    {{KC_F, KC_G, KC_H, KC_J}, {KC_D, KC_M, KC_L, KC_G, KC_K, KC_R}},
    // 952. 일반 약어 | 이날 (초성 ㅇ+ㄴ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_J, KC_U}, {KC_D, KC_L, KC_S, KC_K, KC_F}},
    // 956. 일반 약어 | 이란 (초성 ㅇ+ㄹ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_J, KC_M, KC_S}, {KC_D, KC_L, KC_F, KC_K, KC_S}},
    // 961. 일반 약어 | 이룩 (초성 ㅇ+ㄹ / 중성 ㅜ / 종성 ㄱ)
    {{KC_B, KC_J, KC_M, KC_X}, {KC_D, KC_L, KC_F, KC_N, KC_R}},
    // 966. 일반 약어 | 이틀 (초성 ㅇ+ㅎ / 중성 ㅡ / 종성 ㄹ)
    {{KC_E, KC_G, KC_H, KC_J}, {KC_D, KC_L, KC_X, KC_M, KC_F}},
    // 970. 일반 약어 | 인력 (초성 ㅇ / 중성 ㅣ / 종성 ㄴ+ㄱ)
    {{KC_D, KC_J, KC_S, KC_X}, {KC_D, KC_L, KC_S, KC_F, KC_U, KC_R}},
    // 970. 일반 약어 | 인력 (초성 ㅇ / 중성 ㅣ / 종성 ㄴ+ㄱ)
    {{KC_A, KC_D, KC_E, KC_J}, {KC_D, KC_L, KC_S, KC_F, KC_U, KC_R}},
    // 971. 일반 약어 | 인류 (초성 ㅇ+ㄹ / 중성 ㅠ / 종성 )
    {{KC_B, KC_J, KC_M, KC_DOT}, {KC_D, KC_L, KC_S, KC_F, KC_B}},
    // 971. 일반 약어 | 인류 (초성 ㅇ+ㄹ / 중성 ㅠ / 종성 )
    {{KC_B, KC_J, KC_M, KC_V}, {KC_D, KC_L, KC_S, KC_F, KC_B}},
    // 973. 일반 약어 | 인생 (초성 ㅇ+ㅅ / 중성  / 종성 ㄴ+ㅇ)
    {{KC_A, KC_J, KC_N, KC_S}, {KC_D, KC_L, KC_S, KC_T, KC_O, KC_D}},
    // 974. 일반 약어 | 인식 (초성 ㅇ+ㅅ / 중성  / 종성 ㄴ+ㄱ)
    {{KC_J, KC_N, KC_S, KC_X}, {KC_D, KC_L, KC_S, KC_T, KC_L, KC_R}},
    // 974. 일반 약어 | 인식 (초성 ㅇ+ㅅ / 중성  / 종성 ㄴ+ㄱ)
    {{KC_A, KC_E, KC_J, KC_N}, {KC_D, KC_L, KC_S, KC_T, KC_L, KC_R}},
    // 975. 일반 약어 | 인정 (초성 ㅇ+ㅈ / 중성  / 종성 ㄴ+ㅇ)
    {{KC_A, KC_J, KC_L, KC_S}, {KC_D, KC_L, KC_S, KC_W, KC_J, KC_D}},
    // 977. 일반 약어 | 일단_ (초성 ㅇ+ㄷ / 중성  / 종성 ㄹ+ㄴ)
    {{KC_E, KC_I, KC_J, KC_S}, {KC_D, KC_L, KC_F, KC_E, KC_K, KC_S, KC_SPC}},
    // 978. 일반 약어 | 일반 (초성 ㅇ+ㅂ / 중성  / 종성 ㄹ+ㄴ)
    {{KC_E, KC_J, KC_O, KC_S}, {KC_D, KC_L, KC_F, KC_Q, KC_K, KC_S}},
    // 983. 일반 약어 | 일치 (초성 ㅇ+ㅎ / 중성 ㅣ / 종성 ㄹ)
    {{KC_D, KC_E, KC_H, KC_J}, {KC_D, KC_L, KC_F, KC_C, KC_L}},
    // 984. 일반 약어 | 임신 (초성 ㅇ+ㅅ / 중성  / 종성 ㅁ+ㄴ)
    {{KC_J, KC_N, KC_S, KC_Z}, {KC_D, KC_L, KC_A, KC_T, KC_L, KC_S}},
    // 986. 일반 약어 | 입술 (초성 ㅇ+ㅅ / 중성  / 종성 ㅂ+ㄹ)
    {{KC_E, KC_J, KC_N, KC_W}, {KC_D, KC_L, KC_Q, KC_T, KC_N, KC_F}},
    // 987. 일반 약어 | 입장 (초성 ㅇ+ㅈ / 중성  / 종성 ㅂ+ㅇ)
    {{KC_A, KC_J, KC_L, KC_W}, {KC_D, KC_L, KC_Q, KC_W, KC_K, KC_D}},
    // 988. 일반 약어 | 입학 (초성 ㅇ+ㅎ / 중성 ㅣ / 종성 ㅂ)
    {{KC_D, KC_H, KC_J, KC_W}, {KC_D, KC_L, KC_Q, KC_G, KC_K, KC_R}},
    // 990. 일반 약어 | 있을_ (초성 ㅇ / 중성  / 종성 ㅆ+ㄹ)
    {{KC_A, KC_E, KC_J, KC_Q}, {KC_D, KC_L, SFT(KC_T), KC_D, KC_M, KC_F, KC_SPC}},
    // 991. 일반 약어 | 자격 (초성 ㅈ+ㄱ / 중성 ㅕ / 종성 ㄱ)
    {{KC_K, KC_L, KC_T, KC_X}, {KC_W, KC_K, KC_R, KC_U, KC_R}},
    // 992. 일반 약어 | 자극 (초성 ㅈ+ㄱ / 중성 ㅡ / 종성 ㄱ)
    {{KC_G, KC_K, KC_L, KC_X}, {KC_W, KC_K, KC_R, KC_M, KC_R}},
    // 993. 일반 약어 | 자금 (초성 ㅈ+ㄱ / 중성 ㅡ / 종성 ㅁ)
    {{KC_G, KC_K, KC_L, KC_Z}, {KC_W, KC_K, KC_R, KC_M, KC_A}},
    // 995. 일반 약어 | 자꾸_ (초성 ㅈ+ㄱ / 중성 ㅏ+ㅜ / 종성 )
    {{KC_B, KC_F, KC_K, KC_L}, {KC_W, KC_K, SFT(KC_R), KC_N, KC_SPC}},
    // 996. 일반 약어 | 자네 (초성 ㅈ+ㄴ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_L, KC_U}, {KC_W, KC_K, KC_S, KC_P}},
    // 999. 일반 약어 | 자랑 (초성 ㅈ+ㄹ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_L, KC_M}, {KC_W, KC_K, KC_F, KC_K, KC_D}},
    // 1002. 일반 약어 | 자면_ (초성 ㅈ+ㅁ / 중성 ㅕ / 종성 ㄴ)
    {{KC_L, KC_S, KC_T, KC_Y}, {KC_W, KC_K, KC_A, KC_U, KC_S, KC_SPC}},
    // 1003. 일반 약어 | 자본 (초성 ㅈ+ㅂ / 중성 ㅗ / 종성 ㄴ)
    {{KC_L, KC_O, KC_S, KC_V}, {KC_W, KC_K, KC_Q, KC_H, KC_S}},
    // 1003. 일반 약어 | 자본 (초성 ㅈ+ㅂ / 중성 ㅗ / 종성 ㄴ)
    {{KC_L, KC_O, KC_S, KC_DOT}, {KC_W, KC_K, KC_Q, KC_H, KC_S}},
    // 1005. 일반 약어 | 자세히_ (초성 ㅅ+ㅎ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_H, KC_N}, {KC_W, KC_K, KC_T, KC_P, KC_G, KC_L, KC_SPC}},
    // 1010. 일반 약어 | 자율 (초성 ㅈ / 중성 ㅏ+ㅜ / 종성 ㄹ)
    {{KC_B, KC_E, KC_F, KC_L}, {KC_W, KC_K, KC_D, KC_B, KC_F}},
    // 1014. 일반 약어 | 자판 (초성 ㅈ+ㅂ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_L, KC_O, KC_S}, {KC_W, KC_K, KC_V, KC_K, KC_S}},
    // 1015. 일반 약어 | 작가 (초성 ㅈ+ㄱ / 중성 ㅏ / 종성 ㄱ)
    {{KC_F, KC_K, KC_L, KC_X}, {KC_W, KC_K, KC_R, KC_R, KC_K}},
    // 1016. 일반 약어 | 작년 (초성 ㅈ+ㄴ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_U}, {KC_W, KC_K, KC_R, KC_S, KC_U, KC_S}},
    // 1018. 일반 약어 | 작용 (초성 ㅈ+ㅇ / 중성  / 종성 ㄱ+ㅇ)
    {{KC_A, KC_J, KC_L, KC_X}, {KC_W, KC_K, KC_R, KC_D, KC_Y, KC_D}},
    // 1018. 일반 약어 | 작용 (초성 ㅈ+ㅇ / 중성  / 종성 ㄱ+ㅇ)
    {{KC_A, KC_E, KC_J, KC_L}, {KC_W, KC_K, KC_R, KC_D, KC_Y, KC_D}},
    // 1020. 일반 약어 | 작품 (초성 ㅈ+ㅂ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_O}, {KC_W, KC_K, KC_R, KC_V, KC_N, KC_A}},
    // 1021. 일반 약어 | 잔뜩 (초성 ㅈ+ㄷ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_I, KC_L}, {KC_W, KC_K, KC_S, SFT(KC_E), KC_M, KC_R}},
    // 1023. 일반 약어 | 잠깐 (초성 ㅈ+ㄱ / 중성  / 종성 ㅁ+ㄴ)
    {{KC_K, KC_L, KC_S, KC_Z}, {KC_W, KC_K, KC_A, SFT(KC_R), KC_K, KC_S}},
    // 1024. 일반 약어 | 잠시 (초성 ㅈ+ㅅ / 중성 ㅏ / 종성 ㅁ)
    {{KC_F, KC_L, KC_N, KC_Z}, {KC_W, KC_K, KC_A, KC_T, KC_L}},
    // 1028. 일반 약어 | 장면 (초성 ㅈ+ㅁ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_L, KC_S, KC_Y}, {KC_W, KC_K, KC_D, KC_A, KC_U, KC_S}},
    // 1029. 일반 약어 | 장소 (초성 ㅈ+ㅅ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_L, KC_N, KC_V}, {KC_W, KC_K, KC_D, KC_T, KC_H}},
    // 1029. 일반 약어 | 장소 (초성 ㅈ+ㅅ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_L, KC_N, KC_DOT}, {KC_W, KC_K, KC_D, KC_T, KC_H}},
    // 1030. 일반 약어 | 재료 (초성 ㅈ+ㄹ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_L, KC_M}, {KC_W, KC_O, KC_F, KC_Y}},
    // 1031. 일반 약어 | 재미 (초성 ㅈ+ㅁ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_L, KC_Y}, {KC_W, KC_O, KC_A, KC_L}},
    // 1033. 일반 약어 | 재산 (초성 ㅈ+ㅅ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_L, KC_N}, {KC_W, KC_O, KC_T, KC_K, KC_S}},
    // 1038. 일반 약어 | 저렇 (초성 ㅈ+ㄹ / 중성  / 종성 ㅎ)
    {{KC_L, KC_M, KC_S, KC_SCLN}, {KC_W, KC_J, KC_F, KC_J, KC_G}},
    // 1039. 일반 약어 | 저희 (초성 ㅈ+ㅎ / 중성 ㅓ+ㅡ / 종성 )
    {{KC_G, KC_H, KC_L, KC_R}, {KC_W, KC_J, KC_G, KC_M, KC_L}},
    // 1040. 일반 약어 | 적극 (초성 ㅈ+ㄱ / 중성 ㅓ+ㅡ / 종성 )
    {{KC_G, KC_K, KC_L, KC_R}, {KC_W, KC_J, KC_R, KC_R, KC_M, KC_R}},
    // 1042. 일반 약어 | 적당 (초성 ㅈ+ㄷ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_I, KC_L}, {KC_W, KC_J, KC_R, KC_E, KC_K, KC_D}},
    // 1043. 일반 약어 | 적어도_ (초성 ㅈ+ㄷ / 중성 ㅓ / 종성 ㄱ)
    {{KC_I, KC_L, KC_R, KC_X}, {KC_W, KC_J, KC_R, KC_D, KC_J, KC_E, KC_H, KC_SPC}},
    // 1048. 일반 약어 | 전국 (초성 ㅈ+ㄱ / 중성 ㅓ+ㅜ / 종성 )
    {{KC_B, KC_K, KC_L, KC_R}, {KC_W, KC_J, KC_S, KC_R, KC_N, KC_R}},
    // 1049. 일반 약어 | 전기 (초성 ㅈ+ㄱ / 중성 ㅣ / 종성 ㄴ)
    {{KC_D, KC_K, KC_L, KC_S}, {KC_W, KC_J, KC_S, KC_R, KC_L}},
    // 1050. 일반 약어 | 전달 (초성 ㅈ+ㄷ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_I, KC_L}, {KC_W, KC_J, KC_S, KC_E, KC_K, KC_F}},
    // 1051. 일반 약어 | 전도 (초성 ㅈ+ㄷ / 중성 ㅓ+ㅗ / 종성 ㄴ)
    {{KC_I, KC_L, KC_S, KC_DOT}, {KC_W, KC_J, KC_S, KC_E, KC_H}},
    // 1053. 일반 약어 | 전망 (초성 ㅈ+ㅁ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_L, KC_Y}, {KC_W, KC_J, KC_S, KC_A, KC_K, KC_D}},
    // 1055. 일반 약어 | 전문가 (초성 ㅈ / 중성 ㅜ+ㅏ / 종성 ㄴ)
    {{KC_B, KC_F, KC_L, KC_S}, {KC_W, KC_J, KC_S, KC_A, KC_N, KC_S, KC_R, KC_K}},
    // 1059. 일반 약어 | 전체적 (초성 ㅈ / 중성 ㅓ+ㅔ / 종성 ㄱ)
    {{KC_C, KC_L, KC_R, KC_X}, {KC_W, KC_J, KC_S, KC_C, KC_P, KC_W, KC_J, KC_R}},
    // 1060. 일반 약어 | 전통 (초성 ㅈ+ㄷ / 중성 ㅓ / 종성 ㄴ)
    {{KC_I, KC_L, KC_R, KC_S}, {KC_W, KC_J, KC_S, KC_X, KC_H, KC_D}},
    // 1063. 일반 약어 | 전혀_ (초성 ㅈ+ㅎ / 중성 ㅓ+ㅕ / 종성 )
    {{KC_H, KC_L, KC_R, KC_T}, {KC_W, KC_J, KC_S, KC_G, KC_U, KC_SPC}},
    // 1065. 일반 약어 | 젊은 (초성 ㅈ+ㅇ / 중성  / 종성 ㄻ)
    {{KC_E, KC_J, KC_L, KC_Z}, {KC_W, KC_J, KC_F, KC_A, KC_D, KC_M, KC_S}},
    // 1066. 일반 약어 | 점심 (초성 ㅈ+ㅅ / 중성 ㅣ / 종성 ㅁ)
    {{KC_D, KC_L, KC_N, KC_Z}, {KC_W, KC_J, KC_A, KC_T, KC_L, KC_A}},
    // 1067. 일반 약어 | 접근 (초성 ㅈ+ㄱ / 중성 ㅓ / 종성 ㅂ)
    {{KC_K, KC_L, KC_R, KC_W}, {KC_W, KC_J, KC_Q, KC_R, KC_M, KC_S}},
    // 1068. 일반 약어 | 접촉 (초성 ㅈ / 중성 ㅗ / 종성 ㅂ+ㄱ)
    {{KC_L, KC_V, KC_W, KC_X}, {KC_W, KC_J, KC_Q, KC_C, KC_H, KC_R}},
    // 1068. 일반 약어 | 접촉 (초성 ㅈ / 중성 ㅗ / 종성 ㅂ+ㄱ)
    {{KC_L, KC_W, KC_X, KC_DOT}, {KC_W, KC_J, KC_Q, KC_C, KC_H, KC_R}},
    // 1068. 일반 약어 | 접촉 (초성 ㅈ / 중성 ㅗ / 종성 ㅂ+ㄱ)
    {{KC_A, KC_E, KC_L, KC_V}, {KC_W, KC_J, KC_Q, KC_C, KC_H, KC_R}},
    // 1068. 일반 약어 | 접촉 (초성 ㅈ / 중성 ㅗ / 종성 ㅂ+ㄱ)
    {{KC_A, KC_E, KC_L, KC_DOT}, {KC_W, KC_J, KC_Q, KC_C, KC_H, KC_R}},
    // 1070. 일반 약어 | 정당 (초성 ㅈ+ㄷ / 중성 ㅓ / 종성 ㅇ)
    {{KC_A, KC_I, KC_L, KC_R}, {KC_W, KC_J, KC_D, KC_E, KC_K, KC_D}},
    // 1072. 일반 약어 | 정리 (초성 ㅈ+ㄹ / 중성 ㅓ / 종성 ㅇ)
    {{KC_A, KC_L, KC_M, KC_R}, {KC_W, KC_J, KC_D, KC_F, KC_L}},
    // 1076. 일반 약어 | 정비 (초성 ㅈ+ㅂ / 중성 ㅓ / 종성 ㅇ)
    {{KC_A, KC_L, KC_O, KC_R}, {KC_W, KC_J, KC_D, KC_Q, KC_L}},
    // 1077. 일반 약어 | 정신 (초성 ㅈ+ㅅ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_L, KC_N, KC_S}, {KC_W, KC_J, KC_D, KC_T, KC_L, KC_S}},
    // 1078. 일반 약어 | 정의 (초성 ㅈ+ㅇ / 중성 ㅓ+ㅡ / 종성 )
    {{KC_G, KC_J, KC_L, KC_R}, {KC_W, KC_J, KC_D, KC_D, KC_M, KC_L}},
    // 1079. 일반 약어 | 정책 (초성 ㅈ+ㅎ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_H, KC_L}, {KC_W, KC_J, KC_D, KC_C, KC_O, KC_R}},
    // 1081. 일반 약어 | 정확 (초성 ㅈ+ㅎ / 중성  / 종성 ㄱ+ㅇ)
    {{KC_A, KC_H, KC_L, KC_X}, {KC_W, KC_J, KC_D, KC_G, KC_H, KC_K, KC_R}},
    // 1081. 일반 약어 | 정확 (초성 ㅈ+ㅎ / 중성  / 종성 ㄱ+ㅇ)
    {{KC_A, KC_E, KC_H, KC_L}, {KC_W, KC_J, KC_D, KC_G, KC_H, KC_K, KC_R}},
    // 1082. 일반 약어 | 제거 (초성 ㅈ+ㄱ / 중성 ㅔ+ㅓ / 종성 )
    {{KC_C, KC_K, KC_L, KC_R}, {KC_W, KC_P, KC_R, KC_J}},
    // 1083. 일반 약어 | 제공 (초성 ㅈ+ㄱ / 중성 ㅔ / 종성 ㅇ)
    {{KC_A, KC_C, KC_K, KC_L}, {KC_W, KC_P, KC_R, KC_H, KC_D}},
    // 1084. 일반 약어 | 제대로_ (초성 ㅈ+ㄷ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_I, KC_L}, {KC_W, KC_P, KC_E, KC_O, KC_F, KC_H, KC_SPC}},
    // 1086. 일반 약어 | 제목 (초성 ㅈ+ㅁ / 중성 ㅔ+ㅗ / 종성 )
    {{KC_C, KC_L, KC_V, KC_Y}, {KC_W, KC_P, KC_A, KC_H, KC_R}},
    // 1087. 일반 약어 | 제시 (초성 ㅈ+ㅅ / 중성 ㅔ+ㅣ / 종성 )
    {{KC_C, KC_D, KC_L, KC_N}, {KC_W, KC_P, KC_T, KC_L}},
    // 1088. 일반 약어 | 제작 (초성 ㅈ / 중성 ㅔ+ㅏ / 종성 ㄱ)
    {{KC_C, KC_F, KC_L, KC_X}, {KC_W, KC_P, KC_W, KC_K, KC_R}},
    // 1091. 일반 약어 | 조건 (초성 ㅈ+ㄱ / 중성 ㅓ / 종성 ㄴ)
    {{KC_K, KC_L, KC_R, KC_S}, {KC_W, KC_H, KC_R, KC_J, KC_S}},
    // 1092. 일반 약어 | 조그 (초성 ㅈ+ㄱ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_G, KC_K, KC_L, KC_V}, {KC_W, KC_H, KC_R, KC_M}},
    // 1094. 일반 약어 | 조미료 (초성 ㅈ+ㅁ / 중성 ㅗ+ㅣ / 종성 )
    {{KC_D, KC_L, KC_V, KC_Y}, {KC_W, KC_H, KC_A, KC_L, KC_F, KC_Y}},
    // 1096. 일반 약어 | 조상 (초성 ㅈ+ㅅ / 중성 ㅗ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_L, KC_N, KC_DOT}, {KC_W, KC_H, KC_T, KC_K, KC_D}},
    // 1097. 일반 약어 | 조선 (초성 ㅈ+ㅅ / 중성 ㅓ / 종성 ㄴ)
    {{KC_L, KC_N, KC_R, KC_S}, {KC_W, KC_H, KC_T, KC_J, KC_S}},
    // 1098. 일반 약어 | 조심 (초성 ㅈ+ㅅ / 중성 ㅗ+ㅣ / 종성 ㅁ)
    {{KC_L, KC_N, KC_Z, KC_DOT}, {KC_W, KC_H, KC_T, KC_L, KC_A}},
    // 1103. 일반 약어 | 졸업 (초성 ㅈ+ㅇ / 중성  / 종성 ㄹ+ㅂ)
    {{KC_E, KC_J, KC_L, KC_W}, {KC_W, KC_H, KC_F, KC_D, KC_J, KC_Q}},
    // 1104. 일반 약어 | 종교 (초성 ㅈ+ㄱ / 중성 ㅛ / 종성 )
    {{KC_K, KC_L, KC_V, KC_DOT}, {KC_W, KC_H, KC_D, KC_R, KC_Y}},
    // 1104. 일반 약어 | 종교 (초성 ㅈ+ㄱ / 중성 ㅛ / 종성 )
    {{KC_F, KC_K, KC_L, KC_R}, {KC_W, KC_H, KC_D, KC_R, KC_Y}},
    // 1106. 일반 약어 | 종합 (초성 ㅈ+ㅎ / 중성  / 종성 ㅇ+ㅂ)
    {{KC_A, KC_H, KC_L, KC_W}, {KC_W, KC_H, KC_D, KC_G, KC_K, KC_Q}},
    // 1112. 일반 약어 | 주말 (초성 ㅈ+ㅁ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_L, KC_Y}, {KC_W, KC_N, KC_A, KC_K, KC_F}},
    // 1114. 일반 약어 | 주먹 (초성 ㅈ+ㅁ / 중성 ㅜ+ㅓ / 종성 )
    {{KC_B, KC_L, KC_R, KC_Y}, {KC_W, KC_N, KC_A, KC_J, KC_R}},
    // 1118. 일반 약어 | 주식 (초성 ㅈ+ㅅ / 중성 ㅜ / 종성 ㄱ)
    {{KC_B, KC_L, KC_N, KC_X}, {KC_W, KC_N, KC_T, KC_L, KC_R}},
    // 1119. 일반 약어 | 주의 (초성 ㅈ+ㅇ / 중성 ㅜ+ㅡ / 종성 )
    {{KC_B, KC_G, KC_J, KC_L}, {KC_W, KC_N, KC_D, KC_M, KC_L}},
    // 1121. 일반 약어 | 주장 (초성 ㅈ / 중성 ㅜ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_B, KC_F, KC_L}, {KC_W, KC_N, KC_W, KC_K, KC_D}},
    // 1122. 일반 약어 | 주택 (초성 ㅈ+ㄷ / 중성 ㅜ / 종성 ㄱ)
    {{KC_B, KC_I, KC_L, KC_X}, {KC_W, KC_N, KC_X, KC_O, KC_R}},
    // 1123. 일반 약어 | 죽음 (초성 ㅈ+ㅇ / 중성  / 종성 ㄱ+ㅁ)
    {{KC_J, KC_L, KC_X, KC_Z}, {KC_W, KC_N, KC_R, KC_D, KC_M, KC_A}},
    // 1123. 일반 약어 | 죽음 (초성 ㅈ+ㅇ / 중성  / 종성 ㄱ+ㅁ)
    {{KC_A, KC_E, KC_J, KC_L}, {KC_W, KC_N, KC_R, KC_D, KC_M, KC_A}},
    // 1124. 일반 약어 | 준비 (초성 ㅈ+ㅂ / 중성 ㅜ / 종성 ㄴ)
    {{KC_B, KC_L, KC_O, KC_S}, {KC_W, KC_N, KC_S, KC_Q, KC_L}},
    // 1125. 일반 약어 | 줄기 (초성 ㅈ+ㄱ / 중성 ㅜ / 종성 ㄹ)
    {{KC_B, KC_E, KC_K, KC_L}, {KC_W, KC_N, KC_F, KC_R, KC_L}},
    // 1126. 일반 약어 | 중간 (초성 ㅈ+ㄱ / 중성 ㅜ / 종성 ㅇ)
    {{KC_A, KC_B, KC_K, KC_L}, {KC_W, KC_N, KC_D, KC_R, KC_K, KC_S}},
    // 1127. 일반 약어 | 중국 (초성 ㅈ+ㄱ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_L}, {KC_W, KC_N, KC_D, KC_R, KC_N, KC_R}},
    // 1128. 일반 약어 | 중세 (초성 ㅈ+ㅅ / 중성 ㅜ+ㅔ / 종성 )
    {{KC_B, KC_C, KC_L, KC_N}, {KC_W, KC_N, KC_D, KC_T, KC_P}},
    // 1129. 일반 약어 | 중소기업 (초성 ㅈ+ㄱ / 중성  / 종성 ㅇ+ㅂ)
    {{KC_A, KC_K, KC_L, KC_W}, {KC_W, KC_N, KC_D, KC_T, KC_H, KC_R, KC_L, KC_D, KC_J, KC_Q}},
    // 1133. 일반 약어 | 즐거운_ (초성 ㅈ+ㄱ / 중성 ㅡ / 종성 ㄹ)
    {{KC_E, KC_G, KC_K, KC_L}, {KC_W, KC_M, KC_F, KC_R, KC_J, KC_D, KC_N, KC_S, KC_SPC}},
    // 1137. 일반 약어 | 지경 (초성 ㅈ+ㄱ / 중성 ㅣ / 종성 ㅇ)
    {{KC_A, KC_D, KC_K, KC_L}, {KC_W, KC_L, KC_R, KC_U, KC_D}},
    // 1140. 일반 약어 | 지난_ (초성 ㅈ+ㄴ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_L, KC_S, KC_U}, {KC_W, KC_L, KC_S, KC_K, KC_S, KC_SPC}},
    // 1143. 일반 약어 | 지는_ (초성 ㅈ+ㄴ / 중성 ㅡ / 종성 ㄴ)
    {{KC_G, KC_L, KC_S, KC_U}, {KC_W, KC_L, KC_S, KC_M, KC_S, KC_SPC}},
    // 1146. 일반 약어 | 지방 (초성 ㅈ+ㅂ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_L, KC_O}, {KC_W, KC_L, KC_Q, KC_K, KC_D}},
    // 1147. 일반 약어 | 지배 (초성 ㅈ+ㅂ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_L, KC_O}, {KC_W, KC_L, KC_Q, KC_O}},
    // 1149. 일반 약어 | 지속 (초성 ㅈ+ㅅ / 중성 ㅗ / 종성 ㄱ)
    {{KC_L, KC_N, KC_V, KC_X}, {KC_W, KC_L, KC_T, KC_H, KC_R}},
    // 1149. 일반 약어 | 지속 (초성 ㅈ+ㅅ / 중성 ㅗ / 종성 ㄱ)
    {{KC_L, KC_N, KC_X, KC_DOT}, {KC_W, KC_L, KC_T, KC_H, KC_R}},
    // 1151. 일반 약어 | 지식 (초성 ㅈ+ㅅ / 중성 ㅣ / 종성 ㄱ)
    {{KC_D, KC_L, KC_N, KC_X}, {KC_W, KC_L, KC_T, KC_L, KC_R}},
    // 1152. 일반 약어 | 지역 (초성 ㅈ+ㅇ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_J, KC_L}, {KC_W, KC_L, KC_D, KC_U, KC_R}},
    // 1154. 일반 약어 | 지혜 (초성 ㅈ / 중성 ㅣ+ㅖ / 종성 )
    {{KC_C, KC_D, KC_L, KC_DOT}, {KC_W, KC_L, KC_G, SFT(KC_P)}},
    // 1155. 일반 약어 | 직업 (초성 ㅈ+ㅇ / 중성  / 종성 ㄱ+ㅂ)
    {{KC_J, KC_L, KC_W, KC_X}, {KC_W, KC_L, KC_R, KC_D, KC_J, KC_Q}},
    // 1155. 일반 약어 | 직업 (초성 ㅈ+ㅇ / 중성  / 종성 ㄱ+ㅂ)
    {{KC_A, KC_E, KC_J, KC_L}, {KC_W, KC_L, KC_R, KC_D, KC_J, KC_Q}},
    // 1156. 일반 약어 | 직원 (초성 ㅈ+ㅇ / 중성  / 종성 ㄱ+ㄴ)
    {{KC_J, KC_L, KC_S, KC_X}, {KC_W, KC_L, KC_R, KC_D, KC_N, KC_J, KC_S}},
    // 1156. 일반 약어 | 직원 (초성 ㅈ+ㅇ / 중성  / 종성 ㄱ+ㄴ)
    {{KC_A, KC_E, KC_J, KC_L}, {KC_W, KC_L, KC_R, KC_D, KC_N, KC_J, KC_S}},
    // 1159. 일반 약어 | 직접적 (초성 ㅈ / 중성 ㅓ / 종성 ㄱ+ㅂ)
    {{KC_L, KC_R, KC_W, KC_X}, {KC_W, KC_L, KC_R, KC_W, KC_J, KC_Q, KC_W, KC_J, KC_R}},
    // 1159. 일반 약어 | 직접적 (초성 ㅈ / 중성 ㅓ / 종성 ㄱ+ㅂ)
    {{KC_A, KC_E, KC_L, KC_R}, {KC_W, KC_L, KC_R, KC_W, KC_J, KC_Q, KC_W, KC_J, KC_R}},
    // 1160. 일반 약어 | 진단 (초성 ㅈ+ㄷ / 중성 ㅣ / 종성 ㄴ)
    {{KC_D, KC_I, KC_L, KC_S}, {KC_W, KC_L, KC_S, KC_E, KC_K, KC_S}},
    // 1161. 일반 약어 | 진리 (초성 ㅈ+ㄹ / 중성 ㅣ / 종성 ㄴ)
    {{KC_D, KC_L, KC_M, KC_S}, {KC_W, KC_L, KC_S, KC_F, KC_L}},
    // 1162. 일반 약어 | 진실 (초성 ㅈ+ㅅ / 중성  / 종성 ㄴ+ㄹ)
    {{KC_E, KC_L, KC_N, KC_S}, {KC_W, KC_L, KC_S, KC_T, KC_L, KC_F}},
    // 1164. 일반 약어 | 질문 (초성 ㅈ+ㅁ / 중성 ㅣ / 종성 ㄹ)
    {{KC_D, KC_E, KC_L, KC_Y}, {KC_W, KC_L, KC_F, KC_A, KC_N, KC_S}},
    // 1165. 일반 약어 | 질서 (초성 ㅈ+ㅅ / 중성 ㅓ / 종성 ㄹ)
    {{KC_E, KC_L, KC_N, KC_R}, {KC_W, KC_L, KC_F, KC_T, KC_J}},
    // 1167. 일반 약어 | 집안 (초성 ㅈ+ㅇ / 중성  / 종성 ㅂ+ㄴ)
    {{KC_J, KC_L, KC_S, KC_W}, {KC_W, KC_L, KC_Q, KC_D, KC_K, KC_S}},
    // 1172. 일반 약어 | 차례 (초성 ㅈ+ㄹ / 중성 ㅖ / 종성 )
    {{KC_C, KC_L, KC_M, KC_DOT}, {KC_C, KC_K, KC_F, SFT(KC_P)}},
    // 1172. 일반 약어 | 차례 (초성 ㅈ+ㄹ / 중성 ㅖ / 종성 )
    {{KC_C, KC_L, KC_M, KC_V}, {KC_C, KC_K, KC_F, SFT(KC_P)}},
    // 1173. 일반 약어 | 차별 (초성 ㅈ+ㅂ / 중성 ㅕ / 종성 ㄹ)
    {{KC_E, KC_L, KC_O, KC_T}, {KC_C, KC_K, KC_Q, KC_U, KC_F}},
    // 1175. 일반 약어 | 차이 (초성 ㅎ+ㅇ / 중성 ㅏ+ㅣ / 종성 )
    {{KC_D, KC_F, KC_H, KC_J}, {KC_C, KC_K, KC_D, KC_L}},
    // 1176. 일반 약어 | 참가 (초성 ㅈ+ㄱ / 중성 ㅏ / 종성 ㅁ)
    {{KC_F, KC_K, KC_L, KC_Z}, {KC_C, KC_K, KC_A, KC_R, KC_K}},
    // 1178. 일반 약어 | 참석 (초성 ㅈ+ㅅ / 중성 ㅓ / 종성 ㄱ)
    {{KC_L, KC_N, KC_R, KC_X}, {KC_C, KC_K, KC_A, KC_T, KC_J, KC_R}},
    // 1179. 일반 약어 | 참여 (초성 ㅎ+ㅇ / 중성 ㅏ / 종성 ㅁ)
    {{KC_F, KC_H, KC_J, KC_Z}, {KC_C, KC_K, KC_A, KC_D, KC_U}},
    // 1181. 일반 약어 | 찾는_ (초성 ㅎ+ㄴ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_H, KC_U}, {KC_C, KC_K, KC_W, KC_S, KC_M, KC_S, KC_SPC}},
    // 1182. 일반 약어 | 찾아 (초성 ㅈ+ㅇ / 중성  / 종성 ㅈ)
    {{KC_E, KC_J, KC_L, KC_SCLN}, {KC_C, KC_K, KC_W, KC_D, KC_K}},
    // 1187. 일반 약어 | 처벌 (초성 ㅈ+ㅂ / 중성 ㅓ / 종성 ㄹ)
    {{KC_E, KC_L, KC_O, KC_R}, {KC_C, KC_J, KC_Q, KC_J, KC_F}},
    // 1189. 일반 약어 | 철학 (초성 ㅈ+ㅎ / 중성  / 종성 ㄹ+ㄱ)
    {{KC_E, KC_H, KC_L, KC_X}, {KC_C, KC_J, KC_F, KC_G, KC_K, KC_R}},
    // 1189. 일반 약어 | 철학 (초성 ㅈ+ㅎ / 중성  / 종성 ㄹ+ㄱ)
    {{KC_A, KC_E, KC_H, KC_L}, {KC_C, KC_J, KC_F, KC_G, KC_K, KC_R}},
    // 1190. 일반 약어 | 청년 (초성 ㅎ+ㄴ / 중성 ㅕ+ㅓ / 종성 )
    {{KC_H, KC_R, KC_T, KC_U}, {KC_C, KC_J, KC_D, KC_S, KC_U, KC_S}},
    // 1192. 일반 약어 | 청소년 (초성 ㅎ+ㄴ / 중성 ㅓ / 종성 ㅇ)
    {{KC_A, KC_H, KC_R, KC_U}, {KC_C, KC_J, KC_D, KC_T, KC_H, KC_S, KC_U, KC_S}},
    // 1193. 일반 약어 | 청와대 (초성 ㅈ+ㄷ / 중성 ㅗ+ㅏ / 종성 )
    {{KC_F, KC_I, KC_L, KC_V}, {KC_C, KC_J, KC_D, KC_D, KC_H, KC_K, KC_E, KC_O}},
    // 1194. 일반 약어 | 체계 (초성 ㅈ+ㄱ / 중성 ㅖ / 종성 )
    {{KC_C, KC_K, KC_L, KC_DOT}, {KC_C, KC_P, KC_R, SFT(KC_P)}},
    // 1194. 일반 약어 | 체계 (초성 ㅈ+ㄱ / 중성 ㅖ / 종성 )
    {{KC_C, KC_K, KC_L, KC_V}, {KC_C, KC_P, KC_R, SFT(KC_P)}},
    // 1195. 일반 약어 | 체육 (초성 ㅎ+ㅇ / 중성 ㅔ+ㅜ / 종성 )
    {{KC_B, KC_C, KC_H, KC_J}, {KC_C, KC_P, KC_D, KC_B, KC_R}},
    // 1196. 일반 약어 | 체험 (초성 ㅊ / 중성 ㅔ+ㅓ / 종성 )
    {{KC_C, KC_H, KC_L, KC_R}, {KC_C, KC_P, KC_G, KC_J, KC_A}},
    // 1197. 일반 약어 | 초기 (초성 ㅈ+ㄱ / 중성 ㅗ+ㅣ / 종성 )
    {{KC_D, KC_K, KC_L, KC_V}, {KC_C, KC_H, KC_R, KC_L}},
    // 1198. 일반 약어 | 총리 (초성 ㅈ+ㄹ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_L, KC_M, KC_V}, {KC_C, KC_H, KC_D, KC_F, KC_L}},
    // 1198. 일반 약어 | 총리 (초성 ㅈ+ㄹ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_L, KC_M, KC_DOT}, {KC_C, KC_H, KC_D, KC_F, KC_L}},
    // 1200. 일반 약어 | 최근_ (초성 ㅈ+ㄱ / 중성 ㅗ+ㅣ / 종성 ㄴ)
    {{KC_K, KC_L, KC_S, KC_DOT}, {KC_C, KC_H, KC_L, KC_R, KC_M, KC_S, KC_SPC}},
    // 1202. 일반 약어 | 축구 (초성 ㅈ+ㄱ / 중성 ㅜ / 종성 ㄱ)
    {{KC_B, KC_K, KC_L, KC_X}, {KC_C, KC_N, KC_R, KC_R, KC_N}},
    // 1203. 일반 약어 | 출발 (초성 ㅈ+ㅂ / 중성 ㅜ / 종성 ㄹ)
    {{KC_B, KC_E, KC_L, KC_O}, {KC_C, KC_N, KC_F, KC_Q, KC_K, KC_F}},
    // 1205. 일반 약어 | 출신 (초성 ㅊ / 중성  / 종성 ㄹ+ㄴ)
    {{KC_E, KC_H, KC_L, KC_S}, {KC_C, KC_N, KC_F, KC_T, KC_L, KC_S}},
    // 1206. 일반 약어 | 출연 (초성 ㅈ+ㅇ / 중성  / 종성 ㄹ+ㄴ)
    {{KC_E, KC_J, KC_L, KC_S}, {KC_C, KC_N, KC_F, KC_D, KC_U, KC_S}},
    // 1207. 일반 약어 | 충격 (초성 ㅈ+ㄱ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_K, KC_L, KC_X}, {KC_C, KC_N, KC_D, KC_R, KC_U, KC_R}},
    // 1207. 일반 약어 | 충격 (초성 ㅈ+ㄱ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_E, KC_K, KC_L}, {KC_C, KC_N, KC_D, KC_R, KC_U, KC_R}},
    // 1208. 일반 약어 | 충분 (초성 ㅈ+ㅂ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_L, KC_O, KC_S}, {KC_C, KC_N, KC_D, KC_Q, KC_N, KC_S}},
    // 1210. 일반 약어 | 측면 (초성 ㅎ+ㅁ / 중성 ㅡ / 종성 ㄱ)
    {{KC_G, KC_H, KC_X, KC_Y}, {KC_C, KC_M, KC_R, KC_A, KC_U, KC_S}},
    // 1211. 일반 약어 | 치게_ (초성 ㅈ+ㄱ / 중성 ㅣ+ㅔ / 종성 )
    {{KC_C, KC_D, KC_K, KC_L}, {KC_C, KC_L, KC_R, KC_P, KC_SPC}},
    // 1212. 일반 약어 | 치는_ (초성 ㅎ+ㄴ / 중성 ㅡ / 종성 ㄴ)
    {{KC_G, KC_H, KC_S, KC_U}, {KC_C, KC_L, KC_S, KC_M, KC_S, KC_SPC}},
    // 1213. 일반 약어 | 치료 (초성 ㅈ+ㄹ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_D, KC_L, KC_M, KC_V}, {KC_C, KC_L, KC_F, KC_Y}},
    // 1214. 일반 약어 | 치마 (초성 ㅎ+ㅁ / 중성 ㅣ+ㅏ / 종성 )
    {{KC_D, KC_F, KC_H, KC_Y}, {KC_C, KC_L, KC_A, KC_K}},
    // 1216. 일반 약어 | 침대 (초성 ㅈ+ㄷ / 중성 ㅣ / 종성 ㅁ)
    {{KC_D, KC_I, KC_L, KC_Z}, {KC_C, KC_L, KC_A, KC_E, KC_O}},
    // 1217. 일반 약어 | 침략 (초성 ㅈ+ㄹ / 중성  / 종성 ㅁ+ㄱ)
    {{KC_L, KC_M, KC_X, KC_Z}, {KC_C, KC_L, KC_A, KC_F, KC_I, KC_R}},
    // 1217. 일반 약어 | 침략 (초성 ㅈ+ㄹ / 중성  / 종성 ㅁ+ㄱ)
    {{KC_A, KC_E, KC_L, KC_M}, {KC_C, KC_L, KC_A, KC_F, KC_I, KC_R}},
    // 1218. 일반 약어 | 침묵 (초성 ㅎ+ㅁ / 중성 ㅣ / 종성 ㅁ)
    {{KC_D, KC_H, KC_Y, KC_Z}, {KC_C, KC_L, KC_A, KC_A, KC_N, KC_R}},
    // 1219. 일반 약어 | 카메라 (초성 ㅎ+ㅁ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_H, KC_Y}, {KC_Z, KC_K, KC_A, KC_P, KC_F, KC_K}},
    // 1220. 일반 약어 | 카페 (초성 ㄱ+ㅂ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_K, KC_O}, {KC_Z, KC_K, KC_V, KC_P}},
    // 1221. 일반 약어 | 커다란_ (초성 ㄱ+ㄹ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_K, KC_M, KC_S}, {KC_Z, KC_J, KC_E, KC_K, KC_F, KC_K, KC_S, KC_SPC}},
    // 1224. 일반 약어 | 코드 (초성 ㄱ+ㄷ / 중성 ㅗ+ㅡ / 종성 )
    {{KC_G, KC_I, KC_K, KC_V}, {KC_Z, KC_H, KC_E, KC_M}},
    // 1225. 일반 약어 | 크게_ (초성 ㅋ / 중성 ㅡ+ㅔ / 종성 )
    {{KC_C, KC_G, KC_H, KC_K}, {KC_Z, KC_M, KC_R, KC_P, KC_SPC}},
    // 1227. 일반 약어 | 킬로 (초성 ㄱ+ㄹ / 중성 ㅣ / 종성 ㄹ)
    {{KC_D, KC_E, KC_K, KC_M}, {KC_Z, KC_L, KC_F, KC_F, KC_H}},
    // 1230. 일반 약어 | 토론 (초성 ㄷ+ㄹ / 중성 ㅗ / 종성 ㄴ)
    {{KC_I, KC_M, KC_S, KC_V}, {KC_X, KC_H, KC_F, KC_H, KC_S}},
    // 1230. 일반 약어 | 토론 (초성 ㄷ+ㄹ / 중성 ㅗ / 종성 ㄴ)
    {{KC_I, KC_M, KC_S, KC_DOT}, {KC_X, KC_H, KC_F, KC_H, KC_S}},
    // 1232. 일반 약어 | 통신 (초성 ㅌ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_H, KC_I, KC_S}, {KC_X, KC_H, KC_D, KC_T, KC_L, KC_S}},
    // 1233. 일반 약어 | 통일 (초성 ㅎ+ㅇ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_H, KC_J, KC_V}, {KC_X, KC_H, KC_D, KC_D, KC_L, KC_F}},
    // 1233. 일반 약어 | 통일 (초성 ㅎ+ㅇ / 중성 ㅗ / 종성 ㅇ)
    {{KC_A, KC_H, KC_J, KC_DOT}, {KC_X, KC_H, KC_D, KC_D, KC_L, KC_F}},
    // 1234. 일반 약어 | 통제 (초성 ㄷ+ㅈ / 중성 ㅗ+ㅔ / 종성 ㅇ)
    {{KC_A, KC_I, KC_L, KC_DOT}, {KC_X, KC_H, KC_D, KC_W, KC_P}},
    // 1235. 일반 약어 | 통합 (초성 ㅌ / 중성  / 종성 ㅇ+ㅂ)
    {{KC_A, KC_H, KC_I, KC_W}, {KC_X, KC_H, KC_D, KC_G, KC_K, KC_Q}},
    // 1236. 일반 약어 | 투자 (초성 ㄷ+ㅈ / 중성 ㅜ+ㅏ / 종성 )
    {{KC_B, KC_F, KC_I, KC_L}, {KC_X, KC_N, KC_W, KC_K}},
    // 1238. 일반 약어 | 특별 (초성 ㄷ+ㅂ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_I, KC_O}, {KC_X, KC_M, KC_R, KC_Q, KC_U, KC_F}},
    // 1239. 일반 약어 | 특성 (초성 ㄷ+ㅅ / 중성  / 종성 ㄱ+ㅇ)
    {{KC_A, KC_I, KC_N, KC_X}, {KC_X, KC_M, KC_R, KC_T, KC_J, KC_D}},
    // 1239. 일반 약어 | 특성 (초성 ㄷ+ㅅ / 중성  / 종성 ㄱ+ㅇ)
    {{KC_A, KC_E, KC_I, KC_N}, {KC_X, KC_M, KC_R, KC_T, KC_J, KC_D}},
    // 1240. 일반 약어 | 특수 (초성 ㄷ+ㅅ / 중성 ㅡ+ㅜ / 종성 )
    {{KC_B, KC_G, KC_I, KC_N}, {KC_X, KC_M, KC_R, KC_T, KC_N}},
    // 1241. 일반 약어 | 특정 (초성 ㅌ / 중성  / 종성 ㄱ+ㅇ)
    {{KC_A, KC_H, KC_I, KC_X}, {KC_X, KC_M, KC_R, KC_W, KC_J, KC_D}},
    // 1241. 일반 약어 | 특정 (초성 ㅌ / 중성  / 종성 ㄱ+ㅇ)
    {{KC_A, KC_E, KC_H, KC_I}, {KC_X, KC_M, KC_R, KC_W, KC_J, KC_D}},
    // 1242. 일반 약어 | 특징 (초성 ㄷ+ㅈ / 중성 ㅡ / 종성 ㄱ)
    {{KC_G, KC_I, KC_L, KC_X}, {KC_X, KC_M, KC_R, KC_W, KC_L, KC_D}},
    // 1243. 일반 약어 | 특히_ (초성 ㅌ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_H, KC_I}, {KC_X, KC_M, KC_R, KC_G, KC_L, KC_SPC}},
    // 1244. 일반 약어 | 틀림없 (초성 ㅌ / 중성  / 종성 ㅄ)
    {{KC_H, KC_I, KC_Q, KC_W}, {KC_X, KC_M, KC_F, KC_F, KC_L, KC_A, KC_D, KC_J, KC_Q, KC_T}},
    // 1245. 일반 약어 | 티브이 (초성 ㄷ+ㅂ / 중성 ㅣ+ㅡ / 종성 )
    {{KC_D, KC_G, KC_I, KC_O}, {KC_X, KC_L, KC_Q, KC_M, KC_D, KC_L}},
    // 1246. 일반 약어 | 파악 (초성 ㅂ+ㅇ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_J, KC_O}, {KC_V, KC_K, KC_D, KC_K, KC_R}},
    // 1247. 일반 약어 | 판결 (초성 ㅂ+ㄱ / 중성 ㅕ / 종성 ㄹ)
    {{KC_E, KC_K, KC_O, KC_T}, {KC_V, KC_K, KC_S, KC_R, KC_U, KC_F}},
    // 1248. 일반 약어 | 판단 (초성 ㅂ+ㄷ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_I, KC_O, KC_S}, {KC_V, KC_K, KC_S, KC_E, KC_K, KC_S}},
    // 1249. 일반 약어 | 판매 (초성 ㅂ+ㅁ / 중성 ㅐ / 종성 )
    {{KC_D, KC_F, KC_O, KC_Y}, {KC_V, KC_K, KC_S, KC_A, KC_O}},
    // 1252. 일반 약어 | 편안 (초성 ㅎ+ㅇ / 중성 ㅕ / 종성 ㄴ)
    {{KC_H, KC_J, KC_S, KC_T}, {KC_V, KC_U, KC_S, KC_D, KC_K, KC_S}},
    // 1253. 일반 약어 | 편지 (초성 ㅂ+ㅈ / 중성 ㅕ / 종성 ㄴ)
    {{KC_L, KC_O, KC_S, KC_T}, {KC_V, KC_U, KC_S, KC_W, KC_L}},
    // 1254. 일반 약어 | 평가 (초성 ㅂ+ㄱ / 중성 ㅕ / 종성 ㅇ)
    {{KC_A, KC_K, KC_O, KC_T}, {KC_V, KC_U, KC_D, KC_R, KC_K}},
    // 1255. 일반 약어 | 평균 (초성 ㅂ+ㄱ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_K, KC_O, KC_S}, {KC_V, KC_U, KC_D, KC_R, KC_B, KC_S}},
    // 1257. 일반 약어 | 평소 (초성 ㅂ+ㅅ / 중성 ㅕ / 종성 ㅇ)
    {{KC_A, KC_N, KC_O, KC_T}, {KC_V, KC_U, KC_D, KC_T, KC_H}},
    // 1259. 일반 약어 | 포기 (초성 ㅂ+ㄱ / 중성 ㅗ+ㅣ / 종성 )
    {{KC_D, KC_K, KC_O, KC_V}, {KC_V, KC_H, KC_R, KC_L}},
    // 1261. 일반 약어 | 폭력 (초성 ㅂ+ㄹ / 중성 ㅗ / 종성 ㄱ)
    {{KC_M, KC_O, KC_V, KC_X}, {KC_V, KC_H, KC_R, KC_F, KC_U, KC_R}},
    // 1261. 일반 약어 | 폭력 (초성 ㅂ+ㄹ / 중성 ㅗ / 종성 ㄱ)
    {{KC_M, KC_O, KC_X, KC_DOT}, {KC_V, KC_H, KC_R, KC_F, KC_U, KC_R}},
    // 1262. 일반 약어 | 표면 (초성 ㅂ+ㅁ / 중성 ㅛ / 종성 )
    {{KC_O, KC_V, KC_Y, KC_DOT}, {KC_V, KC_Y, KC_A, KC_U, KC_S}},
    // 1262. 일반 약어 | 표면 (초성 ㅂ+ㅁ / 중성 ㅛ / 종성 )
    {{KC_F, KC_O, KC_R, KC_Y}, {KC_V, KC_Y, KC_A, KC_U, KC_S}},
    // 1264. 일반 약어 | 표현 (초성 ㅍ / 중성 ㅓ+ㅕ / 종성 )
    {{KC_H, KC_O, KC_R, KC_T}, {KC_V, KC_Y, KC_G, KC_U, KC_S}},
    // 1268. 일반 약어 | 피로 (초성 ㅂ+ㄹ / 중성 ㅣ+ㅗ / 종성 )
    {{KC_D, KC_M, KC_O, KC_V}, {KC_V, KC_L, KC_F, KC_H}},
    // 1280. 일반 약어 | 하신_ (초성 ㅎ+ㅅ / 중성 ㅣ / 종성 ㄴ)
    {{KC_D, KC_H, KC_N, KC_S}, {KC_G, KC_K, KC_T, KC_L, KC_S, KC_SPC}},
    // 1286. 일반 약어 | 학년 (초성 ㅎ+ㄴ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_H, KC_U}, {KC_G, KC_K, KC_R, KC_S, KC_U, KC_S}},
    // 1287. 일반 약어 | 학생 (초성 ㅎ+ㅅ / 중성  / 종성 ㄱ)
    {{KC_A, KC_E, KC_H, KC_N}, {KC_G, KC_K, KC_R, KC_T, KC_O, KC_D}},
    // 1289. 일반 약어 | 한계 (초성 ㅎ+ㄱ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_H, KC_K}, {KC_G, KC_K, KC_S, KC_R, SFT(KC_P)}},
    // 1291. 일반 약어 | 한글 (초성 ㅎ+ㄱ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_H, KC_K}, {KC_G, KC_K, KC_S, KC_R, KC_M, KC_F}},
    // 1294. 일반 약어 | 한복 (초성 ㅎ+ㅂ / 중성  / 종성 ㄴ+ㄱ)
    {{KC_H, KC_O, KC_S, KC_X}, {KC_G, KC_K, KC_S, KC_Q, KC_H, KC_R}},
    // 1294. 일반 약어 | 한복 (초성 ㅎ+ㅂ / 중성  / 종성 ㄴ+ㄱ)
    {{KC_A, KC_E, KC_H, KC_O}, {KC_G, KC_K, KC_S, KC_Q, KC_H, KC_R}},
    // 1295. 일반 약어 | 한숨 (초성 ㅎ+ㅅ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_H, KC_N, KC_S}, {KC_G, KC_K, KC_S, KC_T, KC_N, KC_A}},
    // 1296. 일반 약어 | 한참 (초성 ㅎ+ㅈ / 중성  / 종성 ㄴ+ㅁ)
    {{KC_H, KC_L, KC_S, KC_Z}, {KC_G, KC_K, KC_S, KC_C, KC_K, KC_A}},
    // 1297. 일반 약어 | 한테_ (초성 ㅎ+ㄷ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_H, KC_I}, {KC_G, KC_K, KC_S, KC_X, KC_P, KC_SPC}},
    // 1298. 일반 약어 | 할_수 (초성 ㅎ+ㅅ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_H, KC_N}, {KC_G, KC_K, KC_F, KC_SPC, KC_T, KC_N}},
    // 1299. 일반 약어 | 할_수는_ (초성 ㅎ+ㅅ / 중성  / 종성 ㄹ+ㄴ)
    {{KC_E, KC_H, KC_N, KC_S}, {KC_G, KC_K, KC_F, KC_SPC, KC_T, KC_N, KC_S, KC_M, KC_S, KC_SPC}},
    // 1301. 일반 약어 | 할아버지 (초성 ㅂ+ㅈ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_L, KC_O}, {KC_G, KC_K, KC_F, KC_D, KC_K, KC_Q, KC_J, KC_W, KC_L}},
    // 1306. 일반 약어 | 해석 (초성 ㅎ+ㅅ / 중성 ㅓ / 종성 ㄱ)
    {{KC_H, KC_N, KC_R, KC_X}, {KC_G, KC_O, KC_T, KC_J, KC_R}},
    // 1310. 일반 약어 | 행복 (초성 ㅎ+ㅂ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_H, KC_O, KC_X}, {KC_G, KC_O, KC_D, KC_Q, KC_H, KC_R}},
    // 1310. 일반 약어 | 행복 (초성 ㅎ+ㅂ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_E, KC_H, KC_O}, {KC_G, KC_O, KC_D, KC_Q, KC_H, KC_R}},
    // 1314. 일반 약어 | 헤어 (초성 ㅎ+ㅇ / 중성 ㅔ+ㅓ / 종성 )
    {{KC_C, KC_H, KC_J, KC_R}, {KC_G, KC_P, KC_D, KC_J}},
    // 1316. 일반 약어 | 현실 (초성 ㅎ+ㅅ / 중성 ㅕ / 종성 ㄴ)
    {{KC_H, KC_N, KC_S, KC_T}, {KC_G, KC_U, KC_S, KC_T, KC_L, KC_F}},
    // 1318. 일반 약어 | 현장 (초성 ㅎ+ㅈ / 중성  / 종성 ㄴ+ㅇ)
    {{KC_A, KC_H, KC_L, KC_S}, {KC_G, KC_U, KC_S, KC_W, KC_K, KC_D}},
    // 1319. 일반 약어 | 현저 (초성 ㅎ / 중성 ㅕ+ㅓ / 종성 ㄴ)
    {{KC_H, KC_R, KC_S, KC_T}, {KC_G, KC_U, KC_S, KC_W, KC_J}},
    // 1321. 일반 약어 | 형님 (초성 ㅎ+ㄴ / 중성 ㅕ / 종성 ㅇ)
    {{KC_A, KC_H, KC_T, KC_U}, {KC_G, KC_U, KC_D, KC_S, KC_L, KC_A}},
    // 1322. 일반 약어 | 형사 (초성 ㅎ+ㅅ / 중성 ㅕ / 종성 ㅇ)
    {{KC_A, KC_H, KC_N, KC_T}, {KC_G, KC_U, KC_D, KC_T, KC_K}},
    // 1324. 일반 약어 | 형식 (초성 ㅎ+ㅅ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_H, KC_N, KC_X}, {KC_G, KC_U, KC_D, KC_T, KC_L, KC_R}},
    // 1324. 일반 약어 | 형식 (초성 ㅎ+ㅅ / 중성  / 종성 ㅇ+ㄱ)
    {{KC_A, KC_E, KC_H, KC_N}, {KC_G, KC_U, KC_D, KC_T, KC_L, KC_R}},
    // 1325. 일반 약어 | 형제 (초성 ㅎ+ㅈ / 중성 ㅕ+ㅔ / 종성 )
    {{KC_C, KC_H, KC_L, KC_T}, {KC_G, KC_U, KC_D, KC_W, KC_P}},
    // 1326. 일반 약어 | 형편 (초성 ㅎ+ㅂ / 중성  / 종성 ㅇ+ㄴ)
    {{KC_A, KC_H, KC_O, KC_S}, {KC_G, KC_U, KC_D, KC_V, KC_U, KC_S}},
    // 1327. 일반 약어 | 호랑이 (초성 ㅎ+ㄹ / 중성 ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_H, KC_M}, {KC_G, KC_H, KC_F, KC_K, KC_D, KC_D, KC_L}},
    // 1328. 일반 약어 | 혹시_ (초성 ㅎ+ㅅ / 중성 ㅗ / 종성 ㄱ)
    {{KC_H, KC_N, KC_V, KC_X}, {KC_G, KC_H, KC_R, KC_T, KC_L, KC_SPC}},
    // 1328. 일반 약어 | 혹시_ (초성 ㅎ+ㅅ / 중성 ㅗ / 종성 ㄱ)
    {{KC_H, KC_N, KC_X, KC_DOT}, {KC_G, KC_H, KC_R, KC_T, KC_L, KC_SPC}},
    // 1329. 일반 약어 | 혹은_ (초성 ㅎ+ㅇ / 중성 ㅗ / 종성 ㄱ)
    {{KC_H, KC_J, KC_V, KC_X}, {KC_G, KC_H, KC_R, KC_D, KC_M, KC_S, KC_SPC}},
    // 1329. 일반 약어 | 혹은_ (초성 ㅎ+ㅇ / 중성 ㅗ / 종성 ㄱ)
    {{KC_H, KC_J, KC_X, KC_DOT}, {KC_G, KC_H, KC_R, KC_D, KC_M, KC_S, KC_SPC}},
    // 1330. 일반 약어 | 화려 (초성 ㅎ+ㄹ / 중성 ㅘ / 종성 )
    {{KC_F, KC_H, KC_M, KC_DOT}, {KC_G, KC_H, KC_K, KC_F, KC_U}},
    // 1330. 일반 약어 | 화려 (초성 ㅎ+ㄹ / 중성 ㅘ / 종성 )
    {{KC_F, KC_H, KC_M, KC_V}, {KC_G, KC_H, KC_K, KC_F, KC_U}},
    // 1331. 일반 약어 | 화면 (초성 ㅎ+ㅁ / 중성 ㅕ / 종성 ㄴ)
    {{KC_H, KC_S, KC_T, KC_Y}, {KC_G, KC_H, KC_K, KC_A, KC_U, KC_S}},
    // 1333. 일반 약어 | 화장품 (초성 ㅈ+ㅂ / 중성 ㅘ / 종성 )
    {{KC_F, KC_L, KC_O, KC_DOT}, {KC_G, KC_H, KC_K, KC_W, KC_K, KC_D, KC_V, KC_N, KC_A}},
    // 1333. 일반 약어 | 화장품 (초성 ㅈ+ㅂ / 중성 ㅘ / 종성 )
    {{KC_F, KC_L, KC_O, KC_V}, {KC_G, KC_H, KC_K, KC_W, KC_K, KC_D, KC_V, KC_N, KC_A}},
    // 1334. 일반 약어 | 화제 (초성 ㅎ+ㅈ / 중성 ㅏ+ㅔ / 종성 )
    {{KC_C, KC_F, KC_H, KC_L}, {KC_G, KC_H, KC_K, KC_W, KC_P}},
    // 1335. 일반 약어 | 확실 (초성 ㅎ+ㅅ / 중성  / 종성 ㄱ+ㄹ)
    {{KC_E, KC_H, KC_N, KC_X}, {KC_G, KC_H, KC_K, KC_R, KC_T, KC_L, KC_F}},
    // 1335. 일반 약어 | 확실 (초성 ㅎ+ㅅ / 중성  / 종성 ㄱ+ㄹ)
    {{KC_A, KC_E, KC_H, KC_N}, {KC_G, KC_H, KC_K, KC_R, KC_T, KC_L, KC_F}},
    // 1336. 일반 약어 | 확인 (초성 ㅎ+ㅇ / 중성  / 종성 ㄱ+ㄴ)
    {{KC_H, KC_J, KC_S, KC_X}, {KC_G, KC_H, KC_K, KC_R, KC_D, KC_L, KC_S}},
    // 1336. 일반 약어 | 확인 (초성 ㅎ+ㅇ / 중성  / 종성 ㄱ+ㄴ)
    {{KC_A, KC_E, KC_H, KC_J}, {KC_G, KC_H, KC_K, KC_R, KC_D, KC_L, KC_S}},
    // 1340. 일반 약어 | 회사 (초성 ㅎ+ㅅ / 중성 ㅚ / 종성 )
    {{KC_D, KC_H, KC_N, KC_DOT}, {KC_G, KC_H, KC_L, KC_T, KC_K}},
    // 1340. 일반 약어 | 회사 (초성 ㅎ+ㅅ / 중성 ㅚ / 종성 )
    {{KC_D, KC_H, KC_N, KC_V}, {KC_G, KC_H, KC_L, KC_T, KC_K}},
    // 1341. 일반 약어 | 회원 (초성 ㅎ+ㅇ / 중성 ㅗ+ㅣ / 종성 ㄴ)
    {{KC_H, KC_J, KC_S, KC_DOT}, {KC_G, KC_H, KC_L, KC_D, KC_N, KC_J, KC_S}},
    // 1342. 일반 약어 | 회의 (초성 ㅎ+ㅇ / 중성 ㅚ / 종성 )
    {{KC_D, KC_H, KC_J, KC_DOT}, {KC_G, KC_H, KC_L, KC_D, KC_M, KC_L}},
    // 1342. 일반 약어 | 회의 (초성 ㅎ+ㅇ / 중성 ㅚ / 종성 )
    {{KC_D, KC_H, KC_J, KC_V}, {KC_G, KC_H, KC_L, KC_D, KC_M, KC_L}},
    // 1348. 일반 약어 | 흥미 (초성 ㅎ+ㅁ / 중성 ㅡ / 종성 ㅇ)
    {{KC_A, KC_G, KC_H, KC_Y}, {KC_G, KC_M, KC_D, KC_A, KC_L}},
    // 1349. 일반 약어 | 흥미로운_ (초성 ㅎ+ㅁ / 중성 ㅜ / 종성 ㄴ)
    {{KC_B, KC_H, KC_S, KC_Y}, {KC_G, KC_M, KC_D, KC_A, KC_L, KC_F, KC_H, KC_D, KC_N, KC_S, KC_SPC}},
    // 2. 사용자 약어 | 결말 (초성 ㄱ+ㅁ / 중성 ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_K, KC_Y}, {KC_R, KC_U, KC_F, KC_A, KC_K, KC_F}},
    // 3. 사용자 약어 | 창의성 (초성 ㅈ+ㅅ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_L, KC_N}, {KC_C, KC_K, KC_D, KC_D, KC_M, KC_L, KC_T, KC_J, KC_D}},
    // 4. 사용자 약어 | 창의력 (초성 ㅈ+ㄹ / 중성 ㅏ+ㅡ / 종성 )
    {{KC_F, KC_G, KC_L, KC_M}, {KC_C, KC_K, KC_D, KC_D, KC_M, KC_L, KC_F, KC_U, KC_R}},
    // 10. 사용자 약어 | 이야기 (초성 ㅇ / 중성 ㅣ+ㅏ+ㅡ / 종성 )
    {{KC_D, KC_F, KC_G, KC_J}, {KC_D, KC_L, KC_D, KC_I, KC_R, KC_L}},
    // 4. 일반 약어 | 가끔_ (초성 ㄲ / 중성 ㅏ+ㅡ / 종성 ㅁ)
    {{KC_F, KC_G, KC_J, KC_K, KC_Z}, {KC_R, KC_K, SFT(KC_R), KC_M, KC_A, KC_SPC}},
    // 8. 일반 약어 | 가득_ (초성 ㄱ+ㄷ / 중성 ㅡ / 종성 ㄱ)
    {{KC_A, KC_E, KC_G, KC_I, KC_K}, {KC_R, KC_K, KC_E, KC_M, KC_R, KC_SPC}},
    // 9. 일반 약어 | 가락 (초성 ㄱ+ㄹ / 중성 ㅏ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_K, KC_M}, {KC_R, KC_K, KC_F, KC_K, KC_R}},
    // 19. 일반 약어 | 가을 (초성 ㄱ+ㅇ / 중성 ㅏ+ㅡ / 종성 ㄹ)
    {{KC_E, KC_F, KC_G, KC_J, KC_K}, {KC_R, KC_K, KC_D, KC_M, KC_F}},
    // 23. 일반 약어 | 가족 (초성 ㄱ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_L, KC_V}, {KC_R, KC_K, KC_W, KC_H, KC_R}},
    // 23. 일반 약어 | 가족 (초성 ㄱ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_L, KC_DOT}, {KC_R, KC_K, KC_W, KC_H, KC_R}},
    // 32. 일반 약어 | 감정 (초성 ㄱ+ㅈ / 중성 ㅏ+ㅓ / 종성 ㅁ)
    {{KC_F, KC_K, KC_L, KC_R, KC_Z}, {KC_R, KC_K, KC_A, KC_W, KC_J, KC_D}},
    // 35. 일반 약어 | 강제 (초성 ㄱ+ㅈ / 중성 ㅏ+ㅔ / 종성 ㅇ)
    {{KC_A, KC_C, KC_F, KC_K, KC_L}, {KC_R, KC_K, KC_D, KC_W, KC_P}},
    // 36. 일반 약어 | 강조 (초성 ㄱ+ㅈ / 중성 ㅏ+ㅗ / 종성 ㅇ)
    {{KC_A, KC_F, KC_K, KC_L, KC_V}, {KC_R, KC_K, KC_D, KC_W, KC_H}},
    // 38. 일반 약어 | 같이_ (초성 ㄱ+ㅇ / 중성  / 종성 ㅌ)
    {{KC_E, KC_J, KC_K, KC_W, KC_SCLN}, {KC_R, KC_K, KC_X, KC_D, KC_L, KC_SPC}},
    // 41. 일반 약어 | 개방 (초성 ㄱ+ㅂ / 중성 ㅐ / 종성 ㅇ)
    {{KC_A, KC_D, KC_F, KC_K, KC_O}, {KC_R, KC_O, KC_Q, KC_K, KC_D}},
    // 42. 일반 약어 | 개선 (초성 ㄱ+ㅅ / 중성 ㅐ / 종성 ㄴ)
    {{KC_D, KC_F, KC_K, KC_N, KC_S}, {KC_R, KC_O, KC_T, KC_J, KC_S}},
    // 43. 일반 약어 | 개성 (초성 ㄱ+ㅅ / 중성 ㅏ+ㅓ / 종성 ㅇ)
    {{KC_A, KC_F, KC_K, KC_N, KC_R}, {KC_R, KC_O, KC_T, KC_J, KC_D}},
    // 44. 일반 약어 | 개월 (초성 ㄱ+ㅇ / 중성 ㅏ+ㅜ / 종성 ㄹ)
    {{KC_B, KC_E, KC_F, KC_J, KC_K}, {KC_R, KC_O, KC_D, KC_N, KC_J, KC_F}},
    // 45. 일반 약어 | 개인적 (초성 ㄱ+ㅈ / 중성 ㅐ / 종성 ㄱ)
    {{KC_D, KC_F, KC_K, KC_L, KC_X}, {KC_R, KC_O, KC_D, KC_L, KC_S, KC_W, KC_J, KC_R}},
    // 49. 일반 약어 | 거든 (초성 ㄱ+ㄷ / 중성 ㅓ+ㅡ / 종성 ㄴ)
    {{KC_G, KC_I, KC_K, KC_R, KC_S}, {KC_R, KC_J, KC_E, KC_M, KC_S}},
    // 50. 일반 약어 | 거듭 (초성 ㄱ+ㄷ / 중성 ㅓ+ㅡ / 종성 ㅂ)
    {{KC_G, KC_I, KC_K, KC_R, KC_W}, {KC_R, KC_J, KC_E, KC_M, KC_Q}},
    // 56. 일반 약어 | 걱정 (초성 ㄱ+ㅈ / 중성 ㅓ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_L, KC_R}, {KC_R, KC_J, KC_R, KC_W, KC_J, KC_D}},
    // 60. 일반 약어 | 걸음 (초성 ㄱ+ㅇ / 중성 ㅓ+ㅡ / 종성 ㄹ)
    {{KC_E, KC_G, KC_J, KC_K, KC_R}, {KC_R, KC_J, KC_F, KC_D, KC_M, KC_A}},
    // 70. 일반 약어 | 겨울 (초성 ㄱ+ㅇ / 중성 ㅕ+ㅜ / 종성 ㄹ)
    {{KC_B, KC_E, KC_J, KC_K, KC_T}, {KC_R, KC_U, KC_D, KC_N, KC_F}},
    // 81. 일반 약어 | 경쟁 (초성 ㄱ+ㅈ / 중성 ㅐ / 종성 ㅇ)
    {{KC_A, KC_D, KC_F, KC_K, KC_L}, {KC_R, KC_U, KC_D, KC_W, KC_O, KC_D}},
    // 83. 일반 약어 | 경제적 (초성 ㄱ+ㅈ / 중성 ㅕ+ㅓ / 종성 ㅇ)
    {{KC_A, KC_K, KC_L, KC_R, KC_T}, {KC_R, KC_U, KC_D, KC_W, KC_P, KC_W, KC_J, KC_R}},
    // 89. 일반 약어 | 계산 (초성 ㄱ+ㅅ / 중성 ㅖ / 종성 ㄴ)
    {{KC_C, KC_K, KC_N, KC_S, KC_DOT}, {KC_R, SFT(KC_P), KC_T, KC_K, KC_S}},
    // 89. 일반 약어 | 계산 (초성 ㄱ+ㅅ / 중성 ㅖ / 종성 ㄴ)
    {{KC_C, KC_K, KC_N, KC_S, KC_V}, {KC_R, SFT(KC_P), KC_T, KC_K, KC_S}},
    // 90. 일반 약어 | 계속 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_N, KC_V}, {KC_R, SFT(KC_P), KC_T, KC_H, KC_R}},
    // 90. 일반 약어 | 계속 (초성 ㅅ+ㄱ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_N, KC_DOT}, {KC_R, SFT(KC_P), KC_T, KC_H, KC_R}},
    // 92. 일반 약어 | 계절 (초성 ㄱ+ㅈ / 중성 ㅔ+ㅓ / 종성 ㄹ)
    {{KC_C, KC_E, KC_K, KC_L, KC_R}, {KC_R, SFT(KC_P), KC_W, KC_J, KC_F}},
    // 94. 일반 약어 | 계획 (초성 ㄱ / 중성 ㅔ+ㅚ / 종성 ㄱ)
    {{KC_C, KC_D, KC_K, KC_X, KC_DOT}, {KC_R, SFT(KC_P), KC_G, KC_H, KC_L, KC_R}},
    // 94. 일반 약어 | 계획 (초성 ㄱ / 중성 ㅔ+ㅚ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_K, KC_V}, {KC_R, SFT(KC_P), KC_G, KC_H, KC_L, KC_R}},
    // 98. 일반 약어 | 고대 (초성 ㄱ+ㄷ / 중성 ㅗ+ㅐ / 종성 )
    {{KC_D, KC_F, KC_I, KC_K, KC_V}, {KC_R, KC_H, KC_E, KC_O}},
    // 111. 일반 약어 | 공사 (초성 ㄱ+ㅅ / 중성 ㅗ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_K, KC_N, KC_V}, {KC_R, KC_H, KC_D, KC_T, KC_K}},
    // 113. 일반 약어 | 공식 (초성 ㄱ+ㅅ / 중성 ㅗ+ㅣ / 종성 ㄱ)
    {{KC_D, KC_K, KC_N, KC_V, KC_X}, {KC_R, KC_H, KC_D, KC_T, KC_L, KC_R}},
    // 113. 일반 약어 | 공식 (초성 ㄱ+ㅅ / 중성 ㅗ+ㅣ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_N, KC_DOT}, {KC_R, KC_H, KC_D, KC_T, KC_L, KC_R}},
    // 120. 일반 약어 | 과학자 (초성 ㄱ+ㅈ / 중성 ㅗ+ㅏ / 종성 ㄱ)
    {{KC_F, KC_K, KC_L, KC_V, KC_X}, {KC_R, KC_H, KC_K, KC_G, KC_K, KC_R, KC_W, KC_K}},
    // 120. 일반 약어 | 과학자 (초성 ㄱ+ㅈ / 중성 ㅗ+ㅏ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_L, KC_DOT}, {KC_R, KC_H, KC_K, KC_G, KC_K, KC_R, KC_W, KC_K}},
    // 121. 일반 약어 | 과학적 (초성 ㄱ+ㅈ / 중성 ㅗ+ㅓ / 종성 ㄱ)
    {{KC_K, KC_L, KC_R, KC_V, KC_X}, {KC_R, KC_H, KC_K, KC_G, KC_K, KC_R, KC_W, KC_J, KC_R}},
    // 121. 일반 약어 | 과학적 (초성 ㄱ+ㅈ / 중성 ㅗ+ㅓ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_L, KC_DOT}, {KC_R, KC_H, KC_K, KC_G, KC_K, KC_R, KC_W, KC_J, KC_R}},
    // 122. 일반 약어 | 관객 (초성 ㄱ / 중성 ㅘ / 종성 ㄴ+ㄱ)
    {{KC_F, KC_K, KC_S, KC_X, KC_DOT}, {KC_R, KC_H, KC_K, KC_S, KC_R, KC_O, KC_R}},
    // 122. 일반 약어 | 관객 (초성 ㄱ / 중성 ㅘ / 종성 ㄴ+ㄱ)
    {{KC_F, KC_K, KC_S, KC_V, KC_X}, {KC_R, KC_H, KC_K, KC_S, KC_R, KC_O, KC_R}},
    // 122. 일반 약어 | 관객 (초성 ㄱ / 중성 ㅘ / 종성 ㄴ+ㄱ)
    {{KC_A, KC_E, KC_F, KC_K, KC_DOT}, {KC_R, KC_H, KC_K, KC_S, KC_R, KC_O, KC_R}},
    // 122. 일반 약어 | 관객 (초성 ㄱ / 중성 ㅘ / 종성 ㄴ+ㄱ)
    {{KC_A, KC_E, KC_F, KC_K, KC_V}, {KC_R, KC_H, KC_K, KC_S, KC_R, KC_O, KC_R}},
    // 127. 일반 약어 | 관리 (초성 ㄱ+ㄹ / 중성 ㅘ / 종성 ㄴ)
    {{KC_F, KC_K, KC_M, KC_S, KC_DOT}, {KC_R, KC_H, KC_K, KC_S, KC_F, KC_L}},
    // 127. 일반 약어 | 관리 (초성 ㄱ+ㄹ / 중성 ㅘ / 종성 ㄴ)
    {{KC_F, KC_K, KC_M, KC_S, KC_V}, {KC_R, KC_H, KC_K, KC_S, KC_F, KC_L}},
    // 129. 일반 약어 | 관악 (초성 ㄱ+ㅇ / 중성 ㅏ / 종성 ㄴ+ㄱ)
    {{KC_F, KC_J, KC_K, KC_S, KC_X}, {KC_R, KC_H, KC_K, KC_S, KC_D, KC_K, KC_R}},
    // 129. 일반 약어 | 관악 (초성 ㄱ+ㅇ / 중성 ㅏ / 종성 ㄴ+ㄱ)
    {{KC_A, KC_E, KC_F, KC_J, KC_K}, {KC_R, KC_H, KC_K, KC_S, KC_D, KC_K, KC_R}},
    // 130. 일반 약어 | 관점 (초성 ㄱ+ㅈ / 중성 ㅘ / 종성 ㄴ)
    {{KC_F, KC_K, KC_L, KC_S, KC_DOT}, {KC_R, KC_H, KC_K, KC_S, KC_W, KC_J, KC_A}},
    // 130. 일반 약어 | 관점 (초성 ㄱ+ㅈ / 중성 ㅘ / 종성 ㄴ)
    {{KC_F, KC_K, KC_L, KC_S, KC_V}, {KC_R, KC_H, KC_K, KC_S, KC_W, KC_J, KC_A}},
    // 133. 일반 약어 | 광주 (초성 ㄱ+ㅈ / 중성 ㅏ+ㅜ / 종성 ㅇ)
    {{KC_A, KC_B, KC_F, KC_K, KC_L}, {KC_R, KC_H, KC_K, KC_D, KC_W, KC_N}},
    // 135. 일반 약어 | 굉장 (초성 ㄱ+ㅈ / 중성 ㅚ / 종성 ㅇ)
    {{KC_A, KC_D, KC_K, KC_L, KC_DOT}, {KC_R, KC_H, KC_L, KC_D, KC_W, KC_K, KC_D}},
    // 135. 일반 약어 | 굉장 (초성 ㄱ+ㅈ / 중성 ㅚ / 종성 ㅇ)
    {{KC_A, KC_D, KC_K, KC_L, KC_V}, {KC_R, KC_H, KC_L, KC_D, KC_W, KC_K, KC_D}},
    // 139. 일반 약어 | 교장 (초성 ㄱ+ㅈ / 중성 ㅛ / 종성 ㅇ)
    {{KC_A, KC_K, KC_L, KC_V, KC_DOT}, {KC_R, KC_Y, KC_W, KC_K, KC_D}},
    // 139. 일반 약어 | 교장 (초성 ㄱ+ㅈ / 중성 ㅛ / 종성 ㅇ)
    {{KC_A, KC_F, KC_K, KC_L, KC_R}, {KC_R, KC_Y, KC_W, KC_K, KC_D}},
    // 140. 일반 약어 | 교통 (초성 ㄱ+ㄷ / 중성 ㅛ / 종성 ㅇ)
    {{KC_A, KC_I, KC_K, KC_V, KC_DOT}, {KC_R, KC_Y, KC_X, KC_H, KC_D}},
    // 140. 일반 약어 | 교통 (초성 ㄱ+ㄷ / 중성 ㅛ / 종성 ㅇ)
    {{KC_A, KC_F, KC_I, KC_K, KC_R}, {KC_R, KC_Y, KC_X, KC_H, KC_D}},
    // 146. 일반 약어 | 구석 (초성 ㄱ+ㅅ / 중성 ㅓ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_N, KC_R}, {KC_R, KC_N, KC_T, KC_J, KC_R}},
    // 148. 일반 약어 | 구속 (초성 ㄱ+ㅅ / 중성 ㅜ / 종성 ㄱ)
    {{KC_A, KC_B, KC_E, KC_K, KC_N}, {KC_R, KC_N, KC_T, KC_H, KC_R}},
    // 152. 일반 약어 | 국내 (초성 ㄱ / 중성 ㅜ+ㅏ / 종성 ㄱ)
    {{KC_A, KC_B, KC_E, KC_F, KC_K}, {KC_R, KC_N, KC_R, KC_S, KC_O}},
    // 154. 일반 약어 | 국제 (초성 ㄱ+ㅈ / 중성 ㅜ+ㅔ / 종성 ㄱ)
    {{KC_B, KC_C, KC_K, KC_L, KC_X}, {KC_R, KC_N, KC_R, KC_W, KC_P}},
    // 156. 일반 약어 | 군사 (초성 ㄱ+ㅅ / 중성 ㅜ+ㅏ / 종성 ㄴ)
    {{KC_B, KC_F, KC_K, KC_N, KC_S}, {KC_R, KC_N, KC_S, KC_T, KC_K}},
    // 159. 일반 약어 | 권리 (초성 ㄱ+ㄹ / 중성 ㅝ / 종성 ㄴ)
    {{KC_K, KC_M, KC_R, KC_S, KC_DOT}, {KC_R, KC_N, KC_J, KC_S, KC_F, KC_L}},
    // 159. 일반 약어 | 권리 (초성 ㄱ+ㄹ / 중성 ㅝ / 종성 ㄴ)
    {{KC_B, KC_K, KC_M, KC_R, KC_S}, {KC_R, KC_N, KC_J, KC_S, KC_F, KC_L}},
    // 160. 일반 약어 | 귀족 (초성 ㄱ+ㅈ / 중성 ㅣ+ㅗ / 종성 ㄱ)
    {{KC_D, KC_K, KC_L, KC_V, KC_X}, {KC_R, KC_N, KC_L, KC_W, KC_H, KC_R}},
    // 160. 일반 약어 | 귀족 (초성 ㄱ+ㅈ / 중성 ㅣ+ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_L, KC_DOT}, {KC_R, KC_N, KC_L, KC_W, KC_H, KC_R}},
    // 181. 일반 약어 | 그러려면_ (초성 ㄱ+ㄹ / 중성 ㅓ+ㅕ / 종성 ㄴ)
    {{KC_K, KC_M, KC_R, KC_S, KC_T}, {KC_R, KC_M, KC_F, KC_J, KC_F, KC_U, KC_A, KC_U, KC_S, KC_SPC}},
    // 194. 일반 약어 | 그림자 (초성 ㄱ+ㅈ / 중성 ㅡ+ㅏ / 종성 ㅁ)
    {{KC_F, KC_G, KC_K, KC_L, KC_Z}, {KC_R, KC_M, KC_F, KC_L, KC_A, KC_W, KC_K}},
    // 200. 일반 약어 | 극장 (초성 ㄱ+ㅈ / 중성 ㅡ+ㅏ / 종성 ㄱ)
    {{KC_F, KC_G, KC_K, KC_L, KC_X}, {KC_R, KC_M, KC_R, KC_W, KC_K, KC_D}},
    // 205. 일반 약어 | 근본적 (초성 ㄱ+ㅂ / 중성 ㅡ / 종성 ㄱ)
    {{KC_A, KC_E, KC_G, KC_K, KC_O}, {KC_R, KC_M, KC_S, KC_Q, KC_H, KC_S, KC_W, KC_J, KC_R}},
    // 206. 일반 약어 | 근원 (초성 ㄱ+ㅇ / 중성 ㅡ+ㅓ / 종성 ㄴ)
    {{KC_G, KC_J, KC_K, KC_R, KC_S}, {KC_R, KC_M, KC_S, KC_D, KC_N, KC_J, KC_S}},
    // 212. 일반 약어 | 금지 (초성 ㄱ+ㅈ / 중성 ㅡ+ㅣ / 종성 ㅁ)
    {{KC_D, KC_G, KC_K, KC_L, KC_Z}, {KC_R, KC_M, KC_A, KC_W, KC_L}},
    // 219. 일반 약어 | 기록 (초성 ㄱ+ㄹ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_M, KC_V}, {KC_R, KC_L, KC_F, KC_H, KC_R}},
    // 219. 일반 약어 | 기록 (초성 ㄱ+ㄹ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_M, KC_DOT}, {KC_R, KC_L, KC_F, KC_H, KC_R}},
    // 222. 일반 약어 | 기본적 (초성 ㄱ+ㅂ / 중성 ㅣ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_K, KC_O}, {KC_R, KC_L, KC_Q, KC_H, KC_S, KC_W, KC_J, KC_R}},
    // 226. 일반 약어 | 기상 (초성 ㄱ+ㅅ / 중성 ㅣ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_D, KC_F, KC_K, KC_N}, {KC_R, KC_L, KC_T, KC_K, KC_D}},
    // 231. 일반 약어 | 긴장 (초성 ㄱ+ㅈ / 중성 ㅣ / 종성 ㄴ+ㅇ)
    {{KC_A, KC_D, KC_K, KC_L, KC_S}, {KC_R, KC_L, KC_S, KC_W, KC_K, KC_D}},
    // 232. 일반 약어 | 김정 (초성 ㄱ+ㅈ / 중성 ㅣ / 종성 ㅁ+ㅇ)
    {{KC_A, KC_D, KC_K, KC_L, KC_Z}, {KC_R, KC_L, KC_A, KC_W, KC_J, KC_D}},
    // 238. 일반 약어 | 깨끗 (초성 ㄲ / 중성 ㅏ+ㅡ / 종성 ㅅ)
    {{KC_F, KC_G, KC_J, KC_K, KC_Q}, {SFT(KC_R), KC_O, SFT(KC_R), KC_M, KC_T}},
    // 257. 일반 약어 | 남쪽 (초성 ㄴ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_U, KC_V}, {KC_S, KC_K, KC_A, SFT(KC_W), KC_H, KC_R}},
    // 257. 일반 약어 | 남쪽 (초성 ㄴ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_U, KC_DOT}, {KC_S, KC_K, KC_A, SFT(KC_W), KC_H, KC_R}},
    // 269. 일반 약어 | 냄새 (초성 ㄴ+ㅅ / 중성 ㅐ / 종성 ㅁ)
    {{KC_D, KC_F, KC_N, KC_U, KC_Z}, {KC_S, KC_O, KC_A, KC_T, KC_O}},
    // 346. 일반 약어 | 대책 (초성 ㄷ+ㅈ / 중성 ㅐ / 종성 ㄱ)
    {{KC_D, KC_F, KC_I, KC_L, KC_X}, {KC_E, KC_O, KC_C, KC_O, KC_R}},
    // 350. 일반 약어 | 대표적 (초성 ㄷ+ㅂ / 중성 ㅛ / 종성 ㄱ)
    {{KC_I, KC_O, KC_V, KC_X, KC_DOT}, {KC_E, KC_O, KC_V, KC_Y, KC_W, KC_J, KC_R}},
    // 350. 일반 약어 | 대표적 (초성 ㄷ+ㅂ / 중성 ㅛ / 종성 ㄱ)
    {{KC_F, KC_I, KC_O, KC_R, KC_X}, {KC_E, KC_O, KC_V, KC_Y, KC_W, KC_J, KC_R}},
    // 355. 일반 약어 | 더군._ (초성 ㄷ+ㄱ / 중성 ㅓ+ㅜ / 종성 ㄴ)
    {{KC_B, KC_I, KC_K, KC_R, KC_S}, {KC_E, KC_J, KC_R, KC_N, KC_S, KC_DOT, KC_SPC}},
    // 366. 일반 약어 | 도착 (초성 ㄷ+ㅈ / 중성 ㅏ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_I, KC_L}, {KC_E, KC_H, KC_C, KC_K, KC_R}},
    // 373. 일반 약어 | 동생 (초성 ㄷ+ㅅ / 중성 ㅐ / 종성 ㅇ)
    {{KC_A, KC_D, KC_F, KC_I, KC_N}, {KC_E, KC_H, KC_D, KC_T, KC_O, KC_D}},
    // 377. 일반 약어 | 동쪽 (초성 ㄷ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_I, KC_L, KC_V}, {KC_E, KC_H, KC_D, SFT(KC_W), KC_H, KC_R}},
    // 377. 일반 약어 | 동쪽 (초성 ㄷ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_I, KC_L, KC_DOT}, {KC_E, KC_H, KC_D, SFT(KC_W), KC_H, KC_R}},
    // 386. 일반 약어 | 든가 (초성 ㄷ+ㄱ / 중성 ㅡ+ㅏ / 종성 ㄴ)
    {{KC_F, KC_G, KC_I, KC_K, KC_S}, {KC_E, KC_M, KC_S, KC_R, KC_K}},
    // 399. 일반 약어 | 때로_ (초성 ㄷ+ㄹ / 중성 ㅐ+ㅗ / 종성 )
    {{KC_D, KC_F, KC_I, KC_M, KC_V}, {SFT(KC_E), KC_O, KC_F, KC_H, KC_SPC}},
    // 401. 일반 약어 | 떠들 (초성 ㄸ / 중성 ㅓ+ㅡ / 종성 ㄹ)
    {{KC_E, KC_G, KC_I, KC_J, KC_R}, {SFT(KC_E), KC_J, KC_E, KC_M, KC_F}},
    // 403. 일반 약어 | 또다시_ (초성 ㄷ+ㅅ / 중성 ㅗ+ㅏ+ㅣ / 종성 )
    {{KC_D, KC_F, KC_I, KC_N, KC_V}, {SFT(KC_E), KC_H, KC_E, KC_K, KC_T, KC_L, KC_SPC}},
    // 434. 일반 약어 | 마지막 (초성 ㅁ+ㅈ / 중성 ㅏ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_L, KC_Y}, {KC_A, KC_K, KC_W, KC_L, KC_A, KC_K, KC_R}},
    // 449. 일반 약어 | 매력 (초성 ㅁ+ㄹ / 중성 ㅐ / 종성 ㄱ)
    {{KC_D, KC_F, KC_M, KC_X, KC_Y}, {KC_A, KC_O, KC_F, KC_U, KC_R}},
    // 467. 일반 약어 | 목적 (초성 ㅁ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_V, KC_Y}, {KC_A, KC_H, KC_R, KC_W, KC_J, KC_R}},
    // 467. 일반 약어 | 목적 (초성 ㅁ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_Y, KC_DOT}, {KC_A, KC_H, KC_R, KC_W, KC_J, KC_R}},
    // 481. 일반 약어 | 무척_ (초성 ㅁ+ㅈ / 중성 ㅓ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_R, KC_Y}, {KC_A, KC_N, KC_C, KC_J, KC_R, KC_SPC}},
    // 488. 일반 약어 | 문화재 (초성 ㅁ+ㅎ / 중성 ㅜ+ㅏ / 종성 ㄴ)
    {{KC_B, KC_F, KC_H, KC_S, KC_Y}, {KC_A, KC_N, KC_S, KC_G, KC_H, KC_K, KC_W, KC_O}},
    // 493. 일반 약어 | 물속 (초성 ㅁ+ㅅ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_N, KC_V, KC_Y}, {KC_A, KC_N, KC_F, KC_T, KC_H, KC_R}},
    // 493. 일반 약어 | 물속 (초성 ㅁ+ㅅ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_N, KC_Y, KC_DOT}, {KC_A, KC_N, KC_F, KC_T, KC_H, KC_R}},
    // 509. 일반 약어 | 바깥 (초성 ㅂ+ㄱ / 중성  / 종성 ㅌ)
    {{KC_E, KC_K, KC_O, KC_W, KC_SCLN}, {KC_Q, KC_K, SFT(KC_R), KC_K, KC_X}},
    // 512. 일반 약어 | 바닥 (초성 ㅂ+ㄷ / 중성 ㅏ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_I, KC_O}, {KC_Q, KC_K, KC_E, KC_K, KC_R}},
    // 520. 일반 약어 | 박물관 (초성 ㅂ+ㅁ / 중성 ㅏ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_O, KC_Y}, {KC_Q, KC_K, KC_R, KC_A, KC_N, KC_F, KC_R, KC_H, KC_K, KC_S}},
    // 521. 일반 약어 | 박사 (초성 ㅂ+ㅅ / 중성 ㅏ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_N, KC_O}, {KC_Q, KC_K, KC_R, KC_T, KC_K}},
    // 524. 일반 약어 | 반대 (초성 ㅂ+ㄷ / 중성 ㅐ / 종성 ㄴ)
    {{KC_D, KC_F, KC_I, KC_O, KC_S}, {KC_Q, KC_K, KC_S, KC_E, KC_O}},
    // 525. 일반 약어 | 반도 (초성 ㅂ+ㄷ / 중성 ㅏ+ㅗ / 종성 ㄴ)
    {{KC_F, KC_I, KC_O, KC_S, KC_V}, {KC_Q, KC_K, KC_S, KC_E, KC_H}},
    // 528. 일반 약어 | 반장 (초성 ㅂ+ㅈ / 중성 ㅏ / 종성 ㄴ+ㅇ)
    {{KC_A, KC_F, KC_L, KC_O, KC_S}, {KC_Q, KC_K, KC_S, KC_W, KC_K, KC_D}},
    // 537. 일반 약어 | 발휘 (초성 ㅂ+ㅎ / 중성 ㅏ+ㅜ / 종성 ㄹ)
    {{KC_B, KC_E, KC_F, KC_H, KC_O}, {KC_Q, KC_K, KC_F, KC_G, KC_N, KC_L}},
    // 547. 일반 약어 | 백성 (초성 ㅂ+ㅅ / 중성 ㅐ / 종성 ㄱ)
    {{KC_D, KC_F, KC_N, KC_O, KC_X}, {KC_Q, KC_O, KC_R, KC_T, KC_J, KC_D}},
    // 548. 일반 약어 | 백제 (초성 ㅂ+ㅈ / 중성 ㅐ / 종성 ㄱ)
    {{KC_D, KC_F, KC_L, KC_O, KC_X}, {KC_Q, KC_O, KC_R, KC_W, KC_P}},
    // 563. 일반 약어 | 보관 (초성 ㅂ+ㄱ / 중성 ㅘ / 종성 ㄴ)
    {{KC_F, KC_K, KC_O, KC_S, KC_DOT}, {KC_Q, KC_H, KC_R, KC_H, KC_K, KC_S}},
    // 563. 일반 약어 | 보관 (초성 ㅂ+ㄱ / 중성 ㅘ / 종성 ㄴ)
    {{KC_F, KC_K, KC_O, KC_S, KC_V}, {KC_Q, KC_H, KC_R, KC_H, KC_K, KC_S}},
    // 565. 일반 약어 | 보낸_ (초성 ㅂ+ㄴ / 중성 ㅐ / 종성 ㄴ)
    {{KC_D, KC_F, KC_O, KC_S, KC_U}, {KC_Q, KC_H, KC_S, KC_O, KC_S, KC_SPC}},
    // 568. 일반 약어 | 보장 (초성 ㅂ+ㅈ / 중성 ㅗ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_L, KC_O, KC_V}, {KC_Q, KC_H, KC_W, KC_K, KC_D}},
    // 571. 일반 약어 | 본격적 (초성 ㅂ+ㄱ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_O, KC_V}, {KC_Q, KC_H, KC_S, KC_R, KC_U, KC_R, KC_W, KC_J, KC_R}},
    // 571. 일반 약어 | 본격적 (초성 ㅂ+ㄱ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_O, KC_DOT}, {KC_Q, KC_H, KC_S, KC_R, KC_U, KC_R, KC_W, KC_J, KC_R}},
    // 578. 일반 약어 | 부동산 (초성 ㅂ+ㄷ / 중성 ㅗ / 종성 ㅇ+ㄴ)
    {{KC_A, KC_I, KC_O, KC_S, KC_V}, {KC_Q, KC_N, KC_E, KC_H, KC_D, KC_T, KC_K, KC_S}},
    // 578. 일반 약어 | 부동산 (초성 ㅂ+ㄷ / 중성 ㅗ / 종성 ㅇ+ㄴ)
    {{KC_A, KC_I, KC_O, KC_S, KC_DOT}, {KC_Q, KC_N, KC_E, KC_H, KC_D, KC_T, KC_K, KC_S}},
    // 589. 일반 약어 | 부장 (초성 ㅂ+ㅈ / 중성 ㅜ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_B, KC_F, KC_L, KC_O}, {KC_Q, KC_N, KC_W, KC_K, KC_D}},
    // 591. 일반 약어 | 부족 (초성 ㅂ+ㅈ / 중성 ㅜ / 종성 ㄱ)
    {{KC_A, KC_B, KC_E, KC_L, KC_O}, {KC_Q, KC_N, KC_W, KC_H, KC_R}},
    // 593. 일반 약어 | 부탁 (초성 ㅂ+ㄷ / 중성 ㅜ+ㅏ / 종성 ㄱ)
    {{KC_B, KC_F, KC_I, KC_O, KC_X}, {KC_Q, KC_N, KC_X, KC_K, KC_R}},
    // 595. 일반 약어 | 북쪽 (초성 ㅂ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_O, KC_V}, {KC_Q, KC_N, KC_R, SFT(KC_W), KC_H, KC_R}},
    // 595. 일반 약어 | 북쪽 (초성 ㅂ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_O, KC_DOT}, {KC_Q, KC_N, KC_R, SFT(KC_W), KC_H, KC_R}},
    // 609. 일반 약어 | 비교적 (초성 ㅂ+ㄱ / 중성 ㅛ / 종성 ㄱ)
    {{KC_K, KC_O, KC_V, KC_X, KC_DOT}, {KC_Q, KC_L, KC_R, KC_Y, KC_W, KC_J, KC_R}},
    // 609. 일반 약어 | 비교적 (초성 ㅂ+ㄱ / 중성 ㅛ / 종성 ㄱ)
    {{KC_F, KC_K, KC_O, KC_R, KC_X}, {KC_Q, KC_L, KC_R, KC_Y, KC_W, KC_J, KC_R}},
    // 610. 일반 약어 | 비극 (초성 ㅂ+ㄱ / 중성 ㅣ+ㅡ / 종성 ㄱ)
    {{KC_D, KC_G, KC_K, KC_O, KC_X}, {KC_Q, KC_L, KC_R, KC_M, KC_R}},
    // 637. 일반 약어 | 사전 (초성 ㅅ+ㅈ / 중성 ㅏ+ㅓ / 종성 ㄴ)
    {{KC_F, KC_L, KC_N, KC_R, KC_S}, {KC_T, KC_K, KC_W, KC_J, KC_S}},
    // 638. 일반 약어 | 사정 (초성 ㅅ+ㅈ / 중성 ㅏ+ㅓ / 종성 ㅇ)
    {{KC_A, KC_F, KC_L, KC_N, KC_R}, {KC_T, KC_K, KC_W, KC_J, KC_D}},
    // 641. 일반 약어 | 사회적 (초성 ㅅ+ㅎ / 중성 ㅏ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_H, KC_N}, {KC_T, KC_K, KC_G, KC_H, KC_L, KC_W, KC_J, KC_R}},
    // 648. 일반 약어 | 상대방 (초성 ㄷ+ㅂ / 중성 ㅐ / 종성 ㅇ)
    {{KC_A, KC_D, KC_F, KC_I, KC_O}, {KC_T, KC_K, KC_D, KC_E, KC_O, KC_Q, KC_K, KC_D}},
    // 653. 일반 약어 | 상황 (초성 ㅅ+ㅎ / 중성 ㅘ / 종성 ㅇ)
    {{KC_A, KC_F, KC_H, KC_N, KC_DOT}, {KC_T, KC_K, KC_D, KC_G, KC_H, KC_K, KC_D}},
    // 653. 일반 약어 | 상황 (초성 ㅅ+ㅎ / 중성 ㅘ / 종성 ㅇ)
    {{KC_A, KC_F, KC_H, KC_N, KC_V}, {KC_T, KC_K, KC_D, KC_G, KC_H, KC_K, KC_D}},
    // 656. 일반 약어 | 새로운_ (초성 ㅅ+ㄹ / 중성 ㅐ / 종성 ㄴ)
    {{KC_D, KC_F, KC_M, KC_N, KC_S}, {KC_T, KC_O, KC_F, KC_H, KC_D, KC_N, KC_S, KC_SPC}},
    // 661. 일반 약어 | 생물 (초성 ㅅ+ㅁ / 중성 ㅐ / 종성 ㅇ)
    {{KC_A, KC_D, KC_F, KC_N, KC_Y}, {KC_T, KC_O, KC_D, KC_A, KC_N, KC_F}},
    // 670. 일반 약어 | 서쪽 (초성 ㅅ+ㅈ / 중성 ㅓ+ㅗ / 종성 ㄱ)
    {{KC_L, KC_N, KC_R, KC_V, KC_X}, {KC_T, KC_J, SFT(KC_W), KC_H, KC_R}},
    // 670. 일반 약어 | 서쪽 (초성 ㅅ+ㅈ / 중성 ㅓ+ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_N, KC_DOT}, {KC_T, KC_J, SFT(KC_W), KC_H, KC_R}},
    // 676. 일반 약어 | 선장 (초성 ㅅ+ㅈ / 중성 ㅏ / 종성 ㄴ+ㅇ)
    {{KC_A, KC_F, KC_L, KC_N, KC_S}, {KC_T, KC_J, KC_S, KC_W, KC_K, KC_D}},
    // 687. 일반 약어 | 성취 (초성 ㅅ+ㅈ / 중성 ㅟ / 종성 ㅇ)
    {{KC_A, KC_B, KC_D, KC_L, KC_N}, {KC_T, KC_J, KC_D, KC_C, KC_N, KC_L}},
    // 687. 일반 약어 | 성취 (초성 ㅅ+ㅈ / 중성 ㅟ / 종성 ㅇ)
    {{KC_A, KC_C, KC_D, KC_L, KC_N}, {KC_T, KC_J, KC_D, KC_C, KC_N, KC_L}},
    // 689. 일반 약어 | 세계적 (초성 ㅅ+ㄱ / 중성 ㅔ / 종성 ㄱ)
    {{KC_A, KC_C, KC_E, KC_K, KC_N}, {KC_T, KC_P, KC_R, SFT(KC_P), KC_W, KC_J, KC_R}},
    // 696. 일반 약어 | 세월 (초성 ㅅ+ㅇ / 중성 ㅔ+ㅓ / 종성 ㄹ)
    {{KC_C, KC_E, KC_J, KC_N, KC_R}, {KC_T, KC_P, KC_D, KC_N, KC_J, KC_F}},
    // 698. 일반 약어 | 소개 (초성 ㅅ+ㄱ / 중성 ㅗ+ㅐ / 종성 )
    {{KC_D, KC_F, KC_K, KC_N, KC_V}, {KC_T, KC_H, KC_R, KC_O}},
    // 702. 일반 약어 | 소득 (초성 ㅅ+ㄷ / 중성 ㅡ / 종성 ㄱ)
    {{KC_A, KC_E, KC_G, KC_I, KC_N}, {KC_T, KC_H, KC_E, KC_M, KC_R}},
    // 709. 일반 약어 | 소재 (초성 ㅅ+ㅈ / 중성 ㅗ+ㅐ / 종성 )
    {{KC_D, KC_F, KC_L, KC_N, KC_V}, {KC_T, KC_H, KC_W, KC_O}},
    // 729. 일반 약어 | 숙제 (초성 ㅅ+ㅈ / 중성 ㅜ+ㅔ / 종성 ㄱ)
    {{KC_B, KC_C, KC_L, KC_N, KC_X}, {KC_T, KC_N, KC_R, KC_W, KC_P}},
    // 734. 일반 약어 | 스러운_ (초성 ㅅ+ㄹ / 중성 ㅡ+ㅓ / 종성 ㄴ)
    {{KC_G, KC_M, KC_N, KC_R, KC_S}, {KC_T, KC_M, KC_F, KC_J, KC_D, KC_N, KC_S, KC_SPC}},
    // 738. 일반 약어 | 스타일 (초성 ㅅ+ㄷ / 중성 ㅡ+ㅏ / 종성 ㄹ)
    {{KC_E, KC_F, KC_G, KC_I, KC_N}, {KC_T, KC_M, KC_X, KC_K, KC_D, KC_L, KC_F}},
    // 744. 일반 약어 | 시각 (초성 ㅅ+ㄱ / 중성 ㅣ+ㅏ / 종성 ㄱ)
    {{KC_D, KC_F, KC_K, KC_N, KC_X}, {KC_T, KC_L, KC_R, KC_K, KC_R}},
    // 763. 일반 약어 | 식구 (초성 ㅅ+ㄱ / 중성 ㅣ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_K, KC_N}, {KC_T, KC_L, KC_R, KC_R, KC_N}},
    // 764. 일반 약어 | 식당 (초성 ㅅ+ㄷ / 중성 ㅣ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_I, KC_N}, {KC_T, KC_L, KC_R, KC_E, KC_K, KC_D}},
    // 765. 일반 약어 | 식량 (초성 ㅅ+ㄹ / 중성 ㅣ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_M, KC_N}, {KC_T, KC_L, KC_R, KC_F, KC_I, KC_D}},
    // 766. 일반 약어 | 식물 (초성 ㅅ+ㅁ / 중성 ㅣ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_N, KC_Y}, {KC_T, KC_L, KC_R, KC_A, KC_N, KC_F}},
    // 768. 일반 약어 | 식품 (초성 ㅅ+ㅂ / 중성 ㅣ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_N, KC_O}, {KC_T, KC_L, KC_R, KC_V, KC_N, KC_A}},
    // 770. 일반 약어 | 신고 (초성 ㅅ+ㄱ / 중성 ㅣ+ㅗ / 종성 ㄴ)
    {{KC_D, KC_K, KC_N, KC_S, KC_V}, {KC_T, KC_L, KC_S, KC_R, KC_H}},
    // 776. 일반 약어 | 신청 (초성 ㅅ+ㅈ / 중성 ㅣ / 종성 ㄴ+ㅇ)
    {{KC_A, KC_D, KC_L, KC_N, KC_S}, {KC_T, KC_L, KC_S, KC_C, KC_J, KC_D}},
    // 777. 일반 약어 | 신호 (초성 ㅅ+ㅎ / 중성 ㅣ+ㅗ / 종성 ㄴ)
    {{KC_D, KC_H, KC_N, KC_S, KC_V}, {KC_T, KC_L, KC_S, KC_G, KC_H}},
    // 789. 일반 약어 | 싸움 (초성 ㅅ+ㅇ / 중성 ㅏ+ㅜ / 종성 ㅁ)
    {{KC_B, KC_F, KC_J, KC_N, KC_Z}, {SFT(KC_T), KC_K, KC_D, KC_N, KC_A}},
    // 822. 일반 약어 | 어려움 (초성 ㅇ+ㄹ / 중성 ㅓ+ㅕ / 종성 ㅁ)
    {{KC_J, KC_M, KC_R, KC_T, KC_Z}, {KC_D, KC_J, KC_F, KC_U, KC_D, KC_N, KC_A}},
    // 832. 일반 약어 | 언제 (초성 ㅇ+ㅈ / 중성 ㅓ+ㅔ / 종성 ㄴ)
    {{KC_C, KC_J, KC_L, KC_R, KC_S}, {KC_D, KC_J, KC_S, KC_W, KC_P}},
    // 834. 일반 약어 | 언젠가_ (초성 ㅇ+ㅈ / 중성 ㅔ+ㅏ / 종성 ㄴ)
    {{KC_C, KC_F, KC_J, KC_L, KC_S}, {KC_D, KC_J, KC_S, KC_W, KC_P, KC_S, KC_R, KC_K, KC_SPC}},
    // 843. 일반 약어 | 없애는_ (초성 ㅇ+ㄴ / 중성 ㅓ / 종성 ㅄ)
    {{KC_J, KC_Q, KC_R, KC_U, KC_W}, {KC_D, KC_J, KC_Q, KC_T, KC_D, KC_O, KC_S, KC_M, KC_S, KC_SPC}},
    // 864. 일반 약어 | 연락 (초성 ㅇ+ㄹ / 중성 ㅏ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_J, KC_M}, {KC_D, KC_U, KC_S, KC_F, KC_K, KC_R}},
    // 876. 일반 약어 | 예산 (초성 ㅇ+ㅅ / 중성 ㅔ+ㅏ / 종성 ㄴ)
    {{KC_C, KC_F, KC_J, KC_N, KC_S}, {KC_D, SFT(KC_P), KC_T, KC_K, KC_S}},
    // 877. 일반 약어 | 예상 (초성 ㅇ+ㅅ / 중성 ㅔ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_C, KC_F, KC_J, KC_N}, {KC_D, SFT(KC_P), KC_T, KC_K, KC_D}},
    // 883. 일반 약어 | 예정 (초성 ㅇ+ㅈ / 중성 ㅔ+ㅓ / 종성 ㅇ)
    {{KC_A, KC_C, KC_J, KC_L, KC_R}, {KC_D, SFT(KC_P), KC_W, KC_J, KC_D}},
    // 890. 일반 약어 | 오른쪽 (초성 ㄹ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_M, KC_V}, {KC_D, KC_H, KC_F, KC_M, KC_S, SFT(KC_W), KC_H, KC_R}},
    // 890. 일반 약어 | 오른쪽 (초성 ㄹ+ㅈ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_M, KC_DOT}, {KC_D, KC_H, KC_F, KC_M, KC_S, SFT(KC_W), KC_H, KC_R}},
    // 895. 일반 약어 | 올림픽 (초성 ㄹ+ㅂ / 중성 ㅗ+ㅣ / 종성 ㄱ)
    {{KC_D, KC_M, KC_O, KC_V, KC_X}, {KC_D, KC_H, KC_F, KC_F, KC_L, KC_A, KC_V, KC_L, KC_R}},
    // 895. 일반 약어 | 올림픽 (초성 ㄹ+ㅂ / 중성 ㅗ+ㅣ / 종성 ㄱ)
    {{KC_A, KC_E, KC_M, KC_O, KC_DOT}, {KC_D, KC_H, KC_F, KC_F, KC_L, KC_A, KC_V, KC_L, KC_R}},
    // 897. 일반 약어 | 완전히_ (초성 ㅇ+ㅎ / 중성 ㅘ / 종성 ㄴ)
    {{KC_F, KC_H, KC_J, KC_S, KC_DOT}, {KC_D, KC_H, KC_K, KC_S, KC_W, KC_J, KC_S, KC_G, KC_L, KC_SPC}},
    // 897. 일반 약어 | 완전히_ (초성 ㅇ+ㅎ / 중성 ㅘ / 종성 ㄴ)
    {{KC_F, KC_H, KC_J, KC_S, KC_V}, {KC_D, KC_H, KC_K, KC_S, KC_W, KC_J, KC_S, KC_G, KC_L, KC_SPC}},
    // 898. 일반 약어 | 왜냐하면_ (초성 ㄴ+ㅎ / 중성 ㅙ / 종성 )
    {{KC_D, KC_F, KC_H, KC_U, KC_DOT}, {KC_D, KC_H, KC_O, KC_S, KC_I, KC_G, KC_K, KC_A, KC_U, KC_S, KC_SPC}},
    // 898. 일반 약어 | 왜냐하면_ (초성 ㄴ+ㅎ / 중성 ㅙ / 종성 )
    {{KC_D, KC_F, KC_H, KC_U, KC_V}, {KC_D, KC_H, KC_O, KC_S, KC_I, KC_G, KC_K, KC_A, KC_U, KC_S, KC_SPC}},
    // 899. 일반 약어 | 외국인 (초성 ㅇ+ㄱ / 중성 ㅗ / 종성 ㄱ+ㄴ)
    {{KC_J, KC_K, KC_S, KC_V, KC_X}, {KC_D, KC_H, KC_L, KC_R, KC_N, KC_R, KC_D, KC_L, KC_S}},
    // 899. 일반 약어 | 외국인 (초성 ㅇ+ㄱ / 중성 ㅗ / 종성 ㄱ+ㄴ)
    {{KC_J, KC_K, KC_S, KC_X, KC_DOT}, {KC_D, KC_H, KC_L, KC_R, KC_N, KC_R, KC_D, KC_L, KC_S}},
    // 899. 일반 약어 | 외국인 (초성 ㅇ+ㄱ / 중성 ㅗ / 종성 ㄱ+ㄴ)
    {{KC_A, KC_E, KC_J, KC_K, KC_V}, {KC_D, KC_H, KC_L, KC_R, KC_N, KC_R, KC_D, KC_L, KC_S}},
    // 899. 일반 약어 | 외국인 (초성 ㅇ+ㄱ / 중성 ㅗ / 종성 ㄱ+ㄴ)
    {{KC_A, KC_E, KC_J, KC_K, KC_DOT}, {KC_D, KC_H, KC_L, KC_R, KC_N, KC_R, KC_D, KC_L, KC_S}},
    // 900. 일반 약어 | 왼쪽 (초성 ㅇ+ㅈ / 중성 ㅗ / 종성 ㄴ+ㄱ)
    {{KC_J, KC_L, KC_S, KC_V, KC_X}, {KC_D, KC_H, KC_L, KC_S, SFT(KC_W), KC_H, KC_R}},
    // 900. 일반 약어 | 왼쪽 (초성 ㅇ+ㅈ / 중성 ㅗ / 종성 ㄴ+ㄱ)
    {{KC_J, KC_L, KC_S, KC_X, KC_DOT}, {KC_D, KC_H, KC_L, KC_S, SFT(KC_W), KC_H, KC_R}},
    // 900. 일반 약어 | 왼쪽 (초성 ㅇ+ㅈ / 중성 ㅗ / 종성 ㄴ+ㄱ)
    {{KC_A, KC_E, KC_J, KC_L, KC_V}, {KC_D, KC_H, KC_L, KC_S, SFT(KC_W), KC_H, KC_R}},
    // 900. 일반 약어 | 왼쪽 (초성 ㅇ+ㅈ / 중성 ㅗ / 종성 ㄴ+ㄱ)
    {{KC_A, KC_E, KC_J, KC_L, KC_DOT}, {KC_D, KC_H, KC_L, KC_S, SFT(KC_W), KC_H, KC_R}},
    // 903. 일반 약어 | 요즘 (초성 ㅇ+ㅈ / 중성 ㅏ+ㅡ / 종성 ㅁ)
    {{KC_F, KC_G, KC_J, KC_L, KC_Z}, {KC_D, KC_Y, KC_W, KC_M, KC_A}},
    // 907. 일반 약어 | 우산 (초성 ㅇ+ㅅ / 중성 ㅜ+ㅏ / 종성 ㄴ)
    {{KC_B, KC_F, KC_J, KC_N, KC_S}, {KC_D, KC_N, KC_T, KC_K, KC_S}},
    // 915. 일반 약어 | 원래 (초성 ㅇ+ㄹ / 중성 ㅐ / 종성 ㄴ)
    {{KC_D, KC_F, KC_J, KC_M, KC_S}, {KC_D, KC_N, KC_J, KC_S, KC_F, KC_O}},
    // 916. 일반 약어 | 원리 (초성 ㅇ+ㄹ / 중성 ㅝ / 종성 ㄴ)
    {{KC_J, KC_M, KC_R, KC_S, KC_DOT}, {KC_D, KC_N, KC_J, KC_S, KC_F, KC_L}},
    // 916. 일반 약어 | 원리 (초성 ㅇ+ㄹ / 중성 ㅝ / 종성 ㄴ)
    {{KC_B, KC_J, KC_M, KC_R, KC_S}, {KC_D, KC_N, KC_J, KC_S, KC_F, KC_L}},
    // 917. 일반 약어 | 원한 (초성 ㅇ+ㅎ / 중성 ㅝ / 종성 ㄴ)
    {{KC_H, KC_J, KC_R, KC_S, KC_DOT}, {KC_D, KC_N, KC_J, KC_S, KC_G, KC_K, KC_S}},
    // 917. 일반 약어 | 원한 (초성 ㅇ+ㅎ / 중성 ㅝ / 종성 ㄴ)
    {{KC_B, KC_H, KC_J, KC_R, KC_S}, {KC_D, KC_N, KC_J, KC_S, KC_G, KC_K, KC_S}},
    // 918. 일반 약어 | 위반 (초성 ㅇ+ㅂ / 중성 ㅜ+ㅏ / 종성 ㄴ)
    {{KC_B, KC_F, KC_J, KC_O, KC_S}, {KC_D, KC_N, KC_L, KC_Q, KC_K, KC_S}},
    // 920. 일반 약어 | 위원회 (초성 ㅇ+ㅎ / 중성 ㅟ / 종성 ㄴ)
    {{KC_B, KC_D, KC_H, KC_J, KC_S}, {KC_D, KC_N, KC_L, KC_D, KC_N, KC_J, KC_S, KC_G, KC_H, KC_L}},
    // 920. 일반 약어 | 위원회 (초성 ㅇ+ㅎ / 중성 ㅟ / 종성 ㄴ)
    {{KC_C, KC_D, KC_H, KC_J, KC_S}, {KC_D, KC_N, KC_L, KC_D, KC_N, KC_J, KC_S, KC_G, KC_H, KC_L}},
    // 925. 일반 약어 | 유리 (초성 ㅇ+ㄹ / 중성 ㅠ+ㅣ / 종성 )
    {{KC_B, KC_D, KC_J, KC_M, KC_DOT}, {KC_D, KC_B, KC_F, KC_L}},
    // 927. 일반 약어 | 유학 (초성 ㅇ+ㅎ / 중성 ㅏ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_H, KC_J}, {KC_D, KC_B, KC_G, KC_K, KC_R}},
    // 928. 일반 약어 | 육체 (초성 ㅇ+ㅎ / 중성 ㅜ+ㅔ / 종성 ㄱ)
    {{KC_B, KC_C, KC_H, KC_J, KC_X}, {KC_D, KC_B, KC_R, KC_C, KC_P}},
    // 941. 일반 약어 | 의견 (초성 ㅇ+ㄱ / 중성 ㅡ+ㅕ / 종성 ㄴ)
    {{KC_G, KC_J, KC_K, KC_S, KC_T}, {KC_D, KC_M, KC_L, KC_R, KC_U, KC_S}},
    // 961. 일반 약어 | 이룩 (초성 ㅇ+ㄹ / 중성 ㅜ / 종성 ㄱ)
    {{KC_A, KC_B, KC_E, KC_J, KC_M}, {KC_D, KC_L, KC_F, KC_N, KC_R}},
    // 979. 일반 약어 | 일반적 (초성 ㅂ+ㅈ / 중성 ㅓ / 종성 ㄹ+ㄴ)
    {{KC_E, KC_L, KC_O, KC_R, KC_S}, {KC_D, KC_L, KC_F, KC_Q, KC_K, KC_S, KC_W, KC_J, KC_R}},
    // 991. 일반 약어 | 자격 (초성 ㅈ+ㄱ / 중성 ㅕ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_L, KC_T}, {KC_W, KC_K, KC_R, KC_U, KC_R}},
    // 992. 일반 약어 | 자극 (초성 ㅈ+ㄱ / 중성 ㅡ / 종성 ㄱ)
    {{KC_A, KC_E, KC_G, KC_K, KC_L}, {KC_W, KC_K, KC_R, KC_M, KC_R}},
    // 1009. 일반 약어 | 자원 (초성 ㅈ+ㅇ / 중성 ㅏ+ㅜ / 종성 ㄴ)
    {{KC_B, KC_F, KC_J, KC_L, KC_S}, {KC_W, KC_K, KC_D, KC_N, KC_J, KC_S}},
    // 1011. 일반 약어 | 자전거 (초성 ㅈ+ㄱ / 중성 ㅏ+ㅓ / 종성 ㄴ)
    {{KC_F, KC_K, KC_L, KC_R, KC_S}, {KC_W, KC_K, KC_W, KC_J, KC_S, KC_R, KC_J}},
    // 1015. 일반 약어 | 작가 (초성 ㅈ+ㄱ / 중성 ㅏ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_K, KC_L}, {KC_W, KC_K, KC_R, KC_R, KC_K}},
    // 1026. 일반 약어 | 장관 (초성 ㄱ+ㅈ / 중성 ㅏ / 종성 ㅇ+ㄴ)
    {{KC_A, KC_F, KC_K, KC_L, KC_S}, {KC_W, KC_K, KC_D, KC_R, KC_H, KC_K, KC_S}},
    // 1027. 일반 약어 | 장군 (초성 ㅈ+ㄱ / 중성 ㅏ+ㅜ / 종성 ㄴ)
    {{KC_B, KC_F, KC_K, KC_L, KC_S}, {KC_W, KC_K, KC_D, KC_R, KC_N, KC_S}},
    // 1032. 일반 약어 | 재벌 (초성 ㅈ+ㅂ / 중성 ㅏ+ㅓ / 종성 ㄹ)
    {{KC_E, KC_F, KC_L, KC_O, KC_R}, {KC_W, KC_O, KC_Q, KC_J, KC_F}},
    // 1034. 일반 약어 | 재판 (초성 ㅈ+ㅂ / 중성 ㅐ / 종성 ㄴ)
    {{KC_D, KC_F, KC_L, KC_O, KC_S}, {KC_W, KC_O, KC_V, KC_K, KC_S}},
    // 1041. 일반 약어 | 적극적 (초성 ㅈ+ㄱ / 중성 ㅓ+ㅡ / 종성 ㄱ)
    {{KC_G, KC_K, KC_L, KC_R, KC_X}, {KC_W, KC_J, KC_R, KC_R, KC_M, KC_R, KC_W, KC_J, KC_R}},
    // 1043. 일반 약어 | 적어도_ (초성 ㅈ+ㄷ / 중성 ㅓ / 종성 ㄱ)
    {{KC_A, KC_E, KC_I, KC_L, KC_R}, {KC_W, KC_J, KC_R, KC_D, KC_J, KC_E, KC_H, KC_SPC}},
    // 1047. 일반 약어 | 전개 (초성 ㅈ+ㄱ / 중성 ㅐ / 종성 ㄴ)
    {{KC_D, KC_F, KC_K, KC_L, KC_S}, {KC_W, KC_J, KC_S, KC_R, KC_O}},
    // 1051. 일반 약어 | 전도 (초성 ㅈ+ㄷ / 중성 ㅓ+ㅗ / 종성 ㄴ)
    {{KC_I, KC_L, KC_R, KC_S, KC_V}, {KC_W, KC_J, KC_S, KC_E, KC_H}},
    // 1054. 일반 약어 | 전문 (초성 ㅈ+ㅁ / 중성 ㅓ+ㅜ / 종성 ㄴ)
    {{KC_B, KC_L, KC_R, KC_S, KC_Y}, {KC_W, KC_J, KC_S, KC_A, KC_N, KC_S}},
    // 1056. 일반 약어 | 전부 (초성 ㅈ+ㅂ / 중성 ㅓ+ㅜ / 종성 ㄴ)
    {{KC_B, KC_L, KC_O, KC_R, KC_S}, {KC_W, KC_J, KC_S, KC_Q, KC_N}},
    // 1059. 일반 약어 | 전체적 (초성 ㅈ / 중성 ㅓ+ㅔ / 종성 ㄱ)
    {{KC_A, KC_C, KC_E, KC_L, KC_R}, {KC_W, KC_J, KC_S, KC_C, KC_P, KC_W, KC_J, KC_R}},
    // 1061. 일반 약어 | 전통적 (초성 ㅈ+ㄷ / 중성 ㅓ / 종성 ㄴ+ㄱ)
    {{KC_I, KC_L, KC_R, KC_S, KC_X}, {KC_W, KC_J, KC_S, KC_X, KC_H, KC_D, KC_W, KC_J, KC_R}},
    // 1061. 일반 약어 | 전통적 (초성 ㅈ+ㄷ / 중성 ㅓ / 종성 ㄴ+ㄱ)
    {{KC_A, KC_E, KC_I, KC_L, KC_R}, {KC_W, KC_J, KC_S, KC_X, KC_H, KC_D, KC_W, KC_J, KC_R}},
    // 1062. 일반 약어 | 전파 (초성 ㅈ+ㅂ / 중성 ㅓ+ㅏ / 종성 ㄴ)
    {{KC_F, KC_L, KC_O, KC_R, KC_S}, {KC_W, KC_J, KC_S, KC_V, KC_K}},
    // 1065. 일반 약어 | 젊은 (초성 ㅈ+ㅇ / 중성  / 종성 ㄻ)
    {{KC_J, KC_L, KC_Q, KC_W, KC_SCLN}, {KC_W, KC_J, KC_F, KC_A, KC_D, KC_M, KC_S}},
    // 1069. 일반 약어 | 정권 (초성 ㄱ+ㅈ / 중성 ㅝ / 종성 ㄴ)
    {{KC_K, KC_L, KC_R, KC_S, KC_DOT}, {KC_W, KC_J, KC_D, KC_R, KC_N, KC_J, KC_S}},
    // 1069. 일반 약어 | 정권 (초성 ㄱ+ㅈ / 중성 ㅝ / 종성 ㄴ)
    {{KC_B, KC_K, KC_L, KC_R, KC_S}, {KC_W, KC_J, KC_D, KC_R, KC_N, KC_J, KC_S}},
    // 1088. 일반 약어 | 제작 (초성 ㅈ / 중성 ㅔ+ㅏ / 종성 ㄱ)
    {{KC_A, KC_C, KC_E, KC_F, KC_L}, {KC_W, KC_P, KC_W, KC_K, KC_R}},
    // 1090. 일반 약어 | 제한 (초성 ㅈ+ㅎ / 중성 ㅔ+ㅏ / 종성 ㄴ)
    {{KC_C, KC_F, KC_H, KC_L, KC_S}, {KC_W, KC_P, KC_G, KC_K, KC_S}},
    // 1096. 일반 약어 | 조상 (초성 ㅈ+ㅅ / 중성 ㅗ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_L, KC_N, KC_V}, {KC_W, KC_H, KC_T, KC_K, KC_D}},
    // 1098. 일반 약어 | 조심 (초성 ㅈ+ㅅ / 중성 ㅗ+ㅣ / 종성 ㅁ)
    {{KC_D, KC_L, KC_N, KC_V, KC_Z}, {KC_W, KC_H, KC_T, KC_L, KC_A}},
    // 1099. 일반 약어 | 조용히_ (초성 ㅇ+ㅎ / 중성 ㅛ / 종성 ㅇ)
    {{KC_A, KC_H, KC_J, KC_V, KC_DOT}, {KC_W, KC_H, KC_D, KC_Y, KC_D, KC_G, KC_L, KC_SPC}},
    // 1099. 일반 약어 | 조용히_ (초성 ㅇ+ㅎ / 중성 ㅛ / 종성 ㅇ)
    {{KC_A, KC_F, KC_H, KC_J, KC_R}, {KC_W, KC_H, KC_D, KC_Y, KC_D, KC_G, KC_L, KC_SPC}},
    // 1118. 일반 약어 | 주식 (초성 ㅈ+ㅅ / 중성 ㅜ / 종성 ㄱ)
    {{KC_A, KC_B, KC_E, KC_L, KC_N}, {KC_W, KC_N, KC_T, KC_L, KC_R}},
    // 1120. 일반 약어 | 주인공 (초성 ㅈ+ㄱ / 중성 ㅗ / 종성 ㄴ+ㅇ)
    {{KC_A, KC_K, KC_L, KC_S, KC_V}, {KC_W, KC_N, KC_D, KC_L, KC_S, KC_R, KC_H, KC_D}},
    // 1120. 일반 약어 | 주인공 (초성 ㅈ+ㄱ / 중성 ㅗ / 종성 ㄴ+ㅇ)
    {{KC_A, KC_K, KC_L, KC_S, KC_DOT}, {KC_W, KC_N, KC_D, KC_L, KC_S, KC_R, KC_H, KC_D}},
    // 1122. 일반 약어 | 주택 (초성 ㅈ+ㄷ / 중성 ㅜ / 종성 ㄱ)
    {{KC_A, KC_B, KC_E, KC_I, KC_L}, {KC_W, KC_N, KC_X, KC_O, KC_R}},
    // 1131. 일반 약어 | 중앙 (초성 ㅈ+ㅇ / 중성 ㅜ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_B, KC_F, KC_J, KC_L}, {KC_W, KC_N, KC_D, KC_D, KC_K, KC_D}},
    // 1134. 일반 약어 | 증가 (초성 ㅈ+ㄱ / 중성 ㅡ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_F, KC_G, KC_K, KC_L}, {KC_W, KC_M, KC_D, KC_R, KC_K}},
    // 1135. 일반 약어 | 증거 (초성 ㅈ+ㄱ / 중성 ㅡ+ㅓ / 종성 ㅇ)
    {{KC_A, KC_G, KC_K, KC_L, KC_R}, {KC_W, KC_M, KC_D, KC_R, KC_J}},
    // 1136. 일반 약어 | 증권 (초성 ㅈ+ㄱ / 중성 ㅡ+ㅓ / 종성 ㄴ)
    {{KC_G, KC_K, KC_L, KC_R, KC_S}, {KC_W, KC_M, KC_D, KC_R, KC_N, KC_J, KC_S}},
    // 1141. 일반 약어 | 지난달 (초성 ㅈ+ㄴ / 중성 ㅣ+ㅏ / 종성 ㄹ)
    {{KC_D, KC_E, KC_F, KC_L, KC_U}, {KC_W, KC_L, KC_S, KC_K, KC_S, KC_E, KC_K, KC_F}},
    // 1142. 일반 약어 | 지난해 (초성 ㅈ+ㄴ / 중성 ㅣ+ㅏ / 종성 ㄴ)
    {{KC_D, KC_F, KC_L, KC_S, KC_U}, {KC_W, KC_L, KC_S, KC_K, KC_S, KC_G, KC_O}},
    // 1148. 일반 약어 | 지상 (초성 ㅈ+ㅅ / 중성 ㅣ+ㅏ / 종성 ㅇ)
    {{KC_A, KC_D, KC_F, KC_L, KC_N}, {KC_W, KC_L, KC_T, KC_K, KC_D}},
    // 1149. 일반 약어 | 지속 (초성 ㅈ+ㅅ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_N, KC_V}, {KC_W, KC_L, KC_T, KC_H, KC_R}},
    // 1149. 일반 약어 | 지속 (초성 ㅈ+ㅅ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_N, KC_DOT}, {KC_W, KC_L, KC_T, KC_H, KC_R}},
    // 1151. 일반 약어 | 지식 (초성 ㅈ+ㅅ / 중성 ㅣ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_L, KC_N}, {KC_W, KC_L, KC_T, KC_L, KC_R}},
    // 1169. 일반 약어 | 짧은_ (초성 ㅉ / 중성 ㅏ+ㅡ / 종성 ㄹ)
    {{KC_E, KC_F, KC_G, KC_J, KC_L}, {SFT(KC_W), KC_K, KC_F, KC_Q, KC_D, KC_M, KC_S, KC_SPC}},
    // 1171. 일반 약어 | 차량 (초성 ㅈ+ㄹ / 중성 ㅑ / 종성 ㅇ)
    {{KC_A, KC_G, KC_L, KC_M, KC_DOT}, {KC_C, KC_K, KC_F, KC_I, KC_D}},
    // 1177. 일반 약어 | 참새 (초성 ㅈ+ㅅ / 중성 ㅐ / 종성 ㅁ)
    {{KC_D, KC_F, KC_L, KC_N, KC_Z}, {KC_C, KC_K, KC_A, KC_T, KC_O}},
    // 1178. 일반 약어 | 참석 (초성 ㅈ+ㅅ / 중성 ㅓ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_N, KC_R}, {KC_C, KC_K, KC_A, KC_T, KC_J, KC_R}},
    // 1180. 일반 약어 | 창문 (초성 ㅈ+ㅁ / 중성 ㅏ / 종성 ㅇ+ㄴ)
    {{KC_A, KC_F, KC_L, KC_S, KC_Y}, {KC_C, KC_K, KC_D, KC_A, KC_N, KC_S}},
    // 1183. 일반 약어 | 책상 (초성 ㅈ+ㅅ / 중성 ㅐ / 종성 ㄱ)
    {{KC_D, KC_F, KC_L, KC_N, KC_X}, {KC_C, KC_O, KC_R, KC_T, KC_K, KC_D}},
    // 1200. 일반 약어 | 최근_ (초성 ㅈ+ㄱ / 중성 ㅗ+ㅣ / 종성 ㄴ)
    {{KC_D, KC_K, KC_L, KC_S, KC_V}, {KC_C, KC_H, KC_L, KC_R, KC_M, KC_S, KC_SPC}},
    // 1201. 일반 약어 | 최소한 (초성 ㅈ+ㅅ / 중성 ㅚ / 종성 ㄴ)
    {{KC_D, KC_L, KC_N, KC_S, KC_DOT}, {KC_C, KC_H, KC_L, KC_T, KC_H, KC_G, KC_K, KC_S}},
    // 1201. 일반 약어 | 최소한 (초성 ㅈ+ㅅ / 중성 ㅚ / 종성 ㄴ)
    {{KC_D, KC_L, KC_N, KC_S, KC_V}, {KC_C, KC_H, KC_L, KC_T, KC_H, KC_G, KC_K, KC_S}},
    // 1202. 일반 약어 | 축구 (초성 ㅈ+ㄱ / 중성 ㅜ / 종성 ㄱ)
    {{KC_A, KC_B, KC_E, KC_K, KC_L}, {KC_C, KC_N, KC_R, KC_R, KC_N}},
    // 1204. 일반 약어 | 출산 (초성 ㅊ / 중성 ㅜ+ㅏ / 종성 ㄹ)
    {{KC_B, KC_E, KC_F, KC_H, KC_L}, {KC_C, KC_N, KC_F, KC_T, KC_K, KC_S}},
    // 1209. 일반 약어 | 충분히_ (초성 ㅈ+ㅂ / 중성 ㅣ / 종성 ㅇ+ㄴ)
    {{KC_A, KC_D, KC_L, KC_O, KC_S}, {KC_C, KC_N, KC_D, KC_Q, KC_N, KC_S, KC_G, KC_L, KC_SPC}},
    // 1210. 일반 약어 | 측면 (초성 ㅎ+ㅁ / 중성 ㅡ / 종성 ㄱ)
    {{KC_A, KC_E, KC_G, KC_H, KC_Y}, {KC_C, KC_M, KC_R, KC_A, KC_U, KC_S}},
    // 1228. 일반 약어 | 택시 (초성 ㄷ+ㅅ / 중성 ㅐ / 종성 ㄱ)
    {{KC_D, KC_F, KC_I, KC_N, KC_X}, {KC_X, KC_O, KC_R, KC_T, KC_L}},
    // 1234. 일반 약어 | 통제 (초성 ㄷ+ㅈ / 중성 ㅗ+ㅔ / 종성 ㅇ)
    {{KC_A, KC_C, KC_I, KC_L, KC_V}, {KC_X, KC_H, KC_D, KC_W, KC_P}},
    // 1242. 일반 약어 | 특징 (초성 ㄷ+ㅈ / 중성 ㅡ / 종성 ㄱ)
    {{KC_A, KC_E, KC_G, KC_I, KC_L}, {KC_X, KC_M, KC_R, KC_W, KC_L, KC_D}},
    // 1256. 일반 약어 | 평생 (초성 ㅂ+ㅅ / 중성 ㅏ+ㅣ / 종성 ㅇ)
    {{KC_A, KC_D, KC_F, KC_N, KC_O}, {KC_V, KC_U, KC_D, KC_T, KC_O, KC_D}},
    // 1258. 일반 약어 | 평양 (초성 ㅂ+ㅇ / 중성 ㅕ+ㅓ / 종성 ㅇ)
    {{KC_A, KC_J, KC_O, KC_R, KC_T}, {KC_V, KC_U, KC_D, KC_D, KC_I, KC_D}},
    // 1261. 일반 약어 | 폭력 (초성 ㅂ+ㄹ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_M, KC_O, KC_V}, {KC_V, KC_H, KC_R, KC_F, KC_U, KC_R}},
    // 1261. 일반 약어 | 폭력 (초성 ㅂ+ㄹ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_M, KC_O, KC_DOT}, {KC_V, KC_H, KC_R, KC_F, KC_U, KC_R}},
    // 1270. 일반 약어 | 필자 (초성 ㅂ+ㅈ / 중성 ㅣ+ㅏ / 종성 ㄹ)
    {{KC_D, KC_E, KC_F, KC_L, KC_O}, {KC_V, KC_L, KC_F, KC_W, KC_K}},
    // 1292. 일반 약어 | 한두_ (초성 ㅎ+ㄷ / 중성 ㅏ+ㅜ / 종성 ㄴ)
    {{KC_B, KC_F, KC_H, KC_I, KC_S}, {KC_G, KC_K, KC_S, KC_E, KC_N, KC_SPC}},
    // 1293. 일반 약어 | 한때 (초성 ㅎ+ㅇ / 중성 ㅐ / 종성 ㄴ)
    {{KC_D, KC_F, KC_H, KC_J, KC_S}, {KC_G, KC_K, KC_S, SFT(KC_E), KC_O}},
    // 1304. 일반 약어 | 합리 (초성 ㅎ+ㄹ / 중성 ㅏ+ㅣ / 종성 ㅂ)
    {{KC_D, KC_F, KC_H, KC_M, KC_W}, {KC_G, KC_K, KC_Q, KC_F, KC_L}},
    // 1306. 일반 약어 | 해석 (초성 ㅎ+ㅅ / 중성 ㅓ / 종성 ㄱ)
    {{KC_A, KC_E, KC_H, KC_N, KC_R}, {KC_G, KC_O, KC_T, KC_J, KC_R}},
    // 1307. 일반 약어 | 해외 (초성 ㅎ+ㅇ / 중성 ㅐ+ㅗ / 종성 )
    {{KC_D, KC_F, KC_H, KC_J, KC_V}, {KC_G, KC_O, KC_D, KC_H, KC_L}},
    // 1308. 일반 약어 | 핵심 (초성 ㅎ+ㅅ / 중성 ㅐ / 종성 ㄱ)
    {{KC_D, KC_F, KC_H, KC_N, KC_X}, {KC_G, KC_O, KC_R, KC_T, KC_L, KC_A}},
    // 1311. 일반 약어 | 행사 (초성 ㅎ+ㅅ / 중성 ㅐ / 종성 ㅇ)
    {{KC_A, KC_D, KC_F, KC_H, KC_N}, {KC_G, KC_O, KC_D, KC_T, KC_K}},
    // 1312. 일반 약어 | 행위 (초성 ㅎ+ㅇ / 중성 ㅐ / 종성 ㅇ)
    {{KC_A, KC_D, KC_F, KC_H, KC_J}, {KC_G, KC_O, KC_D, KC_D, KC_N, KC_L}},
    // 1317. 일반 약어 | 현실적 (초성 ㅎ+ㅅ / 중성 ㅕ+ㅓ / 종성 ㄴ)
    {{KC_H, KC_N, KC_R, KC_S, KC_T}, {KC_G, KC_U, KC_S, KC_T, KC_L, KC_F, KC_W, KC_J, KC_R}},
    // 1323. 일반 약어 | 형성 (초성 ㅎ+ㅅ / 중성 ㅕ+ㅓ / 종성 ㅇ)
    {{KC_A, KC_H, KC_N, KC_R, KC_T}, {KC_G, KC_U, KC_D, KC_T, KC_J, KC_D}},
    // 1328. 일반 약어 | 혹시_ (초성 ㅎ+ㅅ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_H, KC_N, KC_V}, {KC_G, KC_H, KC_R, KC_T, KC_L, KC_SPC}},
    // 1328. 일반 약어 | 혹시_ (초성 ㅎ+ㅅ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_H, KC_N, KC_DOT}, {KC_G, KC_H, KC_R, KC_T, KC_L, KC_SPC}},
    // 1329. 일반 약어 | 혹은_ (초성 ㅎ+ㅇ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_H, KC_J, KC_V}, {KC_G, KC_H, KC_R, KC_D, KC_M, KC_S, KC_SPC}},
    // 1329. 일반 약어 | 혹은_ (초성 ㅎ+ㅇ / 중성 ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_H, KC_J, KC_DOT}, {KC_G, KC_H, KC_R, KC_D, KC_M, KC_S, KC_SPC}},
    // 1332. 일반 약어 | 화장실 (초성 ㅈ+ㅅ / 중성 ㅏ+ㅣ / 종성 ㄹ)
    {{KC_D, KC_E, KC_F, KC_L, KC_N}, {KC_G, KC_H, KC_K, KC_W, KC_K, KC_D, KC_T, KC_L, KC_F}},
    // 1341. 일반 약어 | 회원 (초성 ㅎ+ㅇ / 중성 ㅗ+ㅣ / 종성 ㄴ)
    {{KC_D, KC_H, KC_J, KC_S, KC_V}, {KC_G, KC_H, KC_L, KC_D, KC_N, KC_J, KC_S}},
    // 1343. 일반 약어 | 후반 (초성 ㅎ+ㅂ / 중성 ㅜ+ㅏ / 종성 ㄴ)
    {{KC_B, KC_F, KC_H, KC_O, KC_S}, {KC_G, KC_N, KC_Q, KC_K, KC_S}},
    // 1. 사용자 약어 | 잠재성 (초성 ㅈ+ㅅ / 중성 ㅏ+ㅣ+ㅓ / 종성 )
    {{KC_D, KC_F, KC_L, KC_N, KC_R}, {KC_W, KC_K, KC_A, KC_W, KC_O, KC_T, KC_J, KC_D}},
    // 6. 사용자 약어 | 감사합니다._ (초성 ㄱ+ㅅ / 중성 ㅏ / 종성 ㅁ+ㅂ)
    {{KC_F, KC_K, KC_N, KC_W, KC_Z}, {KC_R, KC_K, KC_A, KC_T, KC_K, KC_G, KC_K, KC_Q, KC_S, KC_L, KC_E, KC_K, KC_DOT, KC_SPC}},
    // 7. 사용자 약어 | 아이디어 (초성 ㅇ+ㄷ / 중성 ㅏ+ㅣ+ㅓ / 종성 )
    {{KC_D, KC_F, KC_I, KC_J, KC_R}, {KC_D, KC_K, KC_D, KC_L, KC_E, KC_L, KC_D, KC_J}},
    // 8. 사용자 약어 | 아우렐리우스 (초성 ㅇ+ㄹ / 중성 ㅏ+ㅜ / 종성 ㄹ)
    {{KC_B, KC_E, KC_F, KC_J, KC_M}, {KC_D, KC_K, KC_D, KC_N, KC_F, KC_P, KC_F, KC_F, KC_L, KC_D, KC_N, KC_T, KC_M}},
    // 9. 사용자 약어 | 이산화탄소 (초성 ㅇ+ㅅ+ㅎ / 중성 ㅏ / 종성 ㄴ)
    {{KC_F, KC_H, KC_J, KC_N, KC_S}, {KC_D, KC_L, KC_T, KC_K, KC_S, KC_G, KC_H, KC_K, KC_X, KC_K, KC_S, KC_T, KC_H}},
    // 45. 일반 약어 | 개인적 (초성 ㄱ+ㅈ / 중성 ㅐ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_F, KC_K, KC_L}, {KC_R, KC_O, KC_D, KC_L, KC_S, KC_W, KC_J, KC_R}},
    // 94. 일반 약어 | 계획 (초성 ㄱ / 중성 ㅔ+ㅚ / 종성 ㄱ)
    {{KC_A, KC_C, KC_D, KC_E, KC_K, KC_DOT}, {KC_R, SFT(KC_P), KC_G, KC_H, KC_L, KC_R}},
    // 101. 일반 약어 | 고생 (초성 ㄱ+ㅅ / 중성 ㅗ+ㅐ / 종성 ㅇ)
    {{KC_A, KC_D, KC_F, KC_K, KC_N, KC_V}, {KC_R, KC_H, KC_T, KC_O, KC_D}},
    // 113. 일반 약어 | 공식 (초성 ㄱ+ㅅ / 중성 ㅗ+ㅣ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_K, KC_N, KC_V}, {KC_R, KC_H, KC_D, KC_T, KC_L, KC_R}},
    // 120. 일반 약어 | 과학자 (초성 ㄱ+ㅈ / 중성 ㅗ+ㅏ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_K, KC_L, KC_V}, {KC_R, KC_H, KC_K, KC_G, KC_K, KC_R, KC_W, KC_K}},
    // 121. 일반 약어 | 과학적 (초성 ㄱ+ㅈ / 중성 ㅗ+ㅓ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_L, KC_R, KC_V}, {KC_R, KC_H, KC_K, KC_G, KC_K, KC_R, KC_W, KC_J, KC_R}},
    // 154. 일반 약어 | 국제 (초성 ㄱ+ㅈ / 중성 ㅜ+ㅔ / 종성 ㄱ)
    {{KC_A, KC_B, KC_C, KC_E, KC_K, KC_L}, {KC_R, KC_N, KC_R, KC_W, KC_P}},
    // 160. 일반 약어 | 귀족 (초성 ㄱ+ㅈ / 중성 ㅣ+ㅗ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_K, KC_L, KC_V}, {KC_R, KC_N, KC_L, KC_W, KC_H, KC_R}},
    // 200. 일반 약어 | 극장 (초성 ㄱ+ㅈ / 중성 ㅡ+ㅏ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_G, KC_K, KC_L}, {KC_R, KC_M, KC_R, KC_W, KC_K, KC_D}},
    // 346. 일반 약어 | 대책 (초성 ㄷ+ㅈ / 중성 ㅐ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_F, KC_I, KC_L}, {KC_E, KC_O, KC_C, KC_O, KC_R}},
    // 350. 일반 약어 | 대표적 (초성 ㄷ+ㅂ / 중성 ㅛ / 종성 ㄱ)
    {{KC_A, KC_E, KC_I, KC_O, KC_V, KC_DOT}, {KC_E, KC_O, KC_V, KC_Y, KC_W, KC_J, KC_R}},
    // 350. 일반 약어 | 대표적 (초성 ㄷ+ㅂ / 중성 ㅛ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_I, KC_O, KC_R}, {KC_E, KC_O, KC_V, KC_Y, KC_W, KC_J, KC_R}},
    // 449. 일반 약어 | 매력 (초성 ㅁ+ㄹ / 중성 ㅐ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_F, KC_M, KC_Y}, {KC_A, KC_O, KC_F, KC_U, KC_R}},
    // 547. 일반 약어 | 백성 (초성 ㅂ+ㅅ / 중성 ㅐ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_F, KC_N, KC_O}, {KC_Q, KC_O, KC_R, KC_T, KC_J, KC_D}},
    // 548. 일반 약어 | 백제 (초성 ㅂ+ㅈ / 중성 ㅐ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_F, KC_L, KC_O}, {KC_Q, KC_O, KC_R, KC_W, KC_P}},
    // 593. 일반 약어 | 부탁 (초성 ㅂ+ㄷ / 중성 ㅜ+ㅏ / 종성 ㄱ)
    {{KC_A, KC_B, KC_E, KC_F, KC_I, KC_O}, {KC_Q, KC_N, KC_X, KC_K, KC_R}},
    // 609. 일반 약어 | 비교적 (초성 ㅂ+ㄱ / 중성 ㅛ / 종성 ㄱ)
    {{KC_A, KC_E, KC_K, KC_O, KC_V, KC_DOT}, {KC_Q, KC_L, KC_R, KC_Y, KC_W, KC_J, KC_R}},
    // 609. 일반 약어 | 비교적 (초성 ㅂ+ㄱ / 중성 ㅛ / 종성 ㄱ)
    {{KC_A, KC_E, KC_F, KC_K, KC_O, KC_R}, {KC_Q, KC_L, KC_R, KC_Y, KC_W, KC_J, KC_R}},
    // 610. 일반 약어 | 비극 (초성 ㅂ+ㄱ / 중성 ㅣ+ㅡ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_G, KC_K, KC_O}, {KC_Q, KC_L, KC_R, KC_M, KC_R}},
    // 649. 일반 약어 | 상대적 (초성 ㅅ+ㄷ / 중성 ㅐ / 종성 ㅇ+ㄱ)
    {{KC_A, KC_D, KC_F, KC_I, KC_N, KC_X}, {KC_T, KC_K, KC_D, KC_E, KC_O, KC_W, KC_J, KC_R}},
    // 649. 일반 약어 | 상대적 (초성 ㅅ+ㄷ / 중성 ㅐ / 종성 ㅇ+ㄱ)
    {{KC_A, KC_D, KC_E, KC_F, KC_I, KC_N}, {KC_T, KC_K, KC_D, KC_E, KC_O, KC_W, KC_J, KC_R}},
    // 670. 일반 약어 | 서쪽 (초성 ㅅ+ㅈ / 중성 ㅓ+ㅗ / 종성 ㄱ)
    {{KC_A, KC_E, KC_L, KC_N, KC_R, KC_V}, {KC_T, KC_J, SFT(KC_W), KC_H, KC_R}},
    // 729. 일반 약어 | 숙제 (초성 ㅅ+ㅈ / 중성 ㅜ+ㅔ / 종성 ㄱ)
    {{KC_A, KC_B, KC_C, KC_E, KC_L, KC_N}, {KC_T, KC_N, KC_R, KC_W, KC_P}},
    // 744. 일반 약어 | 시각 (초성 ㅅ+ㄱ / 중성 ㅣ+ㅏ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_F, KC_K, KC_N}, {KC_T, KC_L, KC_R, KC_K, KC_R}},
    // 895. 일반 약어 | 올림픽 (초성 ㄹ+ㅂ / 중성 ㅗ+ㅣ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_M, KC_O, KC_V}, {KC_D, KC_H, KC_F, KC_F, KC_L, KC_A, KC_V, KC_L, KC_R}},
    // 919. 일반 약어 | 위원장 (초성 ㅇ+ㅈ / 중성 ㅜ+ㅏ / 종성 ㄴ+ㅇ)
    {{KC_A, KC_B, KC_F, KC_J, KC_L, KC_S}, {KC_D, KC_N, KC_L, KC_D, KC_N, KC_J, KC_S, KC_W, KC_K, KC_D}},
    // 928. 일반 약어 | 육체 (초성 ㅇ+ㅎ / 중성 ㅜ+ㅔ / 종성 ㄱ)
    {{KC_A, KC_B, KC_C, KC_E, KC_H, KC_J}, {KC_D, KC_B, KC_R, KC_C, KC_P}},
    // 1041. 일반 약어 | 적극적 (초성 ㅈ+ㄱ / 중성 ㅓ+ㅡ / 종성 ㄱ)
    {{KC_A, KC_E, KC_G, KC_K, KC_L, KC_R}, {KC_W, KC_J, KC_R, KC_R, KC_M, KC_R, KC_W, KC_J, KC_R}},
    // 1183. 일반 약어 | 책상 (초성 ㅈ+ㅅ / 중성 ㅐ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_F, KC_L, KC_N}, {KC_C, KC_O, KC_R, KC_T, KC_K, KC_D}},
    // 1228. 일반 약어 | 택시 (초성 ㄷ+ㅅ / 중성 ㅐ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_F, KC_I, KC_N}, {KC_X, KC_O, KC_R, KC_T, KC_L}},
    // 1308. 일반 약어 | 핵심 (초성 ㅎ+ㅅ / 중성 ㅐ / 종성 ㄱ)
    {{KC_A, KC_D, KC_E, KC_F, KC_H, KC_N}, {KC_G, KC_O, KC_R, KC_T, KC_L, KC_A}}};

#endif
