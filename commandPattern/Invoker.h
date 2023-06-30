#ifndef __Invoker__
#define __Invoker__
#include "TurnOffCommand.h"
#include "TurnOnCommand.h"
#include <vector>
class Invoker{
    private:
    TurnOffCommand TurnOffCom;
    TurnOnCommand TurnOnCom;
    std::vector<bool> states;
    public:
    Invoker(TurnOffCommand ToF, TurnOnCommand ToN):TurnOffCom(ToF), TurnOnCom(ToN){}
    bool CheckState();
    void TurnOn();
    void TurnOff();
    void PrintStates();


};

#endif