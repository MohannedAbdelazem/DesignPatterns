#ifndef __Animal__
#define __Animal__
#include <iostream>
class Animal{
    private:
    std::string type;
    int age;
    public:
    Animal(std::string type, int age): type(type), age(age){}
    virtual std::string sound() = 0;
};

#endif