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
    // MDIA
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Steno Layout
    * ┌───────┬─────┬─────┬─────┬─────┬─────┬─────┐             ┌─────┬─────┬─────┬─────┬─────┬─────┬───────┐
    * │   -   │ F1  │ F2  │ F3  │ F4  │ F5  │QWTY │             │ F13 │  F6 │  F7 │  F8 │  F9 │ F10 │  GRV  │
    * ├───────┼─────┼─────┼─────┼─────┼─────┼─────┤   ┌─────┐   ├─────┼─────┼─────┼─────┼─────┼─────┼───────┤
    * │Ent/MED│  Q  │  W  │  E  │  R  │  T  │ F14 │   │     │   │     │  Y  │  U  │  I  │  O  │  P  │  F22  │
    * ├───────┼─────┼─────┼─────╆─────╅─────┤CALEN│   ├─────┤   │     ├─────╆─────╅─────┼─────┼─────┼───────┤
    * │Tab/SYM│  A  │  S  │  D  │  F  │  G  ├─────┤   │     │   ├─────┤  H  │  ←  │  ↓  │  ↑  │  →  │   "   │
    * ├───────┼─────┼─────┼─────╄─────╃─────┤ Esc │   └─────┘   │LCAG/├─────╄─────╃─────┼─────┼─────┼───────┤
    * │  F15  │  Z  │  X  │  C  │  V  │  B  │     ├─────┐ ┌─────┤  K  │  N  │  M  │  ,  │  .  │  ?  │  F23  │
    * └┬──────┼─────┼─────┼─────┼─────┼─────┼─────┤     │ │     ├─────┼─────┼─────┼─────┼─────┼─────┼──────┬┘
    *  │ LGui │Al/Dl│Sf/Bp│Cl/Sp│     │     │     ├─────┤ ├─────┤     │     │ F21 │Cl/Sp│Sf/Bp│Al/Dl│ PtSc │
    *  └──────┴─────┴─────┴─────┤     │     │     │     │ │     │     │     │     ├─────┴─────┴─────┴──────┘
    *                           └─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┘
    */
    // TODO: Work on keymap
    // TODO: Try compiling
    [STNO] = LAYOUT(
        k00, k01, k02, k03, k04, k05, k06, k010, k011, k012, k013, k014, k015, k016,
        k10, k11, k12, k13, k14, k15, k16, k18, k110, k111, k112, k113, k114, k115, k116,
        k20, k21, k22, k23, k24, k25, k26, k28, k210, k211, k212, k213, k214, k215, k216,
        k30, k31, k32, k33, k34, k35, k37, k39, k311, k312, k313, k314, k315, k316,
        k40, k41, k42, k43, k44, k45, k46, k47, k49, k410, k411, k412, k413, k414, k415, k416
    ),
    // [_FN] = LAYOUT(
    //     QMKBEST, QMKURL,  _______,
    //         RESET,    XXXXXXX
    // )
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
