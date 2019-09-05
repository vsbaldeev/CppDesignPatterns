#include "int_observer.h"
#include "observable.h"
#include "int_state.h"

#include <iostream>

IntObserver::IntObserver(Observable* observable) :
     observable_(observable)
{
     observable_->addObserver(*this);
}

IntObserver::~IntObserver()
{
     observable_->removeObserver(*this);
}

void IntObserver::update()
{
     auto* inst_state = dynamic_cast<IntState*>(observable_);
     if (inst_state) {
          std::cout << "Got new value from int state: " << inst_state->get() << std::endl;
     }
}
