#include<iostream>
#include"QuackBehavior.h"

void DuckQuack::Quack()
{
    std::cout<<"Quack Quack Quack"<<std::endl;
}

void MuteQuack::Quack()
{
    std::cout<<"......"<<std::endl;
}