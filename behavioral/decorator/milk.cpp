
#include "milk.h"

double Milk::cost() const
{
     return 0.2 + BeverageWithCondiment::cost();
}

Milk::Milk(std::shared_ptr<Beverage> beverage) :
     BeverageWithCondiment(std::move(beverage))
{}

