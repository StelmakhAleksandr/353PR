#pragma once

#include "flyBehavior.h"

class NoFlyBehavior : public FlyBehavior {
public:
    NoFlyBehavior();
    void fly() override;
};
