#include "Directory.h"

void Directory::addChild(component* child){
    children.push_back(child);
}
void Directory::RemoveChild(component* child){
    for(auto kid = children.begin(); kid != children.end();++kid){
        if(*kid == child){
            children.erase(kid);
            return;
        }
    }
}

void Directory::displayInfo(){
    std::cout << "Directory name: " << name << std::endl;
    for(auto child: children){
        child->displayInfo();
    }
}