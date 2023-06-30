#ifndef __factories__
#define __factories__
#include "factory.h"
#include "Animals.h"
class ageFactory:public factory{
    public:
    Animal* createAnimal();
};

class TypeFactory:public factory{
    public:
    Animal* createAnimal();
};

#endif