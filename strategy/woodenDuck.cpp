#include "woodenDuck.h"

#include "behavior/fly/noFlyBehavior.h"
#include "behavior/quack/noQuackBehavior.h"

WoodenDuck::WoodenDuck()
{
    flyBehavior_ = std::make_shared<NoFlyBehavior>();
    quackBehavior_ = std::make_shared<NoQuackBehavior>();
}

std::string WoodenDuck::getType()
{
    return "WoodenDuck";
}
