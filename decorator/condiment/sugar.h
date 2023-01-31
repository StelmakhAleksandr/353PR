#pragma once

#include "beverageCondiment.h"

class Sugar : public BeverageCondiment {
public:
    Sugar(BaseBeverage* beverage);
    std::string getDescription() override;
    double getPrice() override;
};
