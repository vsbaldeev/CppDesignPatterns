#ifndef CPP_DESIGN_PATTERNS_INTSTATE_H
#define CPP_DESIGN_PATTERNS_INTSTATE_H

#include "observable.h"
#include <vector>

class IntState : public Observable
{
public:
     IntState();
     explicit IntState(int state);

     void addObserver( Observer& observer) override;
     void removeObserver( Observer& observer) override;
     void notifyObservers() override;

     void set(int new_state);
     int get();
     void stateChanged();

private:
     std::vector<Observer*> observers_;
     int state_;
};

#endif //CPP_DESIGN_PATTERNS_INTSTATE_H
