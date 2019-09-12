#ifndef CPP_DESIGN_PATTERNS_CAPPUCINO_H
#define CPP_DESIGN_PATTERNS_CAPPUCINO_H

#include "beverage.h"

class Cappucino : public Beverage
{
public:
     double cost() const override;
};


#endif //CPP_DESIGN_PATTERNS_CAPPUCINO_H
