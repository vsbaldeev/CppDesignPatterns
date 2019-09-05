#ifndef CPP_DESIGN_PATTERNS_INT_OBSERVER_H
#define CPP_DESIGN_PATTERNS_INT_OBSERVER_H

#include "observer.h"
#include <memory>

class Observable;

class IntObserver : public Observer
{
public:
     void update(const Observable& observable) override;
};

#endif //CPP_DESIGN_PATTERNS_INT_OBSERVER_H
