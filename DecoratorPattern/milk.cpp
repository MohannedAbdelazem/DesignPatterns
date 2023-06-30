#include "additions.h"

milk::milk(component *comp){
    this->p = comp;
}

std::string milk::description(){
    return "milk " + this->p->description();
}

int milk::price(){
    return 2 + this->p->price();
}