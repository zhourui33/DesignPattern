#ifndef _CONTROLER_H_
#define _CONTROLER_H_

#include <iostream>
#include "command.h"

#define MAX_SLOT_NUM (7)

class SimpleRemoteControl
{
    public:
    void setCommand(Command *command)
    {
        slot_ = command;
    }
    void ButtonWasPressed()
    {
        slot_->execute();
    }
    private:
    Command *slot_;
};

class RemoteControl
{
    public:
    RemoteControl()
    {
        for(int i = 0; i < MAX_SLOT_NUM; i++)
        {
            onCommands[i] = new NoCommand();
            offCommands[i] = new NoCommand();
        }
    }
    void setCommand(int slot, Command *onCommand, Command *offCommand)
    {
        onCommands[slot] = onCommand;
        offCommands[slot] = offCommand;
    }
    void onButtonWasPressed(int slot)
    {
        onCommands[slot]->execute();
        undoCommand = onCommands[slot];
    }
    void offButtonWasPressed(int slot)
    {
        offCommands[slot]->execute();
        undoCommand = offCommands[slot];
    }
    void undoButtonWasPressed()
    {
        undoCommand->undo();
    }
    void show()
    {
        std::cout<<"------Remote Control------"<<std::endl;
        for(int i = 0; i < MAX_SLOT_NUM; i++)
        {
            std::cout<<"[SLOT "<<i<<"] "<<onCommands[i]->cmdName<<" "<<offCommands[i]->cmdName<<std::endl;
        }
    }
    private:
    Command* onCommands[MAX_SLOT_NUM];
    Command* offCommands[MAX_SLOT_NUM];
    Command* undoCommand;
};
#endif