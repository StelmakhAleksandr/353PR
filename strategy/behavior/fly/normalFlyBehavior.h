#pragma once

#include "flyBehavior.h"

class NormalFlyBehavior : public FlyBehavior {
public:
    NormalFlyBehavior();
    void fly() override;
};
