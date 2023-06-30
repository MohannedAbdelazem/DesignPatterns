#ifndef __Icommand__
#define __Icommand__
#include "Light.h"
class Command{
    protected:
    Light *light;
    public:
    Command(Light l):light(&l){}
    virtual void Execute() = 0;
    virtual void UnExecute() = 0;

};

#endif