#include "int_state.h"
#include "observer.h"

#include <algorithm>

IntState::IntState() :
     state_(0)
{}

IntState::IntState(int state) :
     state_(state)
{}

void IntState::addObserver(std::shared_ptr<Observer> observer)
{
     observers_.emplace_back(observer);
}

void IntState::removeObserver(std::shared_ptr<Observer> observer)
{
     const auto remove_if_lambda = [&observer]( std::weak_ptr<Observer>& weak_observer) {
          return weak_observer.lock() == observer;
     };

     const auto remove_if_iter = std::remove_if(observers_.begin(), observers_.end(), remove_if_lambda);
     observers_.erase(remove_if_iter, observers_.end());
}

void IntState::notifyObservers() const
{
     std::for_each(observers_.begin(),
                   observers_.end(),
                   [this](const std::weak_ptr<Observer>& observer_ptr) { observer_ptr.lock()->update(*this); });
}

void IntState::set(int new_state)
{
     state_ = new_state;
}

int IntState::get() const
{
     return state_;
}

void IntState::stateChanged()
{
     notifyObservers();
}
