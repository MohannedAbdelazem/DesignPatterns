#ifndef __Iobservant__
#define __Iobservant__
#include <bits/stdc++.h>
#include "Iobserver.h"
class Iobservant{
    public:
    virtual void Register(Iobserver* Ob) = 0;
    virtual void notify() = 0;
    virtual int getState() = 0;
    virtual void changeState(int newValue) = 0;
};
#endif