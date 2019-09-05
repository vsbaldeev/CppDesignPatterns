#include "int_observer.h"
#include "observable.h"
#include "int_state.h"

#include <iostream>

void IntObserver::update( const Observable& observable )
{
     if (const auto* int_state = dynamic_cast<const IntState*>(&observable)) {
          std::cout << "Got new value from int state: " << int_state->get() << std::endl;
     }
}
