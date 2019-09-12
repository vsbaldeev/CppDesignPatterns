#include "whip.h"

Whip::Whip(std::shared_ptr<Beverage> beverage) :
     BeverageWithCondiment(std::move(beverage))
{}

double Whip::cost() const
{
     return 0.3 + BeverageWithCondiment::cost();
}
