#ifndef __file__
#define __file__
#include "component.h"
class file: public component{
    public:
    file(std::string Name):component(Name){}
    void displayInfo();
};

#endif