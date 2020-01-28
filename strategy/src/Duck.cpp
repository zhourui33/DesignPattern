#include<iostream>
#include"Duck.h"


Duck::Duck(FlyBehavior *fb, QuackBehavior *qb) : fb_(fb),qb_(qb)
{}

void Duck::swim()
{
    std::cout<<"duck swimming"<<std::endl;
}

void Duck::setFlyBehavior(FlyBehavior *fb)
{
    fb_ = fb;
}

void Duck::performfly()
{
    fb_->fly();
}

void Duck::setQuackBehavior(QuackBehavior *qb)
{
    qb_ = qb;
}

void Duck::performquack()
{
    qb_->Quack();
}

MallardDuck::MallardDuck(FlyBehavior *fb, QuackBehavior *qb) : Duck(fb, qb){}
RedheadDuck::RedheadDuck(FlyBehavior *fb, QuackBehavior *qb) : Duck(fb, qb){}
RubberDuck::RubberDuck(FlyBehavior *fb, QuackBehavior *qb) : Duck(fb, qb){}
DecoyDuck::DecoyDuck(FlyBehavior *fb, QuackBehavior *qb) : Duck(fb, qb){}

void MallardDuck::display()
{
    std::cout<<"I'm a MallardDuck"<<std::endl;
}
void RedheadDuck::display()
{
    std::cout<<"I'm a RedheadDuck"<<std::endl;
}
void RubberDuck::display()
{
    std::cout<<"I'm a RubberDuck"<<std::endl;
}
void DecoyDuck::display()
{
    std::cout<<"I'm a DecoyDuck"<<std::endl;
}
