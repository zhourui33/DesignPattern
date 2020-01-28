#ifndef _QUACKBEHAVIOR_H_
#define _QUACKBEHAVIOR_H_

class QuackBehavior
{
    public:
    virtual void Quack() = 0;
};

class DuckQuack:public QuackBehavior
{
    public:
    void Quack() override;
};

class MuteQuack:public QuackBehavior
{
    public:
    void Quack() override;
};

#endif