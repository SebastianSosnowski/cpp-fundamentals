#pragma once
#include <algorithm>
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    // manual solution
    // if (vec.empty()) {
    //     return {};
    // }
    // int max_value{vec[0]};
    // for (const int& num : vec) {
    //     max_value = std::max(max_value, num);
    // }
    auto it_max = std::max_element(vec.begin(), vec.end());
    if (it_max == vec.end()) {
        return 0;
    }
    return *it_max;
}
