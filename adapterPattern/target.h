#ifndef __TargetForAdapter__
#define __TargetForAdapter__
#include "Itarget.h"
#include "Adaptee.h"
class Target: public Itarget{
    private:
    Adaptee a;
    public:
    Target(Adaptee a):a(a){}
    void request();
};

#endif