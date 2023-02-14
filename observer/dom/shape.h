#pragma once

#include "observer/observer.h"

class Shape {
public:
    virtual void accept(Observer& observer) = 0;
    Shape(int x, int y)
        : x(x)
        , y(y)
    {
    }
    int x;
    int y;
};
