#ifndef _FLYBEHAVIOR_H_
#define _FLYBEHAVIOR_H_

class FlyBehavior
{
    public:
    virtual void fly();
};

class FlyWithWings:public FlyBehavior
{
    public:
    void fly();
};

class FlyNoWay:public FlyBehavior
{
    public:
    void fly();
};

#endif