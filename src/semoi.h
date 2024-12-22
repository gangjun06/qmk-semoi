#pragma once

#include "quantum.h"
typedef enum {
    CHOSUNG_TYPE = 0,
    JUNGSUNG_TYPE,
    JONGSEONG_TYPE,
} SemoiType;

typedef struct {
    const uint8_t   from[3];
    const uint16_t  to[2];
    const SemoiType type;
} SemoiLayout;

void matrix_scan_semoi(void);
bool process_record_semoi(uint16_t keycode, keyrecord_t *record);
