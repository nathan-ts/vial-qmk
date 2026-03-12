/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//      ESC      F1       F2       F3       F4       F5       F6       F7       F8       F9       F10      F11      F12	     Prt           Rotary(Mute)
//      ~        1        2        3        4        5        6        7        8        9        0         -       (=)	     BackSpc           Del
//      Tab      Q        W        E        R        T        Y        U        I        O        P        [        ]        \                 PgUp
//      Caps     A        S        D        F        G        H        J        K        L        ;        "                 Enter             PgDn
//      Sh_L              Z        X        C        V        B        N        M        ,        .        ?                 Sh_R     Up       End
//      Ct_L     Win_L    Alt_L                               SPACE                               Alt_R    FN       Ct_R     Left     Down     Right


    // The FN key by default maps to a momentary toggle to layer 1 to provide access to the QK_BOOT key (to put the board into bootloader mode). Without
    // this mapping, you have to open the case to hit the button on the bottom of the PCB (near the USB cable attachment) while plugging in the USB
    // cable to get the board into bootloader mode - definitely not fun when you're working on your QMK builds. Remove this and put it back to KC_RGUI
    // if that's your preference.
    //
    // To put the keyboard in bootloader mode, use FN+backslash. If you accidentally put it into bootloader, you can just unplug the USB cable and
    // it'll be back to normal when you plug it back in.
    //
    // This keyboard defaults to 6KRO instead of NKRO for compatibility reasons (some KVMs and BIOSes are incompatible with NKRO).
    // Since this is, among other things, a "gaming" keyboard, a key combination to enable NKRO on the fly is provided for convenience.
    // Press Fn+N to toggle between 6KRO and NKRO. This setting is persisted to the EEPROM and thus persists between restarts.
    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT(
        _______, KC_MYCM, KC_WHOM, KC_CALC, KC_MSEL, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,          _______,
        _______, RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, RGB_VAI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,            _______,
        _______, _______, RGB_VAD, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, RGB_HUI, _______, _______, _______, NK_TOGG, _______, _______, _______, _______,          _______, RGB_MOD, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, RGB_SPD, RGB_RMOD, RGB_SPI
    ),

    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,            _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    ),

    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,            _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    ),

};
// clang-format on

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
#endif

// ================
// AUTO CLICK MACRO
// ================
#define AUTO_CLICK_INTERVAL 100         // click speed, in ms
#define TAP_HOLD_THRESHOLD 200          // threshold in ms to distinguish tap vs hold

static bool auto_click_active = false;
static bool toggle_mode = false;        // tracks if we are in "sticky" toggle mode
static uint16_t last_click_time = 0;    // ensures events only happen every AUTO_CLICK_INTERVAL
static bool auto_click_held = false;    // tracks if the auto click trigger key is currently being pressed
static uint16_t press_timer = 0;        // tracks how long the key has been held

// ===================
// AUTO KEYPRESS MACRO
// ===================

// Note: Layer 2 is reserved for this keypress macro functionality. 
#define AUTO_KEYPRESS_INTERVAL 100          // keypress speed, in ms

static bool keypress_macro_active = false;
static uint16_t last_pressed_key = KC_NO;   // Stores the selected key
static uint8_t keypress_macro_row = 0;      // Stores the position of the key
static uint8_t keypress_macro_col = 0;      // Stores the position of the key
static uint16_t last_press_time = 0;

// ==========================
// GENERAL KEYBOARD FUNCTIONS
// ==========================

enum custom_keycodes {
    KC_AUTO_CLICK = QK_KB_0,
    KEYPRESS_MACRO
};
// Vial custom keycodes: https://get.vial.today/docs/custom_keycode.html

