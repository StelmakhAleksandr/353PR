#pragma once

#include "shape.h"
#include <vector>

class Layer {
public:
    void accept(Observer& observer)
    {
        observer.visit(*this);
    }
    std::vector<Shape*> shapes_;
};
