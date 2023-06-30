#include "Invoker.h"
#include <iostream>
bool Invoker::CheckState(){
    if(states.empty()){
        states.push_back(Off);
        return Off;
    }
    else{
        return states[states.size()-1];
    }
}
void Invoker::PrintStates(){
    for(auto St: states){
        std::cout << St << std::endl;
    }
}
void Invoker::TurnOn(){
    if(CheckState() == Off){
        states.push_back(On);
    }
    TurnOnCom.Execute();
}

void Invoker::TurnOff(){
    if(CheckState() == On){
        states.push_back(Off);
    }
    TurnOffCom.Execute();
}
