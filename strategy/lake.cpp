#include "lake.h"

#include <iostream>

Lake::Lake()
{
}

void Lake::display()
{
    for (auto& duck : ducks_) {
        duck->display();
    }
}

void Lake::insertDuck(std::shared_ptr<Duck> duck)
{
    ducks_.push_back(duck);
}
