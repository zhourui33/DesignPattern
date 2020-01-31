#ifndef _PIZZASTORE_H_
#define _PIZZASTORE_H_

#include "Pizza.h"

class PizzaStore
{
    public:
    virtual Pizza* createPizza(string type) = 0;
    Pizza* OderPizza(string type)
    {    
        Pizza *pizza = createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
};

class NYPizzaStore : public PizzaStore
{
    public:
    Pizza* createPizza(string type)
    {
        Pizza *pizza;

        if(type == "cheese")
        {
            pizza = new NYCheesePizza();
        }else if(type == "pepperoni")
        {
            pizza = new NYPepperoniPizza();
        }
        else if(type == "clam")
        {
            pizza = new NYClamPizza();
        }
        else
        {
            pizza = new Pizza();
        }
        return pizza;
    }
};


#endif