#ifndef OVERLAY_FONT_H
#define OVERLAY_FONT_H

#include <stdint.h>

#define OVERLAY_FONT_CHAR_W 8
#define OVERLAY_FONT_CHAR_H 12
#define OVERLAY_FONT_FIRST_CHAR 32
#define OVERLAY_FONT_LAST_CHAR 126
#define OVERLAY_FONT_CHAR_COUNT (OVERLAY_FONT_LAST_CHAR - OVERLAY_FONT_FIRST_CHAR + 1)

/* Embedded 8x12 bitmap font: 12 bytes per character (1 bit per pixel, MSB left) */
extern const uint8_t g_overlay_font_8x12[OVERLAY_FONT_CHAR_COUNT][12];

#endif /* OVERLAY_FONT_H */
