#pragma once

#include "quackBehavior.h"

class NoQuackBehavior : public QuackBehavior {
public:
    NoQuackBehavior();
    void quack() override;
};
