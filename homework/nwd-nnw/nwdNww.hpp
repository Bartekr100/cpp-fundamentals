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
    // TODO: Implement me :)
    return -1;
}
