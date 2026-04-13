#include QMK_KEYBOARD_H


#ifdef LAYOUT_split_3x6_3_ex2
// DEFAULT
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//   [0] = LAYOUT_split_3x6_3_ex2(
//   //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
//        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, KC_LCTL,    KC_RCTL,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
//   //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//       KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_LALT,    KC_RALT,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
//   //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
//       KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
//   //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
//                                           KC_LGUI, TL_LOWR,  KC_SPC,     KC_ENT, TL_UPPR, KC_RGUI
//                                       //`--------------------------'  `--------------------------'
//
//   ),
//
//   [1] = LAYOUT_split_3x6_3_ex2(
//   //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
//        KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_LCTL,    KC_RCTL,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
//   //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//       KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,    KC_RALT, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
//       KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
//                                           KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
//                                       //`--------------------------'  `--------------------------'
//   ),
//
//   [2] = LAYOUT_split_3x6_3_ex2(
//   //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
//        KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_LCTL,    KC_RCTL, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
//   //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//       KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,    KC_RALT, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
//   //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
//       KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
//   //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
//                                           KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
//                                       //`--------------------------'  `--------------------------'
//   ),
//
//   [3] = LAYOUT_split_3x6_3_ex2(
//   //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
//       QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//       RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
//       RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
//                                           KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
//                                       //`--------------------------'  `--------------------------'
//   )
// };

#define GUI_LPRN LGUI_T(KC_9)
#define KC_LSBR  S(KC_LBRC)
#define KC_RSBR  S(KC_RBRC)
#define HYPR_ESC MT(MOD_LCTL | MOD_LSFT | MOD_LALT | MOD_LGUI, KC_ESC)
#define L2_ENT   LT(2, KC_ENT)
#define L1_ENT   LT(1, KC_ENT)
#define CSG_7    C(S(G(KC_7)))
#define CSG_8    C(S(G(KC_8)))
#define CSG_9    C(S(G(KC_9)))
#define C_LEFT   C(KC_LEFT)
#define C_RGHT   C(KC_RGHT)
#define CSG_4    C(S(G(KC_4)))
#define CSG_5    C(S(G(KC_5)))
#define CSG_6    C(S(G(KC_6)))
#define C_BSPC   C(KC_BSPC)
#define C_DEL    C(KC_DEL)
#define CSG_1    C(S(G(KC_1)))
#define CSG_2    C(S(G(KC_2)))
#define CSG_3    C(S(G(KC_3)))
#define S_GRV    S(KC_GRV)
#define S_MINS   S(KC_MINS)
#define S_EQL    S(KC_EQL)
#define S_DOT    S(KC_DOT)
#define S_COMM   S(KC_COMM)
#define S_BSLS   S(KC_BSLS)
#define L5_ENT   LT(5, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // ALPHA
    [0] = LAYOUT_split_3x6_3_ex2(
    //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
         KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,GUI_LPRN,    SC_RAPC,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC, 
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_LSBR,    KC_RSBR,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT, 
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_BSLS, 
    //|--------+--------+--------+--------+--------+--------+--------.  .--------+--------+--------+--------+--------+--------+--------|
                                              MO(4),HYPR_ESC,  KC_SPC,    KC_BSPC,  L2_ENT,  L1_ENT
                                        //`--------------------------'  `--------------------------'
    ),

    // NAVIGATION
    [1] = LAYOUT_split_3x6_3_ex2(
    //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
        KC_TAB,  KC_LEFT,  KC_DOWN,  KC_UP, KC_RGHT, KC_HOME, KC_LCTL,    KC_RCTL,  KC_END,   CSG_7,   CSG_8,   CSG_9, XXXXXXX, KC_BSPC, 
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_LSFT,  C_LEFT, XXXXXXX, XXXXXXX,  C_RGHT, XXXXXXX, KC_LALT,    KC_RALT, KC_PGUP,   CSG_4,   CSG_5,   CSG_6, XXXXXXX,  KC_DEL,  
    //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL,  C_BSPC, C(KC_U), C(KC_K),   C_DEL, XXXXXXX,                      KC_PGDN,   CSG_1,   CSG_2,   CSG_3, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                            _______,HYPR_ESC,  KC_SPC,    KC_BSPC,  KC_ENT, _______
                                        //`--------------------------'  `--------------------------'
    ),

    // SYMBOLS
    [2] = LAYOUT_split_3x6_3_ex2(
    //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
         KC_TAB, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), KC_LCTL,    KC_RCTL, S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_BSPC,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_LSFT,  KC_GRV,   S_GRV, KC_MINS,  KC_EQL, XXXXXXX, KC_LALT,    KC_RALT, XXXXXXX, KC_LBRC, KC_RBRC, KC_BSLS, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL, XXXXXXX, XXXXXXX,  S_MINS,   S_EQL, XXXXXXX,                      XXXXXXX,  S_COMM,   S_DOT,  S_BSLS, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                            _______,HYPR_ESC,  KC_SPC,    KC_BSPC,  KC_ENT, _______
                                        //`--------------------------'  `--------------------------'
    ),

    // KEYBOARD RGB
    [3] = LAYOUT_split_3x6_3_ex2(
    //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX,    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                            _______,HYPR_ESC,  KC_SPC,    KC_BSPC, _______,  KC_ENT 
                                        //`--------------------------'  `--------------------------'
    ),

    // NUMS AND F KEYS
    [4] = LAYOUT_split_3x6_3_ex2(
    //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
         KC_TAB, XXXXXXX,    KC_7,    KC_8,    KC_9, XXXXXXX, XXXXXXX,    XXXXXXX,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_LSFT, XXXXXXX,    KC_4,    KC_5,    KC_6, XXXXXXX, XXXXXXX,    XXXXXXX,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL,    KC_0,    KC_1,    KC_2,    KC_3, XXXXXXX,                        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                            _______,HYPR_ESC,  KC_SPC,    KC_BSPC,  L5_ENT,  KC_ENT
                                        //`--------------------------'  `--------------------------'
    ),

    // SYSTEM KEYS
    [5] = LAYOUT_split_3x6_3_ex2(
    //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
        XXXXXXX, KC_MPRV, KC_MNXT, KC_MRWD, KC_MFFD, XXXXXXX, XXXXXXX,    XXXXXXX, KC_WAKE, KC_WREF, KC_WBAK, KC_WFWD, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_VOLD, KC_VOLU, KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, KC_SLEP, KC_BRID, KC_BRIU, XXXXXXX, XXXXXXX,   MO(3),
    //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_MPLY, KC_MSTP, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_PWR,  KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, KC_SYRQ,
    //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                            _______,HYPR_ESC,  KC_SPC,    KC_BSPC, _______,  KC_ENT
                                        //`--------------------------'  `--------------------------'
    ),
};
#else
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, TL_LOWR,  KC_SPC,     KC_ENT, TL_UPPR, KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};
#endif

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [1] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [2] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [3] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [4] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [5] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
};
#endif


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GUI_LPRN:
            if (record->tap.count && record->event.pressed) {
                tap_code16(S(KC_9));
                return false;
            }
            break;
    }
    return true;
}
