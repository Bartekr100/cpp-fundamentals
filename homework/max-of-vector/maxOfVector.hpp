#pragma once
#include <limits>  // better will be exception
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    if (vec.empty()) {
        return std::numeric_limits<int>::min();
    }

    int max = vec[0];
    for (auto const el : vec) {
        if (max < el) {
            max = el;
        }
    }

    return max;
}
