#pragma once

#include "quackBehavior.h"

class NormalQuackBehavior : public QuackBehavior {
public:
    NormalQuackBehavior();
    void quack() override;
};
