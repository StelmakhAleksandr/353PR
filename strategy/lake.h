#pragma once

#include "duck.h"
#include "exoticDuck.h"
#include "flyDuck.h"
#include "normalDuck.h"
#include "rubberDuck.h"
#include "woodenDuck.h"
#include <memory>
#include <vector>

class Lake {
public:
    Lake();
    void display();
    void insertDuck(std::shared_ptr<Duck>);

private:
    std::vector<std::shared_ptr<Duck>> ducks_;
};
