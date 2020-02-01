#include <iostream>
#include "instruction.h"
#include "command.h"
#include "controler.h"

int main()
{
    Light *light = new Light();
    GarageDoor *gd = new GarageDoor();
    Stero *st = new Stero();
    LightOnCommand *lightOnCommand = new LightOnCommand(light);
    LightOffCommand *lightOffCommand = new LightOffCommand(light);
    GarageDoorOpenCommand *gDOpenCommand = new GarageDoorOpenCommand(gd);
    GarageDoorCloseCommand *gDCloseCommand = new GarageDoorCloseCommand(gd);
    SteroOnWithCDCommand *stOnWithCDCommand = new SteroOnWithCDCommand(st);
    SteroOnWithRadioCommand *stOnWithRadioCommand = new SteroOnWithRadioCommand(st);
    SimpleRemoteControl *reControl = new SimpleRemoteControl();

    reControl->setCommand(lightOnCommand);
    reControl->ButtonWasPressed();
    reControl->setCommand(gDOpenCommand);
    reControl->ButtonWasPressed();

    RemoteControl *rmc = new RemoteControl();
    rmc->show();
    rmc->setCommand(0, lightOnCommand, lightOffCommand);
    rmc->setCommand(1, gDOpenCommand, gDCloseCommand);
    rmc->setCommand(2, stOnWithCDCommand, stOnWithRadioCommand);
    rmc->show();
    rmc->onButtonWasPressed(0);
    rmc->offButtonWasPressed(0);
    rmc->onButtonWasPressed(1);
    rmc->offButtonWasPressed(1);
    rmc->onButtonWasPressed(2);
    rmc->offButtonWasPressed(2);
    rmc->undoButtonWasPressed();

    system("pause");
    return 0;
}