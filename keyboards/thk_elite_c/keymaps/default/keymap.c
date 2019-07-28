/* Copyright 2019 Guido Bartolucci
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_planck_mit(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
                KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_COLN, RGUI_T(KC_ENT),
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_SCLN),
				TT(3), KC_ESC, KC_RALT, KC_LGUI, MO(1), KC_SPC, MO(2), KC_LALT, MO(6), MO(7), MO(5)),
	[1] = LAYOUT_planck_mit(KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_NO, KC_NO, KC_UNDO,
				KC_TRNS, KC_NO, KC_CUT, KC_COPY, KC_PSTE, KC_NO, KC_NO, KC_UNDS, KC_PLUS, KC_DQUO, KC_QUOT, KC_PIPE,
				KC_CAPS, KC_NO, KC__MUTE, KC__VOLDOWN, KC__VOLUP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(9), KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),
	[2] = LAYOUT_planck_mit(KC_GRV, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8, KC_P9, KC_P0, KC_TRNS,
				KC_TRNS, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_WBAK, KC_WFWD, KC_PMNS, KC_PEQL, KC_NO, KC_NO, KC_BSLS,
				KC_TRNS, KC_LT, KC_GT, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
				KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_planck_mit(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_UP, KC_PGDN, KC_NO, KC_TRNS,
				KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_TRNS,
				KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_NO, KC_END, KC_NO, KC_TRNS,
				KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(4), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_planck_mit(KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PERC, KC_P7, KC_P8, KC_P9, KC_P0, KC_TRNS,
				KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DLR, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_TRNS,
				KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P0, KC_P1, KC_P2, KC_P3, KC_PPLS, KC_TRNS,
				KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_PDOT, KC_PCMM, KC_TRNS),
	[5] = LAYOUT_planck_mit(KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_NO, RESET,
				KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_F16, KC_NO, KC_NO, DEBUG,
				KC_NO, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24, KC_NO, KC_NO, KC_NO,
				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS),
	[6] = LAYOUT_planck_mit(
				KC_NO,
				UC(0x3B8), // q -> θ
				UC(0x3C9), // w -> ω
				UC(0x3B5), // e -> ε
				UC(0x3C1), // r -> ρ
				UC(0x3C4), // t -> τ
				UC(0x3C8), // y -> ψ
				UC(0x3C5), // u -> υ
				UC(0x3B9), // i -> ι
				UC(0x3BF), // o -> ο
				UC(0x3C0), // p -> π
				KC_TRNS,

			  KC_NO,
				UC(0x3B1), // a -> α
				UC(0x3C3), // s -> σ
				UC(0x3B4), // d -> δ
				UC(0x3C6), // f -> φ
				UC(0x3B3), // g -> γ
				UC(0x3B7), // h -> η
				UC(0x3D1), // j -> ϑ
				UC(0x3BA), // k -> κ
				UC(0x3BB), // l -> λ
				KC_TRNS,
				KC_TRNS,

				KC_NO,
				UC(0x3B6), // z -> ζ
				UC(0x3BE), // x -> ξ
				UC(0x3C7), // c -> χ
				UC(0x3C2), // v -> ς
				UC(0x3B2), // b -> β
				UC(0x3BD), // n -> ν
				UC(0x3BC), // m -> μ
				KC_TRNS,
				KC_TRNS,
				KC_TRNS,
				KC_TRNS,

				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),

	[7] = LAYOUT_planck_mit(
				KC_NO,
				UC(0x398), // Q -> Θ
				UC(0x3A9), // W -> Ω
				UC(0x395), // E -> Ε
				UC(0x3A1), // R -> Ρ
				UC(0x3A4), // T -> Τ
				UC(0x3A8), // Y -> Ψ
				UC(0x3A5), // U -> Υ
				UC(0x399), // I -> Ι
				UC(0x39F), // O -> Ο
				UC(0x3A0), // P -> Π
				KC_TRNS,

				KC_NO,
				UC(0x391), // A -> Α
				UC(0x3A3), // S -> Σ
				UC(0x394), // D -> Δ
				UC(0x3A6), // F -> Φ
				UC(0x393), // G -> Γ
				UC(0x397), // H -> Η
				UC(0x398), // J -> Θ
				UC(0x39A), // K -> Κ
				UC(0x39B), // L -> Λ
				KC_TRNS,
				KC_TRNS,

				KC_NO,
				UC(0x396), // Z -> Ζ
				UC(0x39E), // X -> Ξ
				UC(0x3A7), // C -> Χ
				UC(0x3A3), // V -> Σ
				UC(0x392), // B -> Β
				UC(0x39D), // N -> Ν
				UC(0x39C), // M -> Μ
				KC_TRNS,
				KC_TRNS,
				KC_TRNS,
				KC_TRNS,

				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),

	[8] = LAYOUT_planck_mit(
				KC_NO,
				UC(0x2227), // Q -> ∧
				UC(0x2228), // W -> ∨
				UC(0x22C2), // E -> ⋂
				UC(0x22C3), // R -> ⋃
				UC(0x2282), // T -> ⊂
				UC(0x2283), // Y -> ⊃
				UC(0x2200), // U -> ∀
				UC(0x221E), // I -> ∞
				UC(0x2203), // O -> ∃
				UC(0x2202), // P -> ∂
				KC_TRNS,

				KC_NO,
				UC(0x22A5), // A -> ⊥
				UC(0x22A4), // S -> ⊤
				UC(0x22A2), // D -> ⊢
				UC(0x22A3), // F -> ⊣
				UC(0x2191), // G -> ↑
				UC(0x2193), // H -> ↓
				UC(0x2190), // J -> ←
				UC(0x2192), // K -> →
				UC(0x2194), // L -> ↔
				KC_TRNS,
				KC_TRNS,

				KC_NO,
				UC(0x230A), // Z -> ⌊
				UC(0x2308), // X -> ⌈
				UC(0x2260), // C -> ≠
				UC(0x2243), // V -> ≃
				UC(0x2261), // B -> ≡
				UC(0x2264), // N -> ≤
				UC(0x2265), // M -> ≥
				KC_TRNS,
				KC_TRNS,
				KC_TRNS,
				KC_TRNS,

				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),

	[9] = LAYOUT_planck_mit(KC_GRV,  KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, KC_KP_PLUS, KC_TRNS,
                          KC_BSPC, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8, KC_P9, KC_P0, KC_TRNS,
                          KC_TRNS, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_DOT, KC_COMMA, KC_DOLLAR, KC_P0, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0), KC_TRNS, TO(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	/*
# From unicode.org
2336 ⌶
2337 ⌷
2338 ⌸
2339 ⌹
233A ⌺
233B ⌻
233C ⌼
233D ⌽
233E ⌾
233F ⌿
2340 ⍀
2341 ⍁
2342 ⍂
2343 ⍃
2344 ⍄
2345 ⍅
2346 ⍆
2347 ⍇
2348 ⍈
2349 ⍉
234A ⍊
234B ⍋
234C ⍌
234D ⍍
234E ⍎
234F ⍏
2350 ⍐
2351 ⍑
2352 ⍒
2353 ⍓
2354 ⍔
2355 ⍕
2356 ⍖
2357 ⍗
2358 ⍘
2359 ⍙
235A ⍚
235B ⍛
235C ⍜
235D ⍝
235E ⍞
235F ⍟
2360 ⍠
2361 ⍡
2362 ⍢
2363 ⍣
2364 ⍤
2365 ⍥
2366 ⍦
2367 ⍧
2368 ⍨
2369 ⍩
236A ⍪
236B ⍫
236C ⍬
236D ⍭
236E ⍮
236F ⍯
2370 ⍰
2371 ⍱
2372 ⍲
2373 ⍳
2374 ⍴
2375 ⍵
2376 ⍶
2377 ⍷
2378 ⍸
2379 ⍹
237A ⍺
	 */
};

void matrix_init_user(void) {
    set_unicode_input_mode(UC_OSX);
};

//static uint16_t t = 0;

void encoder_update_user(int8_t index, bool clockwise) {
  //if (timer_elapsed(t) < 1000) return;
  //t = timer_read();

  if (index == 0) { /* First encoder */
    if (clockwise) {
      //      tap_code(KC__VOLUP);
      tap_code(KC_A);
    } else {
      //      tap_code(KC__VOLDOWN);
      tap_code(KC_B);
    }
  } else {
    if (clockwise) {
      //      tap_code(KC__VOLUP);
      tap_code(KC_C);
    } else {
      //      tap_code(KC__VOLDOWN);
      tap_code(KC_D);
    }
  }
}

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  //debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}



