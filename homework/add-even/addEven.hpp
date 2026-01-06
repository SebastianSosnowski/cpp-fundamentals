#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    // TODO: Your implementation goes here
    int result{};

    for (const auto& num : numbers) {
        if (!(num % 2)) {
            result += num;
        }
    }
    return result;
}
