#pragma once

#include "../baseBeverage.h"

class BeverageCondiment : public BaseBeverage {
public:
    BeverageCondiment(BaseBeverage* beverage);

protected:
    BaseBeverage* beverage_;
};
