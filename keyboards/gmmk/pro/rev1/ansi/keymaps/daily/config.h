/* Copyright 2021 Gigahawk
 * Modified 2021 by usrfriendly for vial-qmk
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define DRIVER_1_LED_TOTAL 66 // GMMK Pro-specific LED mapping
#define DRIVER_2_LED_TOTAL 32 // GMMK Pro-specific LED mapping
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

//enable RGB Matrix Effects for Vial
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

// Additional RGB settings
// #define RGBLIGHT_HUE_STEP 5   // Smaller increments for finer color control, default 10
// #define RGBLIGHT_SAT_STEP 10  // Lower number = smaller change per press, default 17
// #define RGBLIGHT_VAL_STEP 10  // Lower number = smaller change per press, default 17
#define RGB_DISABLE_WHEN_USB_SUSPENDED // turns off RGB when computer is off

//Vial Keyboard UID
#define VIAL_KEYBOARD_UID {0x03, 0x75, 0x3D, 0xEC, 0x97, 0xC2, 0xE9, 0x9A}
#define VIAL_UNLOCK_COMBO_ROWS { 1, 10 }
#define VIAL_UNLOCK_COMBO_COLS { 3, 4 }

// Additional custom configs
#define VIAL_ENCODER_DEFAULT { KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
// - hardcoded fallback encoder/knob map
#define VIAL_ENCODER_KEYCODE_DELAY 10
#define FORCE_NKRO // keeb will not fallback to 6KRO, starts in NKRO
#define DEBOUNCE 8 // debounce time in ms for asymmetrical eager/deferred debounce (see rules.mk DEBOUNCE_TYPE)
// if inputs skipped, decrease debounce; if one press doubleinputs, increase