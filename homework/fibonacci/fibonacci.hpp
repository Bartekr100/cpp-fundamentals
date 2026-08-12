#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence < 0 || sequence >= 46) {
        return -1;
    }
    if (sequence == 0) {
        return 0;
    }
    if (sequence == 1) {
        return 1;
    }

    int n_2 = 0;
    int n_1 = 1;
    int n = 0;
    for (auto i = 1; i < sequence; ++i) {
        n = n_1 + n_2;
        n_2 = n_1;
        n_1 = n;
    }
    return n;
}

int fibonacci_recursive(int sequence) {
    if (sequence < 0 || sequence >= 46) {
        return -1;
    }
    if (sequence == 0) {
        return 0;
    }
    if (sequence == 1) {
        return 1;
    }

    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
