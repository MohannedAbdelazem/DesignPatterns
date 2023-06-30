#ifndef __factory__
#define __factory__
#include "Animals.h"
class factory{
    public:
    virtual Animal* createAnimal() = 0;
};

#endif