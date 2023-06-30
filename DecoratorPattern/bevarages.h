#ifndef __bevarages__
#define __bevarages__
#include "component.h"

class tea:public component{
    public:
    std::string description();
    int price();
};

class espresso:public component{
    public:
    std::string description();
    int price();
};

#endif