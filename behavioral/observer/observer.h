#ifndef CPP_DESIGN_PATTERNS_OBSERVER_H
#define CPP_DESIGN_PATTERNS_OBSERVER_H

class Observer
{
public:
     virtual ~Observer() = default;
     virtual void update() = 0;
};

#endif //CPP_DESIGN_PATTERNS_OBSERVER_H
