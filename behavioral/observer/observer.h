#ifndef CPP_DESIGN_PATTERNS_OBSERVER_H
#define CPP_DESIGN_PATTERNS_OBSERVER_H

#include "observable.h"

class Observer
{
public:
     virtual ~Observer() = default;
     virtual void update(const Observable& observable) = 0;
};

#endif //CPP_DESIGN_PATTERNS_OBSERVER_H
