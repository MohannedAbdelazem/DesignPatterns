#ifndef __DIRECTORY__
#define __DIRECTORY__
#include "component.h"
#include <vector>
class Directory: public component{
    private:
    std::vector<component*> children;
    public:
    Directory(std::string Name):component(Name){}
    void displayInfo();
    void addChild(component* child);
    void RemoveChild(component* child);
};

#endif