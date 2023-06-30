#include "TurnOnCommand.h"

void TurnOnCommand::Execute(){
    light->TurnOn();
}
void TurnOnCommand::UnExecute(){
    light->TurnOff();
}