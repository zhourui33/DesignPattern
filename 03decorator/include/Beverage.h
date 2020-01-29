#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#include <string>

class Beverage
{
    public:
    Beverage():description("Unknown Beverage"){}
    std::string getDiscription(){return description;}
    virtual float cost() = 0;

    std::string description;
};

class Condiment : public Beverage
{
};

class Espresso : public Beverage
{
    public:
    Espresso()
    {
        description = "Espresso";
    }
    float cost() override;
};

class HouseBlend : public Beverage
{
    public:
    HouseBlend()
    {
        description = "HouseBlend Coffee";
    }
    float cost() override;
};

class Mocha : public Beverage
{
    public:
    Mocha(Beverage *bv)
    {
        beverage = bv;
    }
    std::string getDiscription(){return beverage->description + ", Mocha";}
    float cost() override;
    private:
    Beverage *beverage;
};

#endif