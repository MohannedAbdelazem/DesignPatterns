#include "additions.h"

soya::soya(component *comp){
    this->p = comp;
}

std::string soya::description(){
    return "soya " + this->p->description();
}

int soya::price(){
    return 1 + this->p->price();
}