#ifndef CPP_DESIGN_PATTERNS_MILK_H
#define CPP_DESIGN_PATTERNS_MILK_H

#include "beverage_with_condiment.h"

class Milk : public BeverageWithCondiment
{
public:
     explicit Milk(std::shared_ptr<Beverage> beverage);

     double cost() const override;
};


#endif //CPP_DESIGN_PATTERNS_MILK_H
