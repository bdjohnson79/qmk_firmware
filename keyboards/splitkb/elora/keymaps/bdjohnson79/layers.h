#pragma once
#include QMK_KEYBOARD_H

enum layers {
    _QWERTY = 0,
    _FUNCTION,
    _NUMPAD,
    _MEDIA,
    _SYM,
    _COLEMAK_DH,
    _ADJUST,
};

// Aliases for readability
#define QWERTY   DF(_QWERTY)
#define FUNCTION    MO(_FUNCTION)
#define NUMPAD  MO(_NUMPAD)
#define MEDIA      MO(_MEDIA)
#define SYM      MO(_SYM)
#define COLEMAK_DH MO(_COLEMAK_DH)
#define ADJUST   MO(_ADJUST)

/*

enum layers {
    _QWERTY = 0,
    _GSHFT,
    _NUM,
    _SYM,
    _NAV,
    _ADJUST,
    _MOUSE,
};

// Aliases for readability
#define QWERTY   DF(_QWERTY)
#define GSHFT    DF(_GSHFT)
#define NUM      MO(_NUM)
#define SYM      MO(_SYM)
#define NAV      MO(_NAV)
#define ADJUST   TG(_ADJUST)
#define MOUSE    TG(_MOUSE)

*/
