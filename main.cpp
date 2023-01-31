#include "decorator/coffee.h"
#include "decorator/condiment/milk.h"
#include "decorator/condiment/sugar.h"
#include "decorator/tea.h"
#include "sorthelper.h"
#include "strategy/lake.h"
#include "timer.h"
#include <functional>
#include <iostream>
#include <memory>
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

/*
  Автомат з напоями

  auto b = new Beverage();
  b->addSugar();
  b->addSugar();
  b->addMilk();
  b->addMilk();
  b->addMilk();

  b->getPrice();
  b->getDescription();

*/

int main()
{
    //    srand(time(0));
    //    SortHelper helper;

    //    vector<int> arr;
    //    helper.generate(arr, 100, 100);
    //    helper.trackTime(arr, sort2);
    //    //helper.compare(arr, sort, sort2);

    //    helper.display(arr);

    Tea tea;
    Coffee coffee;
    auto beverage = new Milk(new Sugar(new Sugar(new Coffee())));

    cout << tea.getDescription() << " " << tea.getPrice() << endl;
    cout << coffee.getDescription() << " " << coffee.getPrice() << endl;
    cout << beverage->getDescription() << " " << beverage->getPrice() << endl;

    return 0;
}
