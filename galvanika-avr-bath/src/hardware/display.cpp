#include "display.hpp"

const uint8_t Display::DIGITS[10] = {
        0b00010100, // 1
        0b01110111, // 2
        0b00101100, // 3
        0b00100101, // 3
        0b01000111, // 4
        0b10000101, // 5
        0b10000100, // 6
        0b00110111, // 7
        0b00000100, // 8
        0b00000101  // 9
        // a - 7
        // b - 8
        // c - 4
        // d - 2
        // e - 1
        // f - 6
        // g - 5
        // dp - 3
};
