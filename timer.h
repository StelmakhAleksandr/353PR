#pragma once

#include <chrono>

class Timer {
public:
    using clock = std::chrono::high_resolution_clock;
    Timer() = default;
    void reset();
    long long elapsed();

private:
    std::chrono::time_point<clock> beginTimePoint_ = clock::now();
};
