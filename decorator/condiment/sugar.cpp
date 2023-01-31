#include "sugar.h"

Sugar::Sugar(BaseBeverage* beverage)
    : BeverageCondiment(beverage)
{
}

std::string Sugar::getDescription()
{
    return beverage_->getDescription() + "\n\t" + "+Sugar";
}

double Sugar::getPrice()
{
    return 0.9 + beverage_->getPrice();
}
