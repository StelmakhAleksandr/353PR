#pragma once

#include <iostream>
#include <string>

class BaseBeverage {
public:
    BaseBeverage();
    virtual std::string getDescription() = 0;
    virtual double getPrice() = 0;
};
