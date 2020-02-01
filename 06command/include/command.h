#ifndef _COMMAND_H_
#define _COMMAND_H_

#include <string>
#include "instruction.h"

class Command
{
    public:
    std::string cmdName;
    virtual void execute() = 0;
    virtual void undo() = 0;
};

class NoCommand:public Command
{
    public:
    NoCommand()
    {
        cmdName = "NoCommand";
    }
    void execute(){}
    void undo(){}
};

class LightOnCommand:public Command
{
    public:
    LightOnCommand(Light *light)
    {
        light_ = light;
        cmdName = "LightOnCommand";
    }
    void execute()
    {
        light_->on();
    }
    void undo()
    {
        light_->off();
    }
    private:
    Light *light_;
};

class LightOffCommand:public Command
{
    public:
    LightOffCommand(Light *light)
    {
        light_ = light;
        cmdName = "LightOffCommand";
    }
    void execute()
    {
        light_->off();
    }
    void undo()
    {
        light_->on();
    }
    private:
    Light *light_;
};

class GarageDoorOpenCommand:public Command
{
    public:
    GarageDoorOpenCommand(GarageDoor *garageDoor)
    {
        garageDoor_ = garageDoor;
        cmdName = "GarageDoorOpenCommand";
    }
    void execute()
    {
        garageDoor_->up();
    }
    void undo()
    {
        garageDoor_->down();
    }
    private:
    GarageDoor *garageDoor_;
};

class GarageDoorCloseCommand:public Command
{
    public:
    GarageDoorCloseCommand(GarageDoor *garageDoor)
    {
        garageDoor_ = garageDoor;
        cmdName = "GarageDoorCloseCommand";
    }
    void execute()
    {
        garageDoor_->down();
    }
    void undo()
    {
        garageDoor_->up();
    }
    private:
    GarageDoor *garageDoor_;
};

class SteroOnWithCDCommand:public Command
{
    public:
    SteroOnWithCDCommand(Stero *stero)
    {
        stero_ = stero;
        cmdName = "SteroOnWithCDCommand";
    }
    void execute()
    {
        stero_->on();
        stero_->setCD();
        stero_->setVolume();
    }
    void undo()
    {
        stero_->setVolume();
        stero_->setCD();
        stero_->off();
    }
    private:
    Stero *stero_;
};

class SteroOnWithRadioCommand:public Command
{
    public:
    SteroOnWithRadioCommand(Stero *stero)
    {
        stero_ = stero;
        cmdName = "SteroOnWithVideoCommand";
    }
    void execute()
    {
        stero_->on();
        stero_->setRadio();
        stero_->setVolume();
    }
    void undo()
    {
        stero_->setVolume();
        stero_->setRadio();
        stero_->off();
    }
    private:
    Stero *stero_;
};

#endif