#pragma once

#include "beverageCondiment.h"

class Milk : public BeverageCondiment {
public:
    Milk(BaseBeverage* beverage);
    std::string getDescription() override;
    double getPrice() override;
};
