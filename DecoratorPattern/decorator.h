#ifndef __decorator__
#define __decorator__
#include "component.h"
#include "bevarages.h"
class decorator:public component{
    public:
    component *p;
    virtual std::string description() = 0;
    virtual int price() = 0;
};

#endif