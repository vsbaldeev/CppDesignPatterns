#include "chocolate.h"

Chocolate::Chocolate(std::shared_ptr<Beverage> beverage) :
     BeverageWithCondiment(std::move(beverage))
{}

double Chocolate::cost() const
{
     return 0.4  + BeverageWithCondiment::cost();
}
