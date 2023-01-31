#pragma once

#include "quackBehavior.h"

class RubberQuackBehavior : public QuackBehavior {
public:
    RubberQuackBehavior();
    void quack() override;
};
