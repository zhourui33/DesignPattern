#include <iostream>
#include <string>
#include "Pizza.h"
#include "PizzaStore.h"

int main()
{
    NYPizzaStore *ps = new NYPizzaStore();
    Pizza *ch = ps->OderPizza("cheese");
    Pizza *cl = ps->OderPizza("clam");

    ch->eat();
    cl->eat();
    system("pause");
    return 0;
}