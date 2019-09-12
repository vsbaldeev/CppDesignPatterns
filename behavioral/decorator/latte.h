#ifndef CPP_DESIGN_PATTERNS_LATTE_H
#define CPP_DESIGN_PATTERNS_LATTE_H

#include "beverage.h"

class Latte : public Beverage
{
public:
     double cost() const override;
};


#endif //CPP_DESIGN_PATTERNS_LATTE_H
