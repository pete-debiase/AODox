/* Copyright 2019 AO.industries
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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum AODox_layers {
    STNO,
    // SSYM,
    // QWTY,
    // QSYM,
    // MDA
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Steno layout
 * ┌───────┬─────┬─────┬─────┬─────┬─────┬─────┐             ┌─────┬─────┬─────┬─────┬─────┬─────┬───────┐
 * │   -   │ F1  │ F2  │ F3  │ F4  │ F5  │QWTY │ Center keys │ F13 │  F6 │  F7 │  F8 │  F9 │ F10 │  GRV  │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼─────┤   ┌─────┐   ├─────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │Ent/MDA│  Q  │  W  │  E  │  R  │  T  │ F14 │   │     │   │     │  Y  │  U  │  I  │  O  │  P  │  F22  │
 * ├───────┼─────┼─────┼─────╆─────╅─────┤     │   ├─────┤   │     ├─────╆─────╅─────┼─────┼─────┼───────┤
 * │Tab/SYM│  A  │  S  │  D  │  F  │  G  ├─────┤   │     │   ├─────┤  H  │  ←  │  ↓  │  ↑  │  →  │   "   │
 * ├───────┼─────┼─────┼─────╄─────╃─────┤ Esc │   └─────┘   │LCAG/├─────╄─────╃─────┼─────┼─────┼───────┤
 * │  F15  │  Z  │  X  │  C  │  V  │  B  │     ├─────┐ ┌─────┤  K  │  N  │  M  │  ,  │  .  │  ?  │  F23  │
 * └┬──────┼─────┼─────┼─────┼─────┼─────┼─────┤PgUp │ │ PgDn├─────┼─────┼─────┼─────┼─────┼─────┼──────┬┘
 *  │ LGui │Al/Dl│Sf/Bp│Cl/Sp│ F16 │ F17 │ F18 ├─────┤ ├─────┤ F19 │ F20 │ F21 │Cl/Sp│Sf/Bp│Al/Dl│ PtSc │
 *  └──────┴─────┴─────┴─────┤     │     │     │Hp/Hm│ │Mh/Ed│     │     │     ├─────┴─────┴─────┴──────┘
 *                           └─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┘
                  Left hand                                                     Right hand
 */
[STNO] = LAYOUT(
    // Left hand
    KC_MINS,      KC_F1,          KC_F2,         KC_F3,     KC_F4,  KC_F5,  KC_NO,
    KC_NO,        KC_Q,           KC_W,          KC_E,      KC_R,   KC_T,   KC_F14,
    KC_NO,        KC_A,           KC_S,          KC_D,      KC_F,   KC_G,
    KC_F15,       KC_Z,           KC_X,          KC_C,      KC_V,   KC_B,   KC_ESC, KC_PGUP,
    KC_LGUI, ALT_T(KC_DELT), SFT_T(KC_BSPC), CTL_T(KC_SPC), KC_F16, KC_F17, KC_F18, ALL_T(KC_HOME),

    // Center keys
    KC_NO,
    KC_NO,

    // Right hand
                      KC_F13,    KC_F6,   KC_F7,    KC_F8,         KC_F9,          KC_F10,      KC_GRV,
                      KC_NO,     KC_Y,    KC_U,     KC_I,          KC_O,            KC_P,       KC_F22,
                                 KC_H,   KC_LEFT,  KC_DOWN,        KC_UP,          KC_RGHT,     KC_QUOT,
    KC_PGDN,       LCAG_T(KC_K), KC_N,    KC_M,    KC_COMM,        KC_DOT,         KC_SLSH,     KC_F23,
    MEH_T(KC_END),    KC_F19,    KC_F20, KC_F21, CTL_T(KC_SPC), SFT_T(KC_BSPC), ALT_T(KC_DELT), KC_PSCR
),
// Other layers
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
