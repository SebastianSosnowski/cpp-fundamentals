#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    std::string res{};

    if (command == "add") {
        res = std::to_string(first + second);
    } else if (command == "subtract") {
        res = std::to_string(first - second);
    } else if (command == "multiply") {
        res = std::to_string(first * second);
    } else if (command == "divide") {
        if (second == 0)
            return "Division by 0";
        res = std::to_string(first / second);
    } else {
        res = "Invalid data";
    }
    return res;
}
