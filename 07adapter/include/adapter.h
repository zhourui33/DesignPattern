#ifndef _ADAPTER_H_
#define _ADAPTER_H_

#include <iostream>

class Duck
{
    public:
    virtual void Quack() = 0;
    virtual void Fly() = 0;
};

class MallardDuck:public Duck
{
    public:
    void Quack()
    {
        std::cout<<"quack"<<std::endl;
    }
    void Fly()
    {
        std::cout<<"I'm flying"<<std::endl;
    }
};

class Turkey
{
    public:
    virtual void gobble() = 0;
    virtual void fly() = 0;
};

class WildTurkey:public Turkey
{
    public:
    void gobble()
    {
        std::cout<<"gobble"<<std::endl;
    }
    void fly()
    {
        std::cout<<"I'm flying a short distance"<<std::endl;
    }
};

class TurkeyAdapter:public Duck
{
    public:
    TurkeyAdapter(Turkey *turkey)
    {
        turkey_ = turkey;
    }
    void Quack()
    {
        turkey_->gobble();
    }
    void Fly()
    {
        for(int i = 0; i < 5; i++)
        {
            turkey_->fly();
        }
    }
    private:
    Turkey *turkey_;
};

#endif