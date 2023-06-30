#include "Invoker.h"
#include <iostream>

int main(){
    Light l1;
    TurnOnCommand To(l1);
    TurnOffCommand Tf(l1);
    Invoker Commander(Tf, To);
    Commander.TurnOff();
    Commander.TurnOn();
    Commander.TurnOff();
    Commander.TurnOff();
    Commander.TurnOn();
    Commander.TurnOff();
    Commander.PrintStates();
    return 0;
}