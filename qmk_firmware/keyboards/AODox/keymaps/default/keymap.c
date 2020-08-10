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
    SNPD,
    QWTY,
    QSYM,
    MDIA,
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*Steno
 * ┌───────┬─────┬─────┬─────┬─────┬─────┬─────┐             ┌─────┬─────┬─────┬─────┬─────┬─────┬───────┐
 * │   -   │ F1  │ F2  │ F3  │ F4  │ F5  │QWTY │ Center keys │ F13 │  F6 │  F7 │  F8 │  F9 │ F10 │   ~   │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼─────┤   ┌─────┐   ├─────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │Ent/MDA│  Q  │  W  │  E  │  R  │  T  │ F14 │   │     │   │     │  Y  │  U  │  I  │  O  │  P  │  F22  │
 * ├───────┼─────┼─────┼─────╆─────╅─────┤     │   ├─────┤   │     ├─────╆─────╅─────┼─────┼─────┼───────┤
 * │Tab/SYM│  A  │  S  │  D  │  F  │  G  ├─────┤   │     │   ├─────┤  H  │  ←  │  ↓  │  ↑  │  →  │   "   │
 * ├───────┼─────┼─────┼─────╄─────╃─────┤Esc/ │   └─────┘   │  K/ ├─────╄─────╃─────┼─────┼─────┼───────┤
 * │  F15  │  Z  │  X  │  C  │  V  │  B  │LCAG ├─────┐ ┌─────┤ LCAG│  N  │  M  │  ,  │  .  │  ?  │  F23  │
 * └┬──────┼─────┼─────┼─────┼─────┼─────┼─────┤PgUp │ │ PgDn├─────┼─────┼─────┼─────┼─────┼─────┼──────┬┘
 *  │ LGui │Dl/Al│Bp/Sf│Sp/Cl│ F16 │ F17 │ F18 ├─────┤ ├─────┤ F19 │ F20 │ F21 │Sp/Cl│Bp/Sf│Is/Al│ PtSc │
 *  └──────┴─────┴─────┴─────┤     │     │     │Hm/Hp│ │Ed/Mh│     │     │     ├─────┴─────┴─────┴──────┘
 *                           └─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┘
                  Left hand                                                     Right hand
 */
[STNO] = LAYOUT(
    // Left hand
    KC_MINS,              KC_F1,          KC_F2,         KC_F3,     KC_F4,  KC_F5,  TG(QWTY),
    LT(MDIA, KC_ENT),     KC_Q,           KC_W,          KC_E,      KC_R,   KC_T,   KC_F14,
    LT(SNPD, KC_TAB),     KC_A,           KC_S,          KC_D,      KC_F,   KC_G,
    KC_F15,               KC_Z,           KC_X,          KC_C,      KC_V,   KC_B,   LCAG_T(KC_ESC), KC_PGUP,
    KC_LGUI,         ALT_T(KC_DELT), SFT_T(KC_BSPC), CTL_T(KC_SPC), KC_F16, KC_F17, KC_F18,         ALL_T(KC_HOME),

    // Center keys
    TG(QWTY),
    KC_TRNS,

    // Right hand
                      KC_F13,    KC_F6,   KC_F7,    KC_F8,         KC_F9,          KC_F10,     KC_GRV,
                      KC_NO,     KC_Y,    KC_U,     KC_I,          KC_O,            KC_P,      KC_F22,
                                 KC_H,   KC_LEFT,  KC_DOWN,        KC_UP,          KC_RGHT,    KC_QUOT,
    KC_PGDN,       LCAG_T(KC_K), KC_N,    KC_M,    KC_COMM,        KC_DOT,         KC_SLSH,    KC_F23,
    MEH_T(KC_END),    KC_F19,    KC_F20, KC_F21, CTL_T(KC_SPC), SFT_T(KC_BSPC), ALT_T(KC_INS), KC_PSCR
),

