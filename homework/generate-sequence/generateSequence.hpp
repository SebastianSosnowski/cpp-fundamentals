#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> v;
    if (count <= 0) {
        return v;
    }
    v.reserve(count);

    for (int i = 0, val = step; i < count; i++, val += step) {
        v.push_back(val);
    }
    return v;
}