/// @brief Callback function triggered on any key press/release event
/// @param keycode 
/// @param record 
/// @return boolean
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // KILL SWITCH: If active, any key press (except MO(2)) stops the keypress macro
    if (keypress_macro_active && record->event.pressed && keycode != MO(2)) {
        dprint("Macro killed. Returning to layer 0.\n"); // Debug message
        keypress_macro_active = false;
        unregister_code(last_pressed_key);
        uint8_t led_index = g_led_config.matrix_co[keypress_macro_row][keypress_macro_col];
        rgb_matrix_set_color(led_index, 0, 0, 0); // reset the LED colour
        layer_move(0);
        return true; 
    }
    switch (keycode) {
        // Auto click macro - different behaviour when tapped vs held
        case KC_AUTO_CLICK: 
            if (record->event.pressed) {
                press_timer = timer_read(); // Start timer when pressed
                auto_click_held = true;
            } else { // Key released: Check if it was a short tap or a long hold
                auto_click_held = false;
                if (timer_elapsed(press_timer) < TAP_HOLD_THRESHOLD) {
                    // TAP: Toggle the "sticky" mode
                    toggle_mode = !toggle_mode;
                    auto_click_active = toggle_mode;
                } else {
                    // HOLD: Stop clicking once released
                    toggle_mode = false;
                    auto_click_active = false;
                    unregister_code(KC_MS_BTN1);
                }
            }
            return false; // event caught by function
        case KEYPRESS_MACRO: 
            return true;
        default:
            // SAFETY TOGGLE: if any other key is pressed, turn off auto click
            if (record->event.pressed && auto_click_active) {
                auto_click_active = false;
                unregister_code(KC_MS_BTN1);
            }
            // Capture keys while on Layer 2
            if (record->event.pressed && layer_state_is(2)) {
                last_pressed_key = keycode;
                keypress_macro_active = true;
                keypress_macro_row = record->event.key.row;
                keypress_macro_col = record->event.key.col;
                return false; 
            }
            return true; // event passthrough to system
    }
}

/// @brief Custom matrix scanning routine additions (note: this runs very frequently)
/// @param  
void matrix_scan_user(void) {
    // KC_AUTO_CLICK logic
    // Auto click if in toggle_mode OR the key is currently physically held
    if (toggle_mode || auto_click_held) {
        if (timer_elapsed(last_click_time) >= AUTO_CLICK_INTERVAL) {
            tap_code(KC_MS_BTN1);
            last_click_time = timer_read();
        }
    }

    // KEYPRESS_MACRO logic
    if (keypress_macro_active) {
        if (timer_elapsed(last_press_time) >= AUTO_KEYPRESS_INTERVAL) {
            dprint("Macro firing: "); dprintf("%d\n", last_pressed_key); // Print the key being pressed
            tap_code(last_pressed_key);
            last_press_time = timer_read();
        }
    }
}

/// @brief Advanced RGB control logic
/// @param led_min 
/// @param led_max 
/// @return true
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // Left side LED and CapsLock turns green when CapsLock is on
    // https://www.reddit.com/r/glorious/comments/rxj1h8/
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(3, 0, 255, 0); //capslock key
		RGB_MATRIX_INDICATOR_SET_COLOR(67, 0, 255, 0); //Side led 01
		RGB_MATRIX_INDICATOR_SET_COLOR(70, 0, 255, 0); //Side led 02
		RGB_MATRIX_INDICATOR_SET_COLOR(73, 0, 255, 0); //Side led 03
		RGB_MATRIX_INDICATOR_SET_COLOR(76, 0, 255, 0); //Side led 04
		RGB_MATRIX_INDICATOR_SET_COLOR(80, 0, 255, 0); //Side led 05
		RGB_MATRIX_INDICATOR_SET_COLOR(83, 0, 255, 0); //Side led 06
		RGB_MATRIX_INDICATOR_SET_COLOR(87, 0, 255, 0); //Side led 07
		RGB_MATRIX_INDICATOR_SET_COLOR(91, 0, 255, 0); //Side led 08
    } else {
        // Reset these LEDs so they return to the default keyboard effect; use an empty color to clear manual override
        RGB_MATRIX_INDICATOR_SET_COLOR(3, 0, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(67, 0, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(70, 0, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(73, 0, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(76, 0, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(80, 0, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(83, 0, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(87, 0, 0, 0);
        RGB_MATRIX_INDICATOR_SET_COLOR(91, 0, 0, 0);
    }

    // NKRO indicator (N turns red when NKRO is disabled)
    // keymap_config.nkro is the variable that tracks the internal status
    // Note: 38 is the key index for the "N" key
    if (!keymap_config.nkro) {
        // if NKRO is OFF, light up the "N" key red
        RGB_MATRIX_INDICATOR_SET_COLOR(38, 255, 0, 0); 
    } else {
        // Reset the LED for "N" key
        RGB_MATRIX_INDICATOR_SET_COLOR(38, 0, 0, 0);
    }

    // KEYPRESS_MACRO logic: only blink the macro'd key
    if (keypress_macro_active) {
        uint8_t led_index = g_led_config.matrix_co[keypress_macro_row][keypress_macro_col];
        if ((timer_read() / AUTO_KEYPRESS_INTERVAL) % 2 == 0) {
            RGB_MATRIX_INDICATOR_SET_COLOR(led_index, 255, 0, 0); // Blink Red
        }
    }

    return true;
}
