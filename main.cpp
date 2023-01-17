#include "sorthelper.h"
#include "timer.h"
#include <functional>
#include <iostream>
#include <vector>
using namespace std;

void sort2(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    srand(time(0));
    SortHelper helper;

    vector<int> arr;
    helper.generate(arr, 100, 100);
    helper.trackTime(arr, sort2);
    //helper.compare(arr, sort, sort2);

    //test comment

    helper.display(arr);

    return 0;
}
