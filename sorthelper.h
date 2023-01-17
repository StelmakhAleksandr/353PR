#pragma once

#include <functional>
#include <vector>

class SortHelper {
public:
    SortHelper() = default;
    void display(const std::vector<int>& arr);
    void generate(std::vector<int>& arr, int count, int maxValue);
    void trackTime(std::vector<int>& arr, std::function<void(std::vector<int>&)>);
    // void compare(std::vector<int>& arr,
    //   std::function<void(std::vector<int>&)>, std::function<void(std::vector<int>&)>);
};
