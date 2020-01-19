#ifndef _DUCK_H_
#define _DUCK_H_

#include "FlyBehavior.h"

class Duck
{
    public:
    Duck(FlyBehavior *fb);
    void swim();
    virtual void display() = 0;
    void performfly();
    void setFlyBehavior(FlyBehavior *fb);
    private:
    FlyBehavior* fb_;
};

class MallardDuck:public Duck
{
    public:
    MallardDuck(FlyBehavior *fb);
    void display();
};
class RedheadDuck:public Duck
{
    public:
    RedheadDuck(FlyBehavior *fb);
    void display();
};
class RubberDuck:public Duck
{
    public:
    RubberDuck(FlyBehavior *fb);
    void display();
};
class DecoyDuck:public Duck
{
    public:
    DecoyDuck(FlyBehavior *fb);
    void display();
};
#endif