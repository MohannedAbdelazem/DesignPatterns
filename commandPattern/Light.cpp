#include "Light.h"
#include <iostream>
Light::Light():state(0){}

bool Light::getState(){
    return state;
}

void Light::setState(bool state){
    this->state = state;
}
void Light::TurnOn(){
    if(!getState()){
        std::cout << "The light turned on now" << std::endl;
        setState(On);
    }
    else{
        std::cout << "The light is already turned on" << std::endl;
    }
}

void Light::TurnOff(){
    if(getState()){
        std::cout << "The light turned off now" << std::endl;
        setState(Off);
    }
    else{
        std::cout << "The light is already turned off" << std::endl;
    }
}