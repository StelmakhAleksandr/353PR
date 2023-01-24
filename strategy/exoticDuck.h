#pragma once

#include "duck.h"

class ExoticDuck : public Duck {
public:
    ExoticDuck();
    std::string getType() override;
};
