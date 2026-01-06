#pragma once

int NWD(int lhs, int rhs) {
    if (lhs == 0)
        return rhs;
    if (rhs == 0)
        return lhs;
    int a{lhs}, b{rhs}, quotient{}, reminder{};

    do {
        quotient = a / b;
        reminder = a % b;
        if (reminder == 0) {
            break;
        }
        a = b;
        b = reminder;
    } while (reminder != 0);

    return std::abs(b);
    // or just return std::gcd(lhs, rhs); :)
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 or rhs == 0) {
        return 0;
    }
    int res = abs((lhs * rhs) / NWD(lhs, rhs));
    return res;
    // or just return std::lcm(lhs, rhs); :)
}
