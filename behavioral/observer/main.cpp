#include "int_state.h"
#include "int_observer.h"

int main() {
     IntState int_state(5);
     auto shared_int_observer = std::make_shared<IntObserver>();
     int_state.addObserver(shared_int_observer);

     int_state.set(7);
     int_state.stateChanged();

     int_state.set(9);
     int_state.stateChanged();

     // remove notificaton
     int_state.removeObserver(shared_int_observer);
     int_state.set(10);
     return 0;
}

