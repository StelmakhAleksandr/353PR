#include "timer.h"

void Timer::reset()
{
    beginTimePoint_ = clock::now();
}

long long Timer::elapsed()
{
    auto duration = clock::now() - beginTimePoint_;
    return std::chrono::duration_cast<std::chrono::microseconds>(duration).count();
}
