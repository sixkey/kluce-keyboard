#include QMK_KEYBOARD_H

#define DV_SCLN KC_Z
#define DV_EQ KC_RBRC
#define DV_RBRC KC_EQL
#define DV_LCBR KC_UNDS
#define DV_RCBR KC_PLUS
#define DV_QUES KC_LCBR
#define DV_PLUS KC_RCBR
#define DV_MINS KC_QUOT
#define DV_COLN S(DV_SCLN)

#define DV_GRV  KC_GRV  // `
#define DV_1    KC_1    // 1
#define DV_2    KC_2    // 2
#define DV_3    KC_3    // 3
#define DV_4    KC_4    // 4
#define DV_5    KC_5    // 5
#define DV_6    KC_6    // 6
#define DV_7    KC_7    // 7
#define DV_8    KC_8    // 8
#define DV_9    KC_9    // 9
#define DV_0    KC_0    // 0
#define DV_LBRC KC_MINS // [
#define DV_RBRC KC_EQL  // ]
// Row 2
#define DV_QUOT KC_Q    // '
#define DV_COMM KC_W    // ,
#define DV_DOT  KC_E    // .
#define DV_P    KC_R    // P
#define DV_Y    KC_T    // Y
#define DV_F    KC_Y    // F
#define DV_G    KC_U    // G
#define DV_C    KC_I    // C
#define DV_R    KC_O    // R
#define DV_L    KC_P    // L
#define DV_SLSH KC_LBRC // /
#define DV_EQL  KC_RBRC // =
#define DV_BSLS KC_BSLS // (backslash)
// Row 3
#define DV_A    KC_A    // A
#define DV_O    KC_S    // O
#define DV_E    KC_D    // E
#define DV_U    KC_F    // U
#define DV_I    KC_G    // I
#define DV_D    KC_H    // D
#define DV_H    KC_J    // H
#define DV_T    KC_K    // T
#define DV_N    KC_L    // N
#define DV_S    KC_SCLN // S
#define DV_MINS KC_QUOT // -
// Row 4
#define DV_SCLN KC_Z    // ;
#define DV_Q    KC_X    // Q
#define DV_J    KC_C    // J
#define DV_K    KC_V    // K
#define DV_X    KC_B    // X
#define DV_B    KC_N    // B
#define DV_M    KC_M    // M
#define DV_W    KC_COMM // W
#define DV_V    KC_DOT  // V
#define DV_Z    KC_SLSH // Z

#define DV_ACUTE  RALT(DV_GRV)

#define DV_AACUTE RALT(DV_A)
#define DV_ADIAER RALT(DV_SCLN)
#define DV_EACUTE RALT(DV_E)
#define DV_IACUTE RALT(DV_I)
#define DV_OACUTE RALT(DV_O)
#define DV_OCIRCU RALT(DV_Q)
#define DV_UACUTE RALT(DV_U)
#define DV_YACUTE RALT(DV_Y)
#define DV_CCARON RALT(DV_C)
#define DV_DCARON RALT(DV_D)
#define DV_LCARON RALT(DV_L)
#define DV_LACUTE RALT(DV_QUOT)
#define DV_RACUTE RALT(DV_R)
#define DV_TCARON RALT(DV_T)
#define DV_NCARON RALT(DV_N)
#define DV_SCARON RALT(DV_S)
#define DV_ZCARON RALT(DV_Z)

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
    _DVORAK,
    _LOWER,
    _LOWER_DVORAK,
    _RAISE,
    _RAISE_SK,
    _ADJUST,
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_DVORAK,
    KC_LOWER,
    KC_RAISE,
    KC_ADJUST,
    KC_PRVWD,
    KC_NXTWD,
    KC_NXTTAB,
    KC_PRVTAB,
    KC_NXTSCR,
    KC_PRVSCR,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE,
    KC_SKDVOR
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCTR | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_QWERTY] = LAYOUT(
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC,
  KC_ESC,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,     XXXXXXX,KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
                 KC_RALT,KC_LGUI,KC_LCTRL, KC_LOWER, KC_SPC,      KC_ENT,  KC_RAISE, KC_RGUI, KC_LALT, KC_RCTRL
),

