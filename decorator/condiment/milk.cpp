#include "milk.h"

Milk::Milk(BaseBeverage* beverage)
    : BeverageCondiment(beverage)
{
}

std::string Milk::getDescription()
{
    return beverage_->getDescription() + "\n\t" + "+Milk";
}

double Milk::getPrice()
{
    return 4 + beverage_->getPrice();
}
