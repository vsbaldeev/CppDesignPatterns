#ifndef CPP_DESIGN_PATTERNS_WHIP_H
#define CPP_DESIGN_PATTERNS_WHIP_H

#include "beverage_with_condiment.h"

class Whip : public BeverageWithCondiment
{
public:
     explicit Whip(std::shared_ptr<Beverage> beverage);

     double cost() const override;
};


#endif //CPP_DESIGN_PATTERNS_WHIP_H
