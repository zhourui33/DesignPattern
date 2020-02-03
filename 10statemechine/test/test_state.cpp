#include <iostream>
#include "gumball.h"

int main()
{
    GumballMachine *gbm = new GumballMachine(100);
    for(int i = 0; i < 10; i++)
    {
        gbm->showState();
        gbm->insertQuarter();
        gbm->turnCrank();
    }

    system("pause");
    return 0;
}