#include "normalDuck.h"

#include "behavior/fly/noFlyBehavior.h"
#include "behavior/quack/normalQuackBehavior.h"

NormalDuck::NormalDuck()
{
    flyBehavior_ = std::make_shared<NoFlyBehavior>();
    quackBehavior_ = std::make_shared<NormalQuackBehavior>();
}

std::string NormalDuck::getType()
{
    return "NormalDuck";
}
