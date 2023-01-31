#pragma once

#include "baseBeverage.h"

class Coffee : public BaseBeverage {
public:
    Coffee();
    std::string getDescription() override;
    double getPrice() override;
};
