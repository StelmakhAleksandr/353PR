#include "decorator/coffee.h"
#include "decorator/condiment/milk.h"
#include "decorator/condiment/sugar.h"
#include "decorator/tea.h"
#include "lib/json.hpp"
#include "observer/dom/line.h"
#include "observer/dom/page.h"
#include "observer/dom/rectangle.h"
#include "observer/jsonObserver.h"
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
    Page
        Layer
            Rectangle
            Line
            Circle
            Triangle

   1) make dom model
   2) export to json


*/

nlohmann::json toJson(Page& page)
{
    JsonObserver observer;
    page.accept(observer);
    return observer.json;
}

int main()
{
    Line line(10, 10);
    Rectangle rectangle(100, 100);
    Layer layer, layer2;
    Page page;
    layer.shapes_.push_back(&line);
    layer2.shapes_.push_back(&rectangle);
    layer2.shapes_.push_back(&line);
    page.layers_.push_back(layer);
    page.layers_.push_back(layer2);

    cout << toJson(page).dump(4) << endl;

    return 0;
}
