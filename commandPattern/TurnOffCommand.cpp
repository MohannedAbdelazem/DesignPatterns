#include "TurnOffCommand.h"


void TurnOffCommand::Execute(){
    light->TurnOff();
}

void TurnOffCommand::UnExecute(){
    light->TurnOn();
}
