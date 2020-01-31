#ifndef _PIZZA_H_
#define _PIZZA_H_

#include <string>
using namespace std;

class Pizza
{
    public:
    void prepare()
    {
        cout<<"prerare:"<<name<<endl;
    }
    void bake()
    {
        cout<<"baking:"<<name<<endl;
    }
    void cut()
    {
        cout<<"cutting:"<<name<<endl;
    }
    void box()
    {
        cout<<"boxing:"<<name<<endl;
    }
    void eat()
    {
        cout<<"***I'm eatting "<<name<<"***"<<endl;
    }
    protected:
    string name;
};

class CheesePizza:public Pizza
{
    public:
    CheesePizza()
    {
        name = "CheesePizza";
    }
};

class PepperoniPizza:public Pizza
{
    public:
    PepperoniPizza()
    {
        name = "PepperoniPizza";
    }
};

class ClamPizza:public Pizza
{
    public:
    ClamPizza()
    {
        name = "ClamPizza";
    }
};

class NYCheesePizza:public Pizza
{
    public:
    NYCheesePizza()
    {
        name = "NYCheesePizza";
    }
};

class NYPepperoniPizza:public Pizza
{
    public:
    NYPepperoniPizza()
    {
        name = "NYPepperoniPizza";
    }
};

class NYClamPizza:public Pizza
{
    public:
    NYClamPizza()
    {
        name = "NYClamPizza";
    }
};

#endif