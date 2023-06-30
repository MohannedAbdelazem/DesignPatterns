#ifndef __Client__
#define __Client__
#include "Itarget.h"
class client{
    private:
    Itarget *target;
    public:
    client(Itarget *t):target(t){}
    void Print();
};

#endif