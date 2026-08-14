#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    if (count <= 0) {
        return vec;
    }

    vec.reserve(count);
    for (auto i = 0; i < count; ++i) {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    if (vec.empty()) {
        std::cout << "vector is empty" << "\n";
        return;
    }

    for (const auto& el : vec) {
        if (el) {
            std::cout << *el << "\n";
        } else {
            std::cout << "this element not exist" << "\n";
        }
    }
}