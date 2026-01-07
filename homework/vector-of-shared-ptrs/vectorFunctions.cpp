#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    return std::vector<std::shared_ptr<int>>{};
}
void print(const std::vector<std::shared_ptr<int>>& vec) {
    for (const auto& num : vec) {
        std::cout << *num << "\n";
    }
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
    ;
}
void sub10(const int* num) {
    ;
}
void sub10(std::vector<std::shared_ptr<int>> vec) {
    ;
}