/* Steno numpad
 * ┌───────┬─────┬─────┬─────┬─────┬─────┬─────┐             ┌─────┬─────┬─────┬─────┬─────┬─────┬───────┐
 * │       │     │     │     │     │     │     │ Center keys │NumLk│     │     │     │     │ F11 │  F12  │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼─────┤   ┌─────┐   ├─────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │       │     │     │     │     │     │     │   │     │   │ CALC│  :  │  7  │  8  │  9  │  *  │   \   │
 * ├───────┼─────┼─────┼─────╆─────╅─────┤     │   ├─────┤   │     ├─────╆─────╅─────┼─────┼─────┼───────┤
 * │       │     │     │     │     │     ├─────┤   │     │   ├─────┤  .  │  4  │  5  │  6  │  +  │   -   │
 * ├───────┼─────┼─────┼─────╄─────╃─────┤     │   └─────┘   │     ├─────╄─────╃─────┼─────┼─────┼───────┤
 * │       │     │     │     │     │     │     ├─────┐ ┌─────┤     │  ,  │  1  │  2  │  3  │  /  │       │
 * └┬──────┼─────┼─────┼─────┼─────┼─────┼─────┤     │ │     ├─────┼─────┼─────┼─────┼─────┼─────┼──────┬┘
 *  │      │     │     │     │     │     │     ├─────┤ ├─────┤     │     │  0  │     │     │     │      │
 *  └──────┴─────┴─────┴─────┤     │     │     │     │ │     │     │     │     ├─────┴─────┴─────┴──────┘
 *                           └─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┘
                  Left hand                                                     Right hand
 */
