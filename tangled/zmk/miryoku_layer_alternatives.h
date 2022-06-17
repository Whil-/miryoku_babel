// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk

#pragma once


#define MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&hm LSHFT Q,       &hm LGUI S,        &hm LALT D,        &hm LCTRL F,       &kp G,             &kp H,             &hm LCTRL J,       &hm LALT K,        &hm LGUI L,        &hm LSHFT M,       \
&lt U_BUTTON W,    &hm RALT X,        &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           &hm RALT SLASH,    &lt U_BUTTON SQT,  \
U_NP,              U_NP,              &lt U_FUN ESC,     &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE TAB,   &lt U_NAV BSPC,    &lt U_MEDIA DEL,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&hm LSHFT Y,       &hm LGUI I,        &hm LALT E,        &hm LCTRL A,       &kp DOT,           &kp D,             &hm LCTRL S,       &hm LALT T,        &hm LGUI N,        &hm LSHFT B,       \
&lt U_BUTTON J,    &hm RALT SLASH,    &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             &hm RALT P,        &lt U_BUTTON V,    \
U_NP,              U_NP,              &lt U_FUN ESC,     &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE TAB,   &lt U_NAV BSPC,    &lt U_MEDIA DEL,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm LSHFT A,       &hm LGUI R,        &hm LALT S,        &hm LCTRL T,       &kp D,             &kp H,             &hm LCTRL N,       &hm LALT E,        &hm LGUI I,        &hm LSHFT O,       \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_FUN ESC,     &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE TAB,   &lt U_NAV BSPC,    &lt U_MEDIA DEL,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm LSHFT A,       &hm LGUI R,        &hm LALT S,        &hm LCTRL T,       &kp G,             &kp M,             &hm LCTRL N,       &hm LALT E,        &hm LGUI I,        &hm LSHFT O,       \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_FUN ESC,     &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE TAB,   &lt U_NAV BSPC,    &lt U_MEDIA DEL,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm LSHFT A,       &hm LGUI R,        &hm LALT S,        &hm LCTRL T,       &kp G,             &kp K,             &hm LCTRL N,       &hm LALT E,        &hm LGUI I,        &hm LSHFT O,       \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_FUN ESC,     &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE TAB,   &lt U_NAV BSPC,    &lt U_MEDIA DEL,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&hm LSHFT A,       &hm LGUI O,        &hm LALT E,        &hm LCTRL U,       &kp I,             &kp D,             &hm LCTRL H,       &hm LALT T,        &hm LGUI N,        &hm LSHFT S,       \
&lt U_BUTTON SLASH,&hm RALT Q,        &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &hm RALT V,        &lt U_BUTTON Z,    \
U_NP,              U_NP,              &lt U_FUN ESC,     &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE TAB,   &lt U_NAV BSPC,    &lt U_MEDIA DEL,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
&hm LSHFT S,       &hm LGUI H,        &hm LALT N,        &hm LCTRL T,       &kp COMMA,         &kp DOT,           &hm LCTRL A,       &hm LALT E,        &hm LGUI O,        &hm LSHFT I,       \
&lt U_BUTTON F,    &hm RALT M,        &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             &hm RALT K,        &lt U_BUTTON Y,    \
U_NP,              U_NP,              &lt U_FUN ESC,     &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE TAB,   &lt U_NAV BSPC,    &lt U_MEDIA DEL,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
&hm LSHFT A,       &hm LGUI S,        &hm LALT H,        &hm LCTRL T,       &kp G,             &kp Y,             &hm LCTRL N,       &hm LALT E,        &hm LGUI O,        &hm LSHFT I,       \
&lt U_BUTTON Z,    &hm RALT X,        &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_FUN ESC,     &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE TAB,   &lt U_NAV BSPC,    &lt U_MEDIA DEL,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&hm LSHFT A,       &hm LGUI S,        &hm LALT D,        &hm LCTRL F,       &kp G,             &kp H,             &hm LCTRL J,       &hm LALT K,        &hm LGUI L,        &hm LSHFT SQT,     \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_FUN ESC,     &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE TAB,   &lt U_NAV BSPC,    &lt U_MEDIA DEL,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
&hm LSHFT A,       &hm LGUI S,        &hm LALT D,        &hm LCTRL F,       &kp G,             &kp H,             &hm LCTRL J,       &hm LALT K,        &hm LGUI L,        &hm LSHFT SQT,     \
&lt U_BUTTON Y,    &hm RALT X,        &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_FUN ESC,     &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE TAB,   &lt U_NAV BSPC,    &lt U_MEDIA DEL,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_AZERTY \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp Q,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp M,             \
&hm LSHFT W,       &hm LGUI X,        &hm LALT C,        &hm LCTRL V,       &hm RALT B,        &hm RALT N,        &hm LCTRL COMMA,   &hm LALT DOT,      &hm LGUI SLASH,    &hm LSHFT SQT,     \
U_NP,              U_NP,              &lt U_MEDIA DEL,   &lt U_NAV BSPC,    &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM SPC,     &lt U_FUN ESC,     U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15 \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&kp Y,             &kp I,             &kp E,             &kp A,             &kp DOT,           &kp D,             &kp S,             &kp T,             &kp N,             &kp B,             \
&hm LSHFT J,       &hm LGUI SLASH,    &hm LALT COMMA,    &hm LCTRL K,       &hm RALT SQT,      &hm RALT W,        &hm LCTRL M,       &hm LALT L,        &hm LGUI P,        &hm LSHFT V,       \
U_NP,              U_NP,              &lt U_MEDIA DEL,   &lt U_NAV BSPC,    &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM SPC,     &lt U_FUN ESC,     U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp D,             &kp H,             &kp N,             &kp E,             &kp I,             &kp O,             \
&hm LSHFT Z,       &hm LGUI X,        &hm LALT C,        &hm LCTRL V,       &hm RALT B,        &hm RALT K,        &hm LCTRL M,       &hm LALT COMMA,    &hm LGUI DOT,      &hm LSHFT SLASH,   \
U_NP,              U_NP,              &lt U_MEDIA DEL,   &lt U_NAV BSPC,    &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM SPC,     &lt U_FUN ESC,     U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&hm LSHFT Z,       &hm LGUI X,        &hm LALT C,        &hm LCTRL D,       &hm RALT V,        &hm RALT K,        &hm LCTRL H,       &hm LALT COMMA,    &hm LGUI DOT,      &hm LSHFT SLASH,   \
U_NP,              U_NP,              &lt U_MEDIA DEL,   &lt U_NAV BSPC,    &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM SPC,     &lt U_FUN ESC,     U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp K,             &kp N,             &kp E,             &kp I,             &kp O,             \
&hm LSHFT Z,       &hm LGUI X,        &hm LALT C,        &hm LCTRL D,       &hm RALT V,        &hm RALT M,        &hm LCTRL H,       &hm LALT COMMA,    &hm LGUI DOT,      &hm LSHFT SLASH,   \
U_NP,              U_NP,              &lt U_MEDIA DEL,   &lt U_NAV BSPC,    &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM SPC,     &lt U_FUN ESC,     U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             &kp D,             &kp H,             &kp T,             &kp N,             &kp S,             \
&hm LSHFT SLASH,   &hm LGUI Q,        &hm LALT J,        &hm LCTRL K,       &hm RALT X,        &hm RALT B,        &hm LCTRL M,       &hm LALT W,        &hm LGUI V,        &hm LSHFT Z,       \
U_NP,              U_NP,              &lt U_MEDIA DEL,   &lt U_NAV BSPC,    &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM SPC,     &lt U_FUN ESC,     U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
&kp S,             &kp H,             &kp N,             &kp T,             &kp COMMA,         &kp DOT,           &kp A,             &kp E,             &kp O,             &kp I,             \
&hm LSHFT F,       &hm LGUI M,        &hm LALT V,        &hm LCTRL C,       &hm RALT SLASH,    &hm RALT G,        &hm LCTRL P,       &hm LALT X,        &hm LGUI K,        &hm LSHFT Y,       \
U_NP,              U_NP,              &lt U_MEDIA DEL,   &lt U_NAV BSPC,    &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM SPC,     &lt U_FUN ESC,     U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
&kp A,             &kp S,             &kp H,             &kp T,             &kp G,             &kp Y,             &kp N,             &kp E,             &kp O,             &kp I,             \
&hm LSHFT Z,       &hm LGUI X,        &hm LALT M,        &hm LCTRL C,       &hm RALT V,        &hm RALT K,        &hm LCTRL L,       &hm LALT COMMA,    &hm LGUI DOT,      &hm LSHFT SLASH,   \
U_NP,              U_NP,              &lt U_MEDIA DEL,   &lt U_NAV BSPC,    &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM SPC,     &lt U_FUN ESC,     U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&hm LSHFT Z,       &hm LGUI X,        &hm LALT C,        &hm LCTRL V,       &hm RALT B,        &hm RALT N,        &hm LCTRL M,       &hm LALT COMMA,    &hm LGUI DOT,      &hm LSHFT SLASH,   \
U_NP,              U_NP,              &lt U_MEDIA DEL,   &lt U_NAV BSPC,    &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM SPC,     &lt U_FUN ESC,     U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&hm LSHFT Y,       &hm LGUI X,        &hm LALT C,        &hm LCTRL V,       &hm RALT B,        &hm RALT N,        &hm LCTRL M,       &hm LALT COMMA,    &hm LGUI DOT,      &hm LSHFT SLASH,   \
U_NP,              U_NP,              &lt U_MEDIA DEL,   &lt U_NAV BSPC,    &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM SPC,     &lt U_FUN ESC,     U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_TAP_AZERTY_FLIP \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp Q,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp M,             \
&kp W,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           &kp SLASH,         &kp SQT,           \
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &kp RET,           &kp TAB,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15_FLIP \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&kp Y,             &kp I,             &kp E,             &kp A,             &kp DOT,           &kp D,             &kp S,             &kp T,             &kp N,             &kp B,             \
&kp J,             &kp SLASH,         &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             &kp P,             &kp V,             \
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &kp RET,           &kp TAB,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp D,             &kp H,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &kp RET,           &kp TAB,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &kp RET,           &kp TAB,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp K,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &kp RET,           &kp TAB,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK_FLIP \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             &kp D,             &kp H,             &kp T,             &kp N,             &kp S,             \
&kp SLASH,         &kp Q,             &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &kp V,             &kp Z,             \
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &kp RET,           &kp TAB,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK_FLIP \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
&kp S,             &kp H,             &kp N,             &kp T,             &kp COMMA,         &kp DOT,           &kp A,             &kp E,             &kp O,             &kp I,             \
&kp F,             &kp M,             &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             &kp K,             &kp Y,             \
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &kp RET,           &kp TAB,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN_FLIP \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
&kp A,             &kp S,             &kp H,             &kp T,             &kp G,             &kp Y,             &kp N,             &kp E,             &kp O,             &kp I,             \
&kp Z,             &kp X,             &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &kp RET,           &kp TAB,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &kp RET,           &kp TAB,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Y,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &kp RET,           &kp TAB,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_AZERTY \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp Q,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp M,             \
&kp W,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           &kp SLASH,         &kp SQT,           \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp TAB,           &kp RET,           &kp SPC,           &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15 \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&kp Y,             &kp I,             &kp E,             &kp A,             &kp DOT,           &kp D,             &kp S,             &kp T,             &kp N,             &kp B,             \
&kp J,             &kp SLASH,         &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             &kp P,             &kp V,             \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp TAB,           &kp RET,           &kp SPC,           &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp D,             &kp H,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp TAB,           &kp RET,           &kp SPC,           &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp TAB,           &kp RET,           &kp SPC,           &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp K,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp TAB,           &kp RET,           &kp SPC,           &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             &kp D,             &kp H,             &kp T,             &kp N,             &kp S,             \
&kp SLASH,         &kp Q,             &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &kp V,             &kp Z,             \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp TAB,           &kp RET,           &kp SPC,           &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
&kp S,             &kp H,             &kp N,             &kp T,             &kp COMMA,         &kp DOT,           &kp A,             &kp E,             &kp O,             &kp I,             \
&kp F,             &kp M,             &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             &kp K,             &kp Y,             \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp TAB,           &kp RET,           &kp SPC,           &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
&kp A,             &kp S,             &kp H,             &kp T,             &kp G,             &kp Y,             &kp N,             &kp E,             &kp O,             &kp I,             \
&kp Z,             &kp X,             &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp TAB,           &kp RET,           &kp SPC,           &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp TAB,           &kp RET,           &kp SPC,           &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Y,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp TAB,           &kp RET,           &kp SPC,           &kp ESC,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP \
&kp PG_UP,         &kp HOME,          &kp UP,            &kp END,           &kp INS,           U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       \
&kp PG_DN,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &u_caps_word,      U_NA,              &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &to U_NAV,         &to U_NUM,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DEL,           &kp SPC,           &kp RET,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_FLIP \
&kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       \
&kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      U_NA,              &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &to U_NAV,         &to U_NUM,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DEL,           &kp SPC,           &kp RET,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &kp INS,           &kp HOME,          &kp UP,            &kp END,           &kp PG_UP,         \
U_NA,              U_NA,              &to U_NUM,         &to U_NAV,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp PG_DN,         \
&kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp RALT,          U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp SPC,           &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_VI \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NA,              U_NA,              &to U_NUM,         &to U_NAV,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
&kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp RALT,          &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp SPC,           &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NA,              U_NA,              &to U_NUM,         &to U_NAV,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
&kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp RALT,          &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp SPC,           &kp DEL,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP \
U_WH_U,            U_WH_L,            U_MS_U,            U_WH_R,            U_NU,              U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       \
U_WH_D,            U_MS_L,            U_MS_D,            U_MS_R,            U_NU,              U_NA,              &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &to U_MOUSE,       &to U_SYM,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_BTN2,            U_BTN3,            U_BTN1,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_FLIP \
U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       \
U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              U_NA,              &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &to U_MOUSE,       &to U_SYM,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_BTN2,            U_BTN3,            U_BTN1,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_NU,              U_WH_L,            U_MS_U,            U_WH_R,            U_WH_U,            \
U_NA,              U_NA,              &to U_SYM,         &to U_MOUSE,       U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_R,            U_WH_D,            \
&kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp RALT,          U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN1,            U_BTN3,            U_BTN2,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_VI \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NA,              U_NA,              &to U_SYM,         &to U_MOUSE,       U_NA,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              \
&kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp RALT,          U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN1,            U_BTN3,            U_BTN2,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NA,              U_NA,              &to U_SYM,         &to U_MOUSE,       U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
&kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp RALT,          U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN1,            U_BTN3,            U_BTN2,            U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP \
&u_rgb_hui,        &u_rgb_sai,        &kp C_VOL_UP,      &u_rgb_bri,        &rgb_ug RGB_TOG,   U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       \
&u_rgb_eff,        &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        &u_ep_tog,         U_NA,              &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &to U_MEDIA,       &to U_FUN,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_FLIP \
&u_rgb_eff,        &u_rgb_hui,        &u_rgb_sai,        &u_rgb_bri,        &rgb_ug RGB_TOG,   U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       \
&kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        &u_ep_tog,         U_NA,              &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &to U_MEDIA,       &to U_FUN,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &rgb_ug RGB_TOG,   &u_rgb_eff,        &kp C_VOL_UP,      &u_rgb_hui,        &u_rgb_sai,        \
U_NA,              U_NA,              &to U_FUN,         &to U_MEDIA,       U_NA,              &u_ep_tog,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        &u_rgb_bri,        \
&kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp RALT,          &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &u_rgb_eff,        &u_rgb_hui,        &u_rgb_sai,        &u_rgb_bri,        &rgb_ug RGB_TOG,   \
U_NA,              U_NA,              &to U_FUN,         &to U_MEDIA,       U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        &u_ep_tog,         \
&kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp RALT,          &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &rgb_ug RGB_TOG,   &u_rgb_eff,        &u_rgb_hui,        &u_rgb_sai,        &u_rgb_bri,        \
U_NA,              U_NA,              &to U_FUN,         &to U_MEDIA,       U_NA,              &u_ep_tog,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
&kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp RALT,          &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NUM_FLIP \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          \
&kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         U_NA,              &kp EQL,           &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp SEMI,          \
U_NA,              &kp RALT,          &to U_NAV,         &to U_NUM,         U_NA,              &kp BSLH,          &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp GRAVE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
&kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       \
&kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp EQL,           U_NA,              &to U_NUM,         &to U_NAV,         U_NA,              U_NA,              \
&kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp BSLH,          &kp RALT,          &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         \
U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_SYM_FLIP \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          \
&kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         U_NA,              &kp PLUS,          &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp COLON,         \
U_NA,              &kp RALT,          &to U_MOUSE,       &to U_SYM,         U_NA,              &kp PIPE,          &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp UNDER,         &kp LPAR,          &kp RPAR,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       \
&kp COLON,         &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp PLUS,          U_NA,              &to U_SYM,         &to U_MOUSE,       U_NA,              U_NA,              \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          &kp RALT,          &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_FUN_FLIP \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &kp PSCRN,         &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
&kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         U_NA,              &kp SLCK,          &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
U_NA,              &kp RALT,          &to U_MEDIA,       &to U_FUN,         U_NA,              &kp PAUSE_BREAK,   &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp TAB,           &kp BSPC,          &kp K_APP,         U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &to U_FUN,         &to U_MEDIA,       U_NA,              U_NA,              \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   &kp RALT,          &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         \
U_NP,              U_NP,              &kp K_APP,         &kp BSPC,          &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         U_NU,              U_NU,              &kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN2,            U_BTN3,            U_BTN1,            U_BTN1,            U_BTN3,            U_BTN2,            U_NP,              U_NP
