#pragma once

#include "layer.h"

class Page {
public:
    void accept(Observer& observer)
    {
        observer.visit(*this);
    }
    std::vector<Layer> layers_;
};
