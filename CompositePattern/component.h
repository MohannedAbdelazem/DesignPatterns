#ifndef __COMPONENT__
#define __COMPONENT__
#include <iostream>
class component{
    protected:
    std::string name;
    public:
    component(std::string name):name(name){}
    virtual void displayInfo() = 0;
};

#endif