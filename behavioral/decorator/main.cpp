#include "whip.h"
#include "chocolate.h"
#include "milk.h"
#include "cappucino.h"
#include "latte.h"

#include <iostream>

int main() {

     std::shared_ptr<Beverage> cappucino = std::make_shared<Cappucino>();
     std::cout << "cost of cappucino = " << cappucino->cost() << std::endl;

     std::shared_ptr<Beverage> cappucicno_with_chocolate = std::make_shared<Chocolate>(cappucino);
     std::cout << "cost of cappucino with chocolate = " << cappucicno_with_chocolate->cost() << std::endl;

     std::shared_ptr<Beverage> latte = std::make_shared<Latte>();
     std::cout << "cost of latte = " << latte->cost() << std::endl;

     std::shared_ptr<Beverage> latte_with_whip_and_extra_milk =
          std::make_shared<Whip>(std::make_shared<Milk>(latte));
     std::cout << "cost of latte with whip and extra milk = " << latte_with_whip_and_extra_milk->cost() << std::endl;
     return 0;
}