#include "sorthelper.h"

#include "timer.h"
#include <iostream>

void SortHelper::display(const std::vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void SortHelper::generate(std::vector<int>& arr, int count, int maxValue)
{
    for (int i = 0; i < count; i++) {
        arr.push_back(rand() % maxValue);
    }
}

void SortHelper::trackTime(std::vector<int>& arr, std::function<void(std::vector<int>&)> sort)
{
    Timer timer;
    sort(arr);
    auto elapsed = timer.elapsed();
    std::cout << "elapsed " << elapsed << " microseconds!" << std::endl;
}
