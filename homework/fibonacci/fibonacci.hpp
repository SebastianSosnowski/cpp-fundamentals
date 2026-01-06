#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    if (sequence == 0 or sequence == 1)
        return sequence;
    if (sequence < 0)
        return -1;

    int curr{0}, prev_prev{0}, prev{1};
    for (int i = 2; i <= sequence; i++) {
        curr = prev_prev + prev;
        prev_prev = prev;
        prev = curr;
    }
    return curr;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
