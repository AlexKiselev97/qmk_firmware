// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

const int NavLayer = 1;
const int SymLayer = 2;
const int NumLayer = 3;
const int MfLayer = 4;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,        KC_W,          KC_E,        KC_R,          KC_T,             KC_Y,   KC_U,           KC_I,        KC_O,           KC_P,
    GUI_T(KC_A), ALT_T(KC_S),   CTL_T(KC_D), SFT_T(KC_F),   KC_G,             KC_H,   SFT_T(KC_J),    CTL_T(KC_K), ALT_T(KC_L),    GUI_T(KC_SCLN),
    KC_Z,        KC_X,          KC_C,        KC_V,          KC_B,             KC_N,   KC_M,           KC_COMM,     KC_DOT,         KC_SLSH,
                      LT(NumLayer, KC_SPC), LT(NavLayer, KC_TAB),             MO(SymLayer), MO(MfLayer)
  ),

  // Navigation layer
  [1] = LAYOUT(
    KC_ESC,      KC_NO,         KC_NO,       KC_NO,         KC_NO,            KC_PGUP, KC_HOME,       KC_UP,       KC_END,         KC_NO,
    KC_LGUI,     KC_LALT,       KC_LCTL,     KC_LSFT,       KC_NO,            KC_PGDN, KC_LEFT,       KC_DOWN,     KC_RIGHT,       KC_NO,
    LSFT(KC_Z),  LSFT(KC_X),    LSFT(KC_C),  LSFT(KC_V),    KC_NO,            KC_NO,   LCTL(KC_LEFT), KC_CAPS,     LCTL(KC_RIGHT), KC_NO,
                                             KC_NO,         KC_NO,            KC_ENT,   KC_BSPC
  ),

  // Symbol layer
  [2] = LAYOUT(
    KC_GRV,      LSFT(KC_LBRC), KC_MINUS,    LSFT(KC_RBRC), KC_BSLS,          KC_NO,   LSFT(KC_7),    LSFT(KC_8),  LSFT(KC_9),     KC_NO,
    KC_NO,       KC_LBRC,       KC_EQL,      KC_RBRC,       KC_QUOT,          KC_NO,   LSFT(KC_4),    LSFT(KC_5),  LSFT(KC_6),     KC_NO,
    KC_NO,       LSFT(KC_9),    KC_UNDS,     LSFT(KC_0),    KC_NO,            KC_NO,   LSFT(KC_1),    LSFT(KC_2),  LSFT(KC_3),     KC_NO,
                                             KC_NO,         KC_NO,            KC_NO,   KC_NO
  ),

  // Num layer
  [3] = LAYOUT(
    KC_NO,       KC_NO,         KC_NO,       KC_NO,         KC_NO,            KC_NO,   KC_7,          KC_8,        KC_9,           KC_NO,
    KC_NO,       KC_NO,         KC_NO,       KC_NO,         KC_NO,            KC_NO,   KC_4,          KC_5,        KC_6,           KC_0,
    KC_NO,       KC_NO,         KC_NO,       KC_NO,         KC_NO,            KC_NO,   KC_1,          KC_2,        KC_3,           KC_NO,
                                             KC_NO,         KC_NO,            KC_NO,   KC_NO
  ),

  // Multimedia and F layer
  [4] = LAYOUT(
    KC_NO,       KC_F9,         KC_F8,       KC_F7,         KC_F12,           KC_NO,   KC_KB_VOLUME_DOWN, KC_MUTE,   KC_KB_VOLUME_UP, KC_NO,
    KC_NO,       KC_F6,         KC_F5,       KC_F4,         KC_F11,           KC_NO,   KC_LSFT,        KC_LCTL,      KC_LALT,         KC_LGUI,
    KC_NO,       KC_F3,         KC_F2,       KC_F1,         KC_F10,           KC_NO,   KC_MPRV,        KC_MPLY,      KC_MNXT,         KC_NO,
                                             KC_NO,         KC_NO,            KC_NO,   KC_NO
  ),
};
