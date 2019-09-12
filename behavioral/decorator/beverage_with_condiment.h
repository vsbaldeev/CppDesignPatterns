#ifndef CPP_DESIGN_PATTERNS_BEVERAGE_WITH_CONDIMENT_H
#define CPP_DESIGN_PATTERNS_BEVERAGE_WITH_CONDIMENT_H

#include "beverage.h"

#include <memory>

class BeverageWithCondiment : public Beverage
{
public:
     explicit BeverageWithCondiment(std::shared_ptr<Beverage> beverage);

     double cost() const override = 0;

private:
     std::shared_ptr<Beverage> beverage_;
};


#endif //CPP_DESIGN_PATTERNS_BEVERAGE_WITH_CONDIMENT_H
