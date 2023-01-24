#include "flyDuck.h"

#include "behavior/fly/normalFlyBehavior.h"
#include "behavior/quack/normalQuackBehavior.h"
#include <iostream>

FlyDuck::FlyDuck()
{
    flyBehavior_ = std::make_shared<NormalFlyBehavior>();
    quackBehavior_ = std::make_shared<NormalQuackBehavior>();
}

std::string FlyDuck::getType()
{
    return "FlyDuck";
}
