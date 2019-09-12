#ifndef CPP_DESIGN_PATTERNS_CHOCOLATE_H
#define CPP_DESIGN_PATTERNS_CHOCOLATE_H

#include "beverage_with_condiment.h"

class Chocolate : public BeverageWithCondiment
{
public:
     explicit Chocolate(std::shared_ptr<Beverage> beverage);

     double cost() const override;
};


#endif //CPP_DESIGN_PATTERNS_CHOCOLATE_H
