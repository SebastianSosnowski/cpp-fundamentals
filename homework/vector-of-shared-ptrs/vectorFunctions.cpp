#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    for (int i = 0; i < count; i++) {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
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