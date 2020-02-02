#pragma once

#include <iostream>

class CaffeineBeverage
{
    public:
    void prepareRecipe()
    {
        boilWater();
        brew();
        pourInCup();
        addCondiment();
    }
    void boilWater()
    {
        std::cout<<"Boil Water"<<std::endl;
    }
    virtual void brew() = 0;
    void pourInCup()
    {
        std::cout<<"Pour In Cup"<<std::endl;
    }
    virtual void addCondiment() = 0;
    void hook() {}
};

class Coffee:public CaffeineBeverage
{
    public:
    void brew()
    {
        brewCoffeeGrinds();
    }
    void addCondiment()
    {
        addSugarAndMilk();
    }
    void brewCoffeeGrinds()
    {
        std::cout<<"Brew Coffee Grinds"<<std::endl;
    }
    void addSugarAndMilk()
    {
        std::cout<<"Add Sugar And Milk"<<std::endl;
    }
};

class Tea:public CaffeineBeverage
{
    public:
    void brew()
    {
        steepTeaBag();
    }
    void addCondiment()
    {
        addLemon();
    }
    void steepTeaBag()
    {
        std::cout<<"Steep Tea Bag"<<std::endl;
    }
    void addLemon()
    {
        std::cout<<"Add Lemon"<<std::endl;
    }
};