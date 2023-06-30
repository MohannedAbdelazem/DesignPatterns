#include "singleton.h"
#include <iostream>

singleton singleton::getInstance(){
    return instance;
}
void singleton::print(){
    std::cout << "Hello world" << std::endl;
}