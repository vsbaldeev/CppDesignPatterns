#ifndef CPP_DESIGN_PATTERNS_INT_OBSERVER_H
#define CPP_DESIGN_PATTERNS_INT_OBSERVER_H

#include "observer.h"
#include <memory>

class Observable;

class IntObserver : public Observer
{
public:
     explicit IntObserver(Observable* observable);
     ~IntObserver() override;

     void update() override;

private:
     Observable* observable_;
};

#endif //CPP_DESIGN_PATTERNS_INT_OBSERVER_H
