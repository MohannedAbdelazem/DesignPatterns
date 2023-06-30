#ifndef __additions__
#define __additions__
#include "decorator.h"
class milk:public decorator{
    public:
    milk(component *comp);
    std::string description();
    int price();
};

class soya:public decorator{
    public:
    soya(component *comp);
    std::string description();
    int price();
};

#endif 