#include QMK_KEYBOARD_H

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (layer_state_is(0)) {
            if (clockwise) {
                tap_code(KC_DOWN);
            } else {
                tap_code(KC_UP);
            }
        } else if (layer_state_is(1)) {
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
        } else if (layer_state_is(3)) {
            if (clockwise) {
                tap_code(KEY_F14);
            } else {
                tap_code(KEY_F15);
            }
        }
    }
    else if (index == 1) {
        if (layer_state_is(0)) {
            if (clockwise) {
                tap_code(KC_PGDN);
            } else {
                tap_code(KC_PGUP);
            }
        } else if (layer_state_is(1)) {
            if (clockwise) {
                tap_code(KC_HOME);
            } else {
                tap_code(KC_END);
            }
        }
    }
    return false;
}