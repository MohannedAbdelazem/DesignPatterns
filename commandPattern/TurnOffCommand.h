#ifndef __TurnOffCommand__
#define __TurnOffCommand__
#include "Icommand.h"
class TurnOffCommand: public Command{
    public:
    TurnOffCommand(Light light): Command(light){}
    void Execute();
    void UnExecute();
};

#endif