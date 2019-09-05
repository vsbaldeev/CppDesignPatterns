#include "int_state.h"
#include "observer.h"

#include <algorithm>

IntState::IntState() :
     state_(0)
{}

IntState::IntState(int state) :
     state_(state)
{}

void IntState::addObserver(Observer& observer)
{
     observers_.emplace_back(&observer);
}

void IntState::removeObserver(Observer& observer)
{
     observers_.erase(std::remove( observers_.begin(), observers_.end(), &observer),
                       observers_.end());
}

void IntState::notifyObservers()
{
     std::for_each(observers_.begin(),
                   observers_.end(),
                   [](Observer* observer_ptr) { observer_ptr->update(); });
}

void IntState::set(int new_state)
{
     state_ = new_state;
}

int IntState::get()
{
     return state_;
}

void IntState::stateChanged()
{
     notifyObservers();
}
