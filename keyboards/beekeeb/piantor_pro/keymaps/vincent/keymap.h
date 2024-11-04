#include QMK_KEYBOARD_H

#if defined(QUICK_TAP_TERM)
#   undef QUICK_TAP_TERM
#   define QUICK_TAP_TERM 0
#endif
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD_PER_KEY
