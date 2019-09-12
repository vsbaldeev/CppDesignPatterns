#include "beverage_with_condiment.h"

BeverageWithCondiment::BeverageWithCondiment( std::shared_ptr<Beverage> beverage ) :
     beverage_(std::move(beverage))
{}

double BeverageWithCondiment::cost() const
{
     return beverage_->cost();
}
