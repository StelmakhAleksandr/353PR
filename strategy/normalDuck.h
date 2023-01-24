#pragma once

#include "duck.h"

class NormalDuck : public Duck {
public:
    NormalDuck();
    std::string getType() override;
};
