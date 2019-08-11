#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define DEF 0
#define FN1 2
#define SC2 1
#define SPC_LT LT(FN1,KC_SPC) // layer toggle hold with SPACE
/* #define SFT_OB MT(MOD_LSFT, KC_LPRN)  // mod toggle open brace */
/* #define SFT_CB MT(MOD_RSFT, KC_RPRN)  // mod toggle close brace */
#define CTL(a) MT(MOD_LCTL, a)
#define ALT(a) MT(MOD_LALT, a)

// Shortcut to make keymap more readable

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [DEF] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GESC ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                            KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,KC_BSLS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    , KC_6   ,                          KC_EQL  ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    , KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,KC_PGUP ,                          KC_PGDN ,KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOTE,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_LGUI ,TG(FN1) ,         KC_HOME, KC_END ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
      KC_LCTL,KC_INS  ,KC_DEL  ,KC_LALT ,      MO(FN1),    KC_SPC  ,KC_ENT  ,        KC_ENT  ,KC_SPC  ,    MO(FN1) ,     KC_RALT ,KC_LBRC , KC_RBRC, KC_RCTL
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

   [FN1] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV  ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F11  , KC_F12 ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______ ,KC_UP   ,_______ ,_______ ,KC_F6   ,                          _______ ,_______ ,_______ ,KC_UP   ,_______ ,_______ ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_HOME ,_______ ,KC_LEFT ,KC_DOWN ,KC_RGHT ,_______ ,_______ ,                          _______ ,_______ ,KC_LEFT ,KC_DOWN ,KC_RGHT ,_______ ,KC_END  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ , _______,        AG_SWAP ,AG_NORM ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______ ,_______ ,     _______ ,    _______ ,_______ ,        _______ ,_______ ,    _______ ,     _______ ,_______ ,_______ ,_______
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  )

};

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) { */
/*   switch (keycode) { */
/*     case LOWER: */
/*       if (record->event.pressed) { */
/*         layer_on(_LOWER); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } else { */
/*         layer_off(_LOWER); */
/*         update_tri_layer(_LOWER, _RAISE, _ADJUST); */
/*       } _____________________*/
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
