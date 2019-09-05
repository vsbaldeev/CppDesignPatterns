#ifndef CPP_DESIGN_PATTERNS_INTSTATE_H
#define CPP_DESIGN_PATTERNS_INTSTATE_H

#include "observable.h"
#include <vector>

class IntState : public Observable
{
public:
     IntState();
     explicit IntState(int state);

     void addObserver(std::shared_ptr<Observer> observer) override;
     void removeObserver(std::shared_ptr<Observer> observer) override;
     void notifyObservers() const override;

     void set(int new_state);
     int get() const;
     void stateChanged();

private:
     std::vector<std::weak_ptr<Observer>> observers_;
     int state_;
};

#endif //CPP_DESIGN_PATTERNS_INTSTATE_H
