#pragma once

int NWD(int lhs, int rhs) {
    int first = (lhs > 0) ? lhs : -lhs;
    int second = (rhs > 0) ? rhs : -rhs;

    while (second != 0) {
        int rest = 0;
        rest = first % second;
        first = second;
        second = rest;
    }

    return first;
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 || rhs == 0) {
        return 0;
    }
    int result = (lhs / NWD(lhs, rhs))*rhs;  // divide first to protect against overflow
    return (lhs < 0 ^ rhs < 0) ? -result : result;
}
