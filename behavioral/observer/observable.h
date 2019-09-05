#ifndef CPP_DESIGN_PATTERNS_OBSERVABLE_H
#define CPP_DESIGN_PATTERNS_OBSERVABLE_H

#include <memory>

class Observer;

class Observable
{
public:
     virtual ~Observable() = default;
     virtual void addObserver( Observer& observer ) = 0;
     virtual void removeObserver( Observer& observer ) = 0;
     virtual void notifyObservers() = 0;
};

#endif //CPP_DESIGN_PATTERNS_OBSERVABLE_H
