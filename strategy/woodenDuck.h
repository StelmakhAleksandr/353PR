#pragma once

#include "duck.h"

class WoodenDuck : public Duck {
public:
    WoodenDuck();
    std::string getType() override;
};
