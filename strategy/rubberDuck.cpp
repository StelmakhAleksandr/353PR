#include "rubberDuck.h"

#include "behavior/fly/noFlyBehavior.h"
#include "behavior/quack/rubberQuackBehavior.h"

RubberDuck::RubberDuck()
{
    flyBehavior_ = std::make_shared<NoFlyBehavior>();
    quackBehavior_ = std::make_shared<RubberQuackBehavior>();
}

std::string RubberDuck::getType()
{
    return "RubberDuck";
}
