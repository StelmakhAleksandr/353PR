#pragma once

#include "duck.h"

class RubberDuck : public Duck {
public:
    RubberDuck();
    std::string getType() override;
};
