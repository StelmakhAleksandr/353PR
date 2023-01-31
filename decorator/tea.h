#pragma once

#include "baseBeverage.h"

class Tea : public BaseBeverage {
public:
    Tea();
    std::string getDescription() override;
    double getPrice() override;
};
