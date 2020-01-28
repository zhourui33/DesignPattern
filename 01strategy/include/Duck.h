#ifndef _DUCK_H_
#define _DUCK_H_

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
    public:
    Duck(FlyBehavior *fb, QuackBehavior *qb);
    void swim();
    virtual void display() = 0;
    void performfly();
    void setFlyBehavior(FlyBehavior *fb);
    void performquack();
    void setQuackBehavior(QuackBehavior *qb);
    private:
    FlyBehavior* fb_;
    QuackBehavior *qb_;
};

class MallardDuck:public Duck
{
    public:
    MallardDuck(FlyBehavior *fb, QuackBehavior *qb);
    void display();
};
class RedheadDuck:public Duck
{
    public:
    RedheadDuck(FlyBehavior *fb, QuackBehavior *qb);
    void display();
};
class RubberDuck:public Duck
{
    public:
    RubberDuck(FlyBehavior *fb, QuackBehavior *qb);
    void display();
};
class DecoyDuck:public Duck
{
    public:
    DecoyDuck(FlyBehavior *fb, QuackBehavior *qb);
    void display();
};
#endif