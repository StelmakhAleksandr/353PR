#pragma once

#include "duck.h"

class FlyDuck : public Duck {
public:
    FlyDuck();
    std::string getType() override;
};
