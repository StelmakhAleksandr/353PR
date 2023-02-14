#pragma once

#include "shape.h"

class Rectangle : public Shape {
public:
    void accept(Observer& observer) override
    {
        observer.visit(*this);
    }
    Rectangle(int x, int y)
        : Shape(x, y)
    {
    }
};
