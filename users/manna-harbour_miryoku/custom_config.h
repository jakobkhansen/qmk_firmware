// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define XXX KC_NO

#define MIRYOKU_LAYERMAPPING_BASE( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
QK_CAPS_WORD_TOGGLE,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  KC_LBRC, \
OSM(MOD_LSFT),  LCTL_T(KC_A),  LALT_T(KC_S),  LGUI_T(KC_D),  LSFT_T(KC_F),  K14,  K15,  LSFT_T(KC_J),  LGUI_T(KC_K),  LALT_T(KC_L),  LCTL_T(KC_SCLN),  KC_QUOT, \
XXX,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  KC_COMMA,  KC_DOT,  KC_MINUS,  XXX, \
LT(U_MOUSE,KC_TAB),  LT(U_NAV,KC_ESC),  LT(U_MEDIA,KC_SPC),  LT(U_NUM,KC_BSPC),  LT(U_SYM,KC_ENT),  K37 \
)


#define MIRYOKU_LAYERMAPPING_SYM( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
XXX,  KC_EXLM,  KC_QUES,  KC_AT,  KC_COLN,  KC_ASTR, K05,  K06,  K07,  K08,  K09,  XXX, \
KC_AMPR,  KC_QUOT,  KC_DQUO,  KC_LPRN,  KC_RPRN,  KC_EQL,         K15,  K16,  K17,  K18,  K19,  XXX, \
KC_DLR,  KC_HASH,  KC_PERC,  KC_LCBR,  KC_RCBR,  KC_PIPE,         K25,  K26,  K27,  K28,  K29,  XXX , \
                  KC_LBRC,  KC_RBRC,  KC_SLSH,         K35,  K36,  K37 \
)

#define MIRYOKU_LAYERMAPPING_NUM( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
XXX,  KC_TILD,  K01,  K02,  K03,  KC_CIRC,         K05,  K06,  K07,  K08,  K09,  XXX, \
XXX,  KC_GRV,  K11,  K12,  K13,  KC_EQL,         K15,  KC_LSFT,  KC_LGUI,  KC_LALT,  KC_LCTL,  XXX, \
XXX,  KC_0,  K21,  K22,  K23,  KC_PLUS,         K25,  K26,  K27,  K28,  K29,  XXX, \
                  KC_LBRC,  KC_RBRC,  KC_BSLS,         K35,  K36,  K37 \
)
