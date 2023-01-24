#include "exoticDuck.h"
#include <iostream>

#include "behavior/fly/normalFlyBehavior.h"
#include "behavior/quack/exoticQuackBehavior.h"

ExoticDuck::ExoticDuck()
{
    flyBehavior_ = std::make_shared<NormalFlyBehavior>();
    quackBehavior_ = std::make_shared<ExoticQuackBehavior>();
}

std::string ExoticDuck::getType()
{
    return "ExoticDuck";
}
