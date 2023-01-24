#include "duck.h"

#include <iostream>

Duck::Duck()
{
}

void Duck::fly()
{
    flyBehavior_->fly();
}

void Duck::swim()
{
    std::cout << "I am swiming!";
}

void Duck::quack()
{
    quackBehavior_->quack();
}

void Duck::display()
{
    std::cout << "I am " << getType() << "! ";
    swim();
    std::cout << " ";
    quack();
    std::cout << " ";
    fly();
    std::cout << std::endl;
}
