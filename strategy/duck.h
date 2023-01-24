#pragma once

#include <iostream>
#include <memory>
#include <string>

#include "behavior/fly/flyBehavior.h"
#include "behavior/quack/quackBehavior.h"

class Duck {
public:
    Duck();
    void fly();
    void swim();
    void quack();
    void display();
    virtual std::string getType() = 0;

protected:
    std::shared_ptr<QuackBehavior> quackBehavior_;
    std::shared_ptr<FlyBehavior> flyBehavior_;
};
