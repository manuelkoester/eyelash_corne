#include "zmk-helpers/key-labels/eyelash42.h"

#define LEFT_SIDE_KEYS LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4 LB5
#define RIGHT_SIDE_KEYS RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4 RB5
#define THUMB_KEYS LH2 LH1 LH0 RH0 RH1 RH2

ZMK_HOLD_TAP(hml,
    flavor = "tap-preferred";
    tapping-term-ms = <150>;
    quick-tap-ms = <175>;                // repeat on tap-into-hold
    require-prior-idle-ms = <275>;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <KEYS_R THUMBS>;
    hold-trigger-on-release;             // delay positional check until key-release
)

ZMK_HOLD_TAP(hmr,
    flavor = "tap-preferred";
    tapping-term-ms = <150>;
    quick-tap-ms = <175>;                // repeat on tap-into-hold
    require-prior-idle-ms = <275>;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <KEYS_L THUMBS>;
    hold-trigger-on-release;             // delay positional check until key-release
)