[SNPD] = LAYOUT(
    // Left hand
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

    // Center keys
    KC_TRNS,
    KC_TRNS,

    // Right hand
             KC_NLCK, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F11,  KC_F12,
             KC_CALC, KC_COLN,  KC_7,    KC_8,    KC_9,   KC_PAST, KC_BSLS,
                      KC_PDOT,  KC_4,    KC_5,    KC_6,   KC_PPLS, KC_PMNS,
    KC_TRNS, KC_TRNS, KC_TRNS,  KC_1,    KC_2,    KC_3,   KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,  KC_0,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* Qwerty layout
 * ┌───────┬─────┬─────┬─────┬─────┬─────┬─────┐             ┌─────┬─────┬─────┬─────┬─────┬─────┬───────┐
 * │   -   │ F1  │ F2  │ F3  │ F4  │ F5  │     │ Center keys │ F13 │  F6 │  F7 │  F8 │  F9 │ F10 │   ~   │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼─────┤   ┌─────┐   ├─────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │Ent/MDA│  Q  │  W  │  E  │  R  │  T  │ F14 │   │     │   │ CALC│  Y  │  U  │  I  │  O  │  P  │   \   │
 * ├───────┼─────┼─────┼─────╆─────╅─────┤     │   ├─────┤   │     ├─────╆─────╅─────┼─────┼─────┼───────┤
 * │Tab/SYM│  A  │  S  │  D  │  F  │  G  ├─────┤   │ Ins │   ├─────┤  H  │  J  │  K  │  L  │  ;  │ "/SYM │
 * ├───────┼─────┼─────┼─────╄─────╃─────┤Esc/ │   └─────┘   │  K/ ├─────╄─────╃─────┼─────┼─────┼───────┤
 * │ (/Sft │  Z  │  X  │  C  │  V  │  B  │LCAG ├─────┐ ┌─────┤ LCAG│  N  │  M  │  ,  │  .  │  ?  │ )/Sft │
 * └┬──────┼─────┼─────┼─────┼─────┼─────┼─────┤PgUp │ │ PgDn├─────┼─────┼─────┼─────┼─────┼─────┼──────┬┘
 *  │ LGui │Dl/Al│Bp/Sf│Sp/Cl│ F16 │ Bsp │ Dlt ├─────┤ ├─────┤ F19 │ Spc │  ←  │ ↓/Cl│ ↑/Sf│ →/Al│ PtSc │
 *  └──────┴─────┴─────┴─────┤     │     │     │Hm/Hp│ │Ed/Mh│     │     │     ├─────┴─────┴─────┴──────┘
 *                           └─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┘
                  Left hand                                                     Right hand
 */
[QWTY] = LAYOUT(
    // Left hand
    KC_MINS,              KC_F1,          KC_F2,         KC_F3,     KC_F4,  KC_F5,   KC_TRNS,
    LT(MDIA, KC_ENT),     KC_Q,           KC_W,          KC_E,      KC_R,   KC_T,    KC_F14,
    LT(QSYM, KC_TAB),     KC_A,           KC_S,          KC_D,      KC_F,   KC_G,
    KC_LSPO,              KC_Z,           KC_X,          KC_C,      KC_V,   KC_B,    LCAG_T(KC_ESC), KC_PGUP,
    KC_LGUI,         ALT_T(KC_DELT), SFT_T(KC_BSPC), CTL_T(KC_SPC), KC_F16, KC_BSPC, KC_DELT,        ALL_T(KC_HOME),

    // Center keys
    KC_TRNS,
    KC_INS,

    // Right hand
                      KC_F13,    KC_F6,   KC_F7,    KC_F8,          KC_F9,        KC_F10,       KC_GRV,
                      KC_ENT,    KC_Y,    KC_U,     KC_I,           KC_O,          KC_P,        KC_BSLS,
                                 KC_H,    KC_J,     KC_K,           KC_L,         KC_SCLN,      LT(QSYM, KC_QUOT),
    KC_PGDN,       LCAG_T(KC_K), KC_N,    KC_M,    KC_COMM,         KC_DOT,       KC_SLSH,      KC_RSPC,
    MEH_T(KC_END),    KC_F19,    KC_SPC, KC_LEFT, CTL_T(KC_DOWN), SFT_T(KC_UP), ALT_T(KC_RGHT), KC_PSCR
),

/* Qwerty symbols
 * ┌───────┬─────┬─────┬─────┬─────┬─────┬─────┐             ┌─────┬─────┬─────┬─────┬─────┬─────┬───────┐
 * │       │     │     │     │     │     │     │ Center keys │     │     │     │     │     │     │       │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼─────┤   ┌─────┐   ├─────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │       │  #  │  @  │  {  │  }  │  |  │     │   │     │   │     │  -  │  7  │  8  │  9  │  *  │   \   │
 * ├───────┼─────┼─────┼─────╆─────╅─────┤     │   ├─────┤   │     ├─────╆─────╅─────┼─────┼─────┼───────┤
 * │       │  !  │  $  │  [  │  ]  │  `  ├─────┤   │     │   ├─────┤  :  │  4  │  5  │  6  │  +  │   -   │
 * ├───────┼─────┼─────┼─────╄─────╃─────┤     │   └─────┘   │     ├─────╄─────╃─────┼─────┼─────┼───────┤
 * │       │  %  │  ^  │  &  │  =  │     │     ├─────┐ ┌─────┤     │  ,  │  1  │  2  │  3  │  /  │       │
 * └┬──────┼─────┼─────┼─────┼─────┼─────┼─────┤     │ │     ├─────┼─────┼─────┼─────┼─────┼─────┼──────┬┘
 *  │      │     │     │     │     │  .  │     ├─────┤ ├─────┤     │     │  0  │  ↓  │  ↑  │     │      │
 *  └──────┴─────┴─────┴─────┤     │     │     │     │ │     │     │     │     ├─────┴─────┴─────┴──────┘
 *                           └─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┘
                  Left hand                                                     Right hand
 */
[QSYM] = LAYOUT(
    // Left hand
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_HASH,  KC_AT,  KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS,
    KC_TRNS, KC_EXLM, KC_DLR,  KC_LBRC, KC_RBRC, KC_G,
    KC_TRNS, KC_PERC, KC_CIRC, KC_AMPR, KC_EQL,  KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PDOT, KC_TRNS, KC_TRNS,

    // Center keys
    KC_TRNS,
    KC_TRNS,

    // Right hand
             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_CALC, KC_MINS,   KC_7,    KC_8,    KC_9,  KC_ASTR, KC_BSLS,
                      KC_COLN,   KC_4,    KC_5,    KC_6,  KC_PPLS, KC_MINS,
    KC_TRNS, KC_TRNS, KC_COMM,   KC_1,    KC_2,    KC_3,  KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,   KC_0,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* Media, power, and RESET
 * ┌───────┬─────┬─────┬─────┬─────┬─────┬─────┐             ┌─────┬─────┬─────┬─────┬─────┬─────┬───────┐
 * │       │     │     │     │     │     │     │ Center keys │     │     │     │     │     │     │ RESET │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼─────┤   ┌─────┐   ├─────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │       │     │     │     │VolUp│     │     │   │SLEEP│   │     │     │     │     │     │     │       │
 * ├───────┼─────┼─────┼─────╆─────╅─────┤     │   ├─────┤   │     ├─────╆─────╅─────┼─────┼─────┼───────┤
 * │       │     │Prev │Next │VolDn│     ├─────┤   │ WAKE│   ├─────┤     │     │     │     │     │ POWER │
 * ├───────┼─────┼─────┼─────╄─────╃─────┤     │   └─────┘   │     ├─────╄─────╃─────┼─────┼─────┼───────┤
 * │       │     │     │     │Mute │     │     ├─────┐ ┌─────┤     │     │     │     │     │     │       │
 * └┬──────┼─────┼─────┼─────┼─────┼─────┼─────┤     │ │     ├─────┼─────┼─────┼─────┼─────┼─────┼──────┬┘
 *  │      │     │     │     │Play/│     │     ├─────┤ ├─────┤     │     │     │     │     │     │      │
 *  └──────┴─────┴─────┴─────┤Pause│     │     │     │ │     │     │     │     ├─────┴─────┴─────┴──────┘
 *                           └─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┘
                  Left hand                                                     Right hand
 */
[MDIA] = LAYOUT(
    // Left hand
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLU, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT, KC_VOLD, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_TRNS, KC_TRNS,

    // Center keys
    KC_SLEP,
    KC_WAKE,

    // Right hand
             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PWR,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* Blank layer
 * ┌───────┬─────┬─────┬─────┬─────┬─────┬─────┐             ┌─────┬─────┬─────┬─────┬─────┬─────┬───────┐
 * │       │     │     │     │     │     │     │ Center keys │     │     │     │     │     │     │       │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼─────┤   ┌─────┐   ├─────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │       │     │     │     │     │     │     │   │     │   │     │     │     │     │     │     │       │
 * ├───────┼─────┼─────┼─────╆─────╅─────┤     │   ├─────┤   │     ├─────╆─────╅─────┼─────┼─────┼───────┤
 * │       │     │     │     │     │     ├─────┤   │     │   ├─────┤     │     │     │     │     │       │
 * ├───────┼─────┼─────┼─────╄─────╃─────┤     │   └─────┘   │     ├─────╄─────╃─────┼─────┼─────┼───────┤
 * │       │     │     │     │     │     │     ├─────┐ ┌─────┤     │     │     │     │     │     │       │
 * └┬──────┼─────┼─────┼─────┼─────┼─────┼─────┤     │ │     ├─────┼─────┼─────┼─────┼─────┼─────┼──────┬┘
 *  │      │     │     │     │     │     │     ├─────┤ ├─────┤     │     │     │     │     │     │      │
 *  └──────┴─────┴─────┴─────┤     │     │     │     │ │     │     │     │     ├─────┴─────┴─────┴──────┘
 *                           └─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┘
                  Left hand                                                     Right hand
 */
// [BLNK] = LAYOUT(
//     // Left hand
//     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

//     // Center keys
//     KC_TRNS,
//     KC_TRNS,

//     // Right hand
//              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
// ),
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
