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
QK_CAPS_WORD_TOGGLE,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  NO_ARNG, \
OSM(MOD_LSFT),  LCTL_T(KC_A),  LALT_T(KC_S),  LGUI_T(KC_D),  LSFT_T(KC_F),  K14,  K15,  LSFT_T(KC_J),  LGUI_T(KC_K),  LALT_T(KC_L),  LCTL_T(NO_OSTR),  NO_AE, \
XXX,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  XXX, \
LT(U_MOUSE,KC_TAB),  LT(U_NAV,KC_ESC),  LT(U_MEDIA,KC_SPC),  LT(U_NUM,KC_BSPC),  LT(U_SYM,KC_ENT),  K37 \
)


#define MIRYOKU_LAYERMAPPING_SYM( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
XXX,  NO_EXLM,  NO_QUES,  NO_AT,  NO_COLN,  NO_ASTR, K05,  K06,  K07,  K08,  K09,  XXX, \
NO_AMPR,  NO_QUOT,  NO_DQUO,  NO_LPRN,  NO_RPRN,  NO_EQL,         K15,  K16,  K17,  K18,  K19,  XXX, \
NO_DLR,  NO_HASH,  NO_PERC,  NO_LCBR,  NO_RCBR,  NO_PIPE,         K25,  K26,  K27,  K28,  K29,  XXX , \
                  NO_LABK,  NO_RABK,  NO_SLSH,         K35,  K36,  K37 \
)

#define MIRYOKU_LAYERMAPPING_NUM( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
XXX,  NO_TILD,  K01,  K02,  K03,  NO_CIRC,         K05,  K06,  K07,  K08,  K09,  XXX, \
XXX,  NO_GRV,  K11,  K12,  K13,  NO_EQL,         K15,  K16,  K17,  K18,  K19,  XXX, \
XXX,  KC_0,  K21,  K22,  K23,  NO_PLUS,         K25,  K26,  K27,  K28,  K29,  XXX , \
                  NO_LBRC,  NO_RBRC,  NO_BSLS,         K35,  K36,  K37 \
)
