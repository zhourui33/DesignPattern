#ifndef _FLYBEHAVIOR_H_
#define _FLYBEHAVIOR_H_

class FlyBehavior
{
    public:
    virtual void fly() = 0;
};

class FlyWithWings:public FlyBehavior
{
    public:
    void fly() override;
};

class FlyNoWay:public FlyBehavior
{
    public:
    void fly() override;
};

class FlyWithRocket:public FlyBehavior
{
    public:
    void fly() override;
};

#endif