#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define DEF 0
#define SYM 1
#define MSC 2
#define SPC_LT LT(FN2,KC_SPC) // layer toggle hold with SPACE
/* #define SFT_OB MT(MOD_LSFT, KC_LPRN)  // mod toggle open brace */
/* #define SFT_CB MT(MOD_RSFT, KC_RPRN)  // mod toggle close brace */
#define CTL(a) MT(MOD_LCTL, a)
#define ALT(a) MT(MOD_LALT, a)
#define GUI(a) MT(MOD_LGUI, a)
#define SFT(a) MT(MOD_LSFT, a)

// Shortcut to make keymap more readable

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [DEF] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                            KC_6    ,KC_7,    KC_8    ,KC_9    ,KC_0    ,KC_BSPC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    , KC_EQL ,                          KC_MINS ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    , KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_QUOTE,CTL(KC_A),KC_S    ,KC_D    , KC_F   ,KC_G    , KC_LBRC,                          KC_RBRC ,KC_H    ,KC_J    ,KC_K    ,KC_L  ,CTL(KC_SCLN),KC_ENT  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT ,KC_Z    ,KC_X    ,KC_C   ,GUI(KC_V),ALT(KC_B),KC_LCBR ,AG_SWAP,        AG_NORM ,KC_RCBR ,ALT(KC_N),GUI(KC_M),KC_COMM,KC_DOT  ,KC_SLSH,KC_RSFT ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     TG(SYM) ,KC_HOME ,KC_END  , KC_PGUP,      KC_PGDN,      KC_SPC, KC_GRV ,         _______, KC_SPC ,    KC_LEFT ,      KC_UP  ,KC_DOWN , KC_RGHT, TG(MSC)
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

   [SYM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F11  ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F12  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_EXLM ,KC_AT   ,KC_LCBR ,KC_RCBR ,KC_PIPE ,_______ ,                           _______,KC_UP   ,KC_P7   ,KC_P8   ,KC_P9   ,KC_ASTR ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_HASH ,KC_DLR  ,KC_LPRN ,KC_RPRN ,KC_GRV  ,_______ ,                          _______ ,KC_DOWN ,KC_P4   ,KC_P5   ,KC_P6   ,KC_PLUS ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_PERC ,KC_CIRC ,KC_LBRC ,KC_RBRC ,KC_TILDE,_______ , _______,        _______ ,_______ ,_______ ,KC_P1   ,KC_P2   ,KC_P3   ,KC_BSLS ,_______ ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______ ,_______ ,     _______ ,    _______ ,_______ ,        RESET   ,_______ ,    _______ ,     KC_DOT  ,KC_P0   ,KC_EQL  ,_______
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),
   [MSC] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                            _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______ ,KC_MS_U ,_______ ,_______ ,_______ ,                          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,KC_MS_L ,KC_MS_D ,KC_MS_R ,_______ ,_______ ,                          _______ ,_______ ,KC_BTN1 ,KC_BTN2 ,KC_BTN3 ,_______ ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,KC_MPLY ,KC_MPRV ,KC_MNXT ,_______ ,_______ , _______,        AG_SWAP ,AG_NORM ,_______ ,KC_ACL0 ,KC_ACL1 ,KC_ACL2 ,_______ ,_______ ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,KC_BRID ,KC_BRIU ,     _______ ,    _______ ,_______ ,        _______ ,_______ ,    _______ ,     KC_VOLD ,KC_VOLU ,KC_MUTE ,_______
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  )

};

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) { */
/*   switch (keycode) { */
/*     case DEF: */
/*       if (record->event.pressed) { */
/*         layer_on(); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } else { */
/*         layer_off(_LOWER); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } _____________________ */
/*       return false; */
/*       break; */
/*     case RAISE: */
/*       if (record->event.pressed) { */
/*         layer_on(_RAISE); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } else { */
/*         layer_off(_RAISE); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } */
/*       return false; */
/*       break; */
/*     case ADJUST: */
/*         if (record->event.pressed) { */
/*           layer_on(_ADJUST); */
/*         } else { */
/*           layer_off(_ADJUST); */
/*         } */
/*         return false; */
/*         break; */
/*   } */
/*   return true; */
/* } */

/* void matrix_scan_user(void) { */
/*     uint8_t layer = biton32(layer_state); */

/*     switch (layer) { */
/*         case _QWERTY: */
/*             set_led_green; */
/*             break; */
/*         case _LOWER: */
/*             set_led_blue; */
/*             break; */
/*         case _RAISE: */
/*             set_led_white; */
/*             break; */
/*         case _ADJUST: */
/*             set_led_red; */
/*             break; */
/*         default: */
/*             break; */
/*     } */
/* }; */
void  matrix_scan_user(void) {};
