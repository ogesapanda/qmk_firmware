/* Copyright 2020 satromi
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
// #include"keymap_jp.h"

enum layer_number {
  DVORAK = 0,
  FUNC,
};

#define TG_FUNC  TG(FUNC)

    /* Dvorak
        ,-----------------------------------------.              ,-----------------------------------------.
        |   [  |   1  |   2  |   3  |   4  |   5  |              |   6  |   7  |   8  |   9  |   0  |   /  |
 ,------+------+------+------+------+------+------+------.,------+------+------+------+------+------+------+------.
 |    @ |   ]  |   ;  |   ,  |   .  |   P  |   Y  |  ESC ||  INS |   F  |   G  |   C  |   R  |   L  |   -  | YEN| |
 |------+------+------+------+------+------+------+------||------+------+------+------+------+------+------+------|
 |  HNK |  ALT |   A  |   O  |   E  |   U  |   I  |  TAB ||  ENT |   D  |   H  |   T  |   N  |   S  |   :  |  DEL |
 `------+------+------+------+------+------+------+------'`------+------+------+------+------+------+------+------'
        | CTRL |   ~  |   Q  |   J  |   K  |   X  |              |   B  |   M  |   W  |   V  |   Z  |   \  |
        `-----------------------------------------'              `-----------------------------------------'
               ,------.      ,---------------------------.,---------------------------.      ,------.
               | PGUP |      |  SPC |  SFT |   TG |  CPS ||   JP | TEAMS|  SFT |  BSP |      |   UP |
        +------+------+------+---------------------------'`---------------------------+------+------+------+
        | HOME | PGDN |  END |                                                        |  LFT |  DWN |  RGT |
        `--------------------'                                                        `--------------------'
    */
    /* Function
        ,-----------------------------------------.              ,-----------------------------------------.
        |      |   F1 |   F2 |   F3 |   F4 |   F5 |              |   F6 |   F7 |   F8 |   F9 |  F10 |      |
 ,------+------+------+------+------+------+------+------.,------+------+------+------+------+------+------+------.
 |      |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |      |
 |------+------+------+------+------+------+------+------||------+------+------+------+------+------+------+------|
 | L_GUI|      |      |      |      |      |      |      ||      |      |      |      |      |      |      |      |
 `------+------+------+------+------+------+------+------'`------+------+------+------+------+------+------+------'
        |      |      |      |      |      |      |              |      |      |      |      |      |      |
        `-----------------------------------------'              `-----------------------------------------'
               ,------.      ,---------------------------.,---------------------------.      ,------.
               |      |      |      |      |      |      ||      |      |      |      |      |      |
        +------+------+------+---------------------------'`---------------------------+------+------+------+
        |      |      |      |                                                        |      |      |      |
        `--------------------'                                                        `--------------------'
   */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [DVORAK] = LAYOUT(
            KC_RBRC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,  KC_END, KC_CAPS,                   KC_KANA, KC_LEFT,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_SLSH,          
   KC_LBRC, KC_NUHS,    KC_SCLN, KC_COMM  KC_DOT,  KC_P,    KC_Y, KC_PGDN, TG_FUNC,  KC_ESC,  KC_INS, LSFT(LCTL(KC_M)), KC_DOWN,   KC_F,    KC_G,    KC_C,    KC_R,    KC_L, KC_MINS, KC_JYEN, 
   KC_ZKHK, KC_LALT,    KC_A,    KC_O,    KC_E,    KC_U,    KC_I, KC_HOME, KC_LSFT,  KC_TAB, KC_ENT, KC_RSFT, KC_RGHT,   KC_D,    KC_H,    KC_T,    KC_N,    KC_S, KC_QUOT,  KC_DEL, 
            KC_LCTL,    KC_EQL,  KC_Q,    KC_J,    KC_K,    KC_X, KC_PGUP,  KC_SPC,                   KC_BSPC,   KC_UP,   KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,   KC_RO
   ),

   [FUNC] = LAYOUT(
            _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, _______, _______,                   _______, _______,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______,          
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
   KC_LGUI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______, _______
   ),
};


