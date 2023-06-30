#ifndef __VIEW__
#define __VIEW__
#include "Iresource.h"

class view{
    public:
    Iresource *resource;
    view(Iresource* resource): resource(resource){}
    virtual void show() = 0;

};

#endif