#pragma once

#include "quackBehavior.h"

class ExoticQuackBehavior : public QuackBehavior {
public:
    ExoticQuackBehavior();
    void quack() override;
};
