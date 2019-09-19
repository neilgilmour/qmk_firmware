#include QMK_KEYBOARD_H

#define SHF_CAP LSFT_T(KC_CAPS)
#define BTN1 KC_MS_BTN1
#define BTN2 KC_MS_BTN2
#define BTN3 KC_MS_BTN3
#define BTN4 KC_MS_BTN4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_60_iso(
    //       2        3        4        5        6        7        8        9        10       11       12       13       14       15       16
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
    MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUBS, KC_ENT,
    SHF_CAP, KC_GRV,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LALT, KC_LGUI,                   KC_SPC,                             KC_RGUI, KC_RALT, TT(1), TT(2)),

  [1] = LAYOUT_60_iso(
    //       2        3        4        5        6        7        8        9        10       11       12       13       14       15       16
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    _______, _______, KC_UP,   KC_EJCT, _______, _______, KC_INS,  KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_PSCR, KC_PAUS,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, _______, _______,
    _______, _______, KC_MRWD, KC_MFFD, _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,
    _______, _______, _______,                   KC_MPLY,                            _______, _______, _______, _______),

  [2] = LAYOUT_60_iso(
    //       2        3        4        5        6        7        8        9        10       11       12       13       14       15       16
    _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
    _______, _______, KC_MS_U, _______, _______, _______, _______, BTN1,    KC_WH_U, BTN2,    _______, _______, _______,
    _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______, KC_WH_L, KC_WH_D, KC_WH_R, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, BTN3,    BTN4,    _______, _______, _______, _______, _______,
    _______, _______, _______,                   _______,                            _______, _______, _______, _______),

};