/*
 * DVORAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   '  |   ,  |   .  |   P  |   Y  |                    |   F  |   G  |   C  |   R  |   L  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   O  |   E  |   U  |   I  |-------.    ,-------|   D  |   H  |   T  |   N  |   S  |  -   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   ;  |   Q  |   J  |   K  |   X  |-------|    |-------|   B  |   M  |   W  |   V  |   Z  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCTR | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_DVORAK] = LAYOUT(
  KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_GRV,
  KC_TAB,   KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                       KC_F,    KC_G,    KC_C,    KC_R,    KC_L,  KC_BSPC,
  KC_ESC,   KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                       KC_D,    KC_H,    KC_T,    KC_N,    KC_S,  KC_MINS,
  KC_LSFT,  KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_MUTE,  XXXXXXX, KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,  KC_RSFT,
                 KC_RALT,KC_LGUI,KC_LALT, KC_LOWER, KC_SPC,      KC_ENT,  KC_RAISE, KC_RGUI, KC_LALT, KC_RCTRL
),


/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   =  |  -   |  +   |   :  |   ^  |-------.    ,-------|   /  |   [  |   ]  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|   !  |   @  |   #  |   $  |   %  |-------|    |-------|   \  |   &  |   *  |   {  |   }  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_LOWER_DVORAK] = LAYOUT(
  _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_F12,
  _______,  KC_EQL, KC_MINS, KC_PLUS, KC_COLN, KC_CIRC,                      KC_SLSH, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_PIPE,
  _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, _______,    _______, KC_BSLS, KC_AMPR, KC_ASTR, KC_LCBR, KC_RCBR, _______,
                       _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
),


/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   =  |  -   |  +   |   :  |   ^  |-------.    ,-------|   /  |   [  |   ]  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|   !  |   @  |   #  |   $  |   %  |-------|    |-------|   \  |   &  |   *  |   {  |   }  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT(
  _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  _______,
  _______,  DV_EQL, DV_MINS, DV_PLUS, DV_COLN, KC_CIRC,                      DV_SLSH, DV_LBRC, DV_RBRC, KC_LPRN, KC_RPRN, KC_PIPE,
  _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, _______,    _______, KC_BSLS, KC_AMPR, KC_ASTR, DV_LCBR, DV_RCBR, _______,
                       _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
),
/* RAISE
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd |      | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  MUTE  |    |       |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT(
  _______, _______, _______ , _______ , _______ , _______,                           _______,  _______  , _______,  _______ ,  _______ ,_______,
  _______,  KC_INS,  KC_PSCR,   KC_APP,  XXXXXXX, XXXXXXX,                        KC_PGUP, KC_PRVWD,   KC_UP, KC_NXTWD,_______, KC_BSPC,
  _______, KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX, KC_CAPS,                       KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, KC_BSPC,
  _______,KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX,  _______,       _______,  XXXXXXX, KC_HOME, XXXXXXX, KC_LEND,   XXXXXXX, _______,
                         _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
),

[_RAISE_SK] = LAYOUT(
  DV_ACUTE, _______,   _______,   _______,   _______,   _______,                           _______, _______,   _______,   _______,   _______,   _______,
  _______,  DV_LACUTE, _______,   _______,   _______,   DV_YACUTE,                            _______, _______,   DV_CCARON, DV_RACUTE, DV_LCARON, _______,  
  _______,  DV_AACUTE, DV_OACUTE, DV_EACUTE, DV_UACUTE, DV_IACUTE,                         DV_DCARON, _______,   DV_TCARON, DV_NCARON, DV_SCARON, _______, 
  _______,  DV_ADIAER, DV_OCIRCU, _______,   _______,   _______,   _______,       _______, _______, _______,   _______,   _______,   DV_ZCARON, _______,
                      _______,   _______,   _______,   _______,   _______,       _______, _______, _______,   _______,   _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | RESET|      |QWERTY|DVORAK|SKDVOR|      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |MACWIN|      |      |      |-------.    ,-------|      | VOLDO| MUTE | VOLUP|      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      | PREV | PLAY | NEXT |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX , XXXXXXX,  XXXXXXX ,  XXXXXXX , XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F12,
  RESET  , XXXXXXX,KC_QWERTY,KC_DVORAK,KC_SKDVOR,XXXXXXX,                     XXXXXXX, KC_PRVWD, KC_UP, KC_NXTWD, KC_RIGHT, _______,
  XXXXXXX , XXXXXXX,CG_TOGG, XXXXXXX,    XXXXXXX,  XXXXXXX,                     XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, XXXXXXX,
  _______ , XXXXXXX, XXXXXXX, KC_DOWN,    KC_UP,  XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, KC_HOME, XXXXXXX, KC_END, XXXXXXX, _______,
                   _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______
  )
};

#ifdef OLED_ENABLE

static void print_mainhand(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("Qwrt"), false);
            break;
        case _DVORAK:
            oled_write_ln_P(PSTR("Dvrk"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _DVORAK:
        case _QWERTY:
            oled_write_P(PSTR("B\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("R\n"), false);
            break;
        case _RAISE_SK:
            oled_write_P(PSTR("R sk\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("L\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("A\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

void print_offhand(void) {
    oled_write_P(PSTR("\n\n"), false); 
    oled_write_P(PSTR("kluce"), false); 
}


oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_mainhand();
    } else {
        print_offhand();
    }
    return false;
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case KC_DVORAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_DVORAK);
            }
            return false;
        case KC_LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE_SK, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE_SK, _ADJUST);
            }
            return false;
        case KC_RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE_SK);
                update_tri_layer(_LOWER, _RAISE_SK, _ADJUST);
            } else {
                layer_off(_RAISE_SK);
                update_tri_layer(_LOWER, _RAISE_SK, _ADJUST);
            }
            return false;
        case KC_ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LALT));
                register_code(KC_LEFT);
            } else {
                unregister_mods(mod_config(MOD_LALT));
                unregister_code(KC_LEFT);
            }
            break;
        case KC_NXTWD:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LALT));
                register_code(KC_RIGHT);
            } else {
                unregister_mods(mod_config(MOD_LALT));
                unregister_code(KC_RIGHT);
            }
            break;
        case KC_PRVSCR:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_LEFT);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_LEFT);
            }
            break;
        case KC_NXTSCR:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_RIGHT);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_RIGHT);
            }
            break;
        case KC_PRVTAB:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_LEFT);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_LEFT);
            }
            break;
        case KC_NXTTAB:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_RIGHT);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_RIGHT);
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDOWN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}

#endif
