#pragma once

#include "shape.h"

class Line : public Shape {
public:
    void accept(Observer& observer) override
    {
        observer.visit(*this);
    }
    Line(int x, int y)
        : Shape(x, y)
    {
    }
};
