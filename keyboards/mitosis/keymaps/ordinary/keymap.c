#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 * .--------------------------------------------. .--------------------------------------------.
 * | Q      | W      | E      | R      | T      | | Y      | U      | I      | O      | P      |
 * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
 * | A      | S      | D      | F      | G      | | H      | J      | K      | L      | ;      |
 * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
 * | Z      | X      | C      | V      | B      | | N      | M      | ,<     | .>     | /?     |
 * '--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------'
 *          | ESC    | ⇧ L    | TT(2)  | TT(1)  | | F19    | TG(3)  | ⇧ R    | ⌫      |
 *          |--------+--------+--------+--------| |--------+--------+--------+--------|
 *          | TAB    | ⌥ L    | ⌘ L    | L Ctrl | | Space  | ⇧ R    | R Ctrl | ↵      |
 *          '-----------------------------------' '-----------------------------------'
 */

[0] = LAYOUT(
  KC_Q,    KC_W,    KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,
  KC_A,    KC_S,    KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,
  KC_Z,    KC_X,    KC_C,     KC_V,     KC_B,      KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,
           KC_ESC,  KC_LSFT,  TT(2),    TT(1),     KC_F19,   TT(3),    KC_RSFT,  KC_BSPC,
           KC_TAB,  KC_LALT,  KC_LGUI,  KC_LCTL,   KC_SPC,   KC_RSFT,  KC_RCTL,    KC_ENT
),

/*
 * .--------------------------------------------. .--------------------------------------------.
 * | `~     | xxxxxx | TAB    | xxxxxx | '"     | | -_     | =+     | [{     | ]}     | \|     |
 * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
 * | 1!     | 2@     | 3#     | 4$     | 5%     | | 6^     | 7&     | 8*     | 9(     | 0)     |
 * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
 * | xxxxxx | xxxxxx | xxxxxx | xxxxxx | xxxxxx | | xxxxxx | xxxxxx | ,<     | .>     | '"     |
 * '--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------'
 *          | xxxxxx | xxxxxx | xxxxxx | -voov- | | Space  | xxxxxx | ⇧ R    | ⌫      |
 *          |--------+--------+--------+--------| |--------+--------+--------+--------|
 *          | xxxxxx | xxxxxx | xxxxxx | ⇧ L    | | R Ctrl | ⌘ R    | ⌥ R    | ↵      |
 *          '-----------------------------------' '-----------------------------------'
 */
[1] = LAYOUT(
  KC_GRV,  KC_NO,   KC_TAB,   KC_NO,    KC_QUOT,   KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,
  KC_1,    KC_2,    KC_3,     KC_4,     KC_5,      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_COMM,  KC_DOT,   KC_QUOT,
           KC_NO,   KC_NO,    KC_NO,    KC_TRNS,   KC_SPC,   KC_NO,    KC_RSFT,  KC_BSPC,
           KC_NO,   KC_NO,    KC_NO,    KC_LSFT,   KC_RCTL,  KC_RGUI,  KC_RALT,  KC_ENT
),

/*
 * .--------------------------------------------. .--------------------------------------------.
 * | ESC    | F1     | F2     | F3     | F4     | | xxxxxx | xxxxxx | xxxxxx | xxxxxx | ⌫      |
 * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
 * | TAB    | F5     | F6     | F7     | F8     | | ←      | ↓      | ↑      | →      | ↵      |
 * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
 * | F18    | F9     | F10    | F11    | F12    | | F13    | F14    | F15    | F16    | F17    |
 * '--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------'
 *          | xxxxxx | xxxxxx | -voov- | xxxxxx | | xxxxxx | xxxxxx | ⇧ R    | ⌫      |
 *          |--------+--------+--------+--------| |--------+--------+--------+--------|
 *          | xxxxxx | xxxxxx | xxxxxx | xxxxxx | | R Ctrl | ⌘ R    | ⌥ R    | ↵      |
 *          '-----------------------------------' '-----------------------------------'
 */
[2] = LAYOUT(
  KC_ESC, KC_F1,    KC_F2,    KC_F3,    KC_F4,     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_BSPC,
  KC_TAB, KC_F5,    KC_F6,    KC_F7,    KC_F8,     KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_ENT,
  KC_F18, KC_F9,    KC_F10,   KC_F11,   KC_F12,    KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,
          KC_NO,    KC_NO,    KC_TRNS,  KC_NO,     KC_NO,    KC_NO,    KC_RSFT,  KC_BSPC,
          KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_RCTL,  KC_RGUI,  KC_RALT,  KC_ENT
),

/*
 * .--------------------------------------------. .--------------------------------------------.
 * | xxxxxx | xxxxxx | Insert | Home ↖ | Page ⇞ | | 7      | 8      | 9      | xxxxxx | xxxxxx |
 * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
 * | xxxxxx | xxxxxx | Delete | End  ↘ | Page ⇟ | | 4      | 5      | 6      | xxxxxx | xxxxxx |
 * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
 * | xxxxxx | xxxxxx | xxxxxx | xxxxxx | xxxxxx | | 1      | 2      | 3      | xxxxxx | ↵      |
 * '--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------'
 *          | xxxxxx | xxxxxx | xxxxxx | xxxxxx | | xxxxxx | -voov- | xxxxxx | ⌫      |
 *          |--------+--------+--------+--------| |--------+--------+--------+--------|
 *          | xxxxxx | xxxxxx | xxxxxx | xxxxxx | | xxxxxx | 0      | .      | ↵      |
 *          '-----------------------------------' '-----------------------------------'
 */
[3] = LAYOUT(
  KC_NO,  KC_NO,    KC_INS,   KC_HOME,  KC_PGUP,   KC_P7,    KC_P8,    KC_P9,    KC_NO,     KC_NO,
  KC_NO,  KC_NO,    KC_DEL,   KC_END,   KC_PGDN,   KC_P4,    KC_P5,    KC_P6,    KC_NO,     KC_NO,
  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_P1,    KC_P2,    KC_P3,    KC_NO,     KC_PENT,
          KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_TRNS,  KC_NO,    KC_BSPC,
          KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_P0,    KC_PDOT,  KC_ENT
)

};

void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);
    switch (layer) {
        case 0:
    		set_led_off;
    		break;
        case 1:
            set_led_blue;
            break;
        case 2:
            set_led_green;
            break;
        case 3:
        	set_led_red;
            break;
        default:
            break;
    }
};

