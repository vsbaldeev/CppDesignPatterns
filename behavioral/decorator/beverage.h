#ifndef CPP_DESIGN_PATTERNS_FUNCTIONALOBJECT_H
#define CPP_DESIGN_PATTERNS_FUNCTIONALOBJECT_H

class Beverage
{
public:
     virtual ~Beverage() = default;
     virtual double cost() const = 0;
};


#endif //CPP_DESIGN_PATTERNS_FUNCTIONALOBJECT_H
