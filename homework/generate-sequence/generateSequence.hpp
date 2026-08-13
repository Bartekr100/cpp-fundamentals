#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec;
    if (count <= 0) {
        return vec;
    }

    if (step == 0) {
        vec.resize(count);
        return vec;
    }
    vec.reserve(count);
    int value = step;
    for (std::size_t i = 0; i < count; ++i) {
        vec.push_back(value);
        value += step;
    }
    return vec;
}
