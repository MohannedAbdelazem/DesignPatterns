#ifndef __Animals__
#define __Animals__
#include "animal.h"
class Duck: public Animal{
    public:
    Duck(std::string type, int age):Animal(type, age){}
    std::string sound();
};

class Dog: public Animal{
    public:
    Dog(std::string type, int age):Animal(type, age){}
    std::string sound();
};

class Cat:public Animal{
    public:
    Cat(std::string type, int age):Animal(type, age){}
    std::string sound();
};

#endif