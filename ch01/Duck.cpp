#include<iostream>
#include"Duck.h"


Duck::Duck(FlyBehavior *fb) : fb_(fb){}

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

MallardDuck::MallardDuck(FlyBehavior *fb) : Duck(fb){}
RedheadDuck::RedheadDuck(FlyBehavior *fb) : Duck(fb){}
RubberDuck::RubberDuck(FlyBehavior *fb) : Duck(fb){}
DecoyDuck::DecoyDuck(FlyBehavior *fb) : Duck(fb){}

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

