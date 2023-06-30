#ifndef __TurnOnCommand__
#define __TurnOnCommand__
#include "Icommand.h"
class TurnOnCommand:public Command{
    public:
    TurnOnCommand(Light light):Command(light){}
    void Execute();
    void UnExecute();
};

#endif