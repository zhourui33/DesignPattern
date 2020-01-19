#include<iostream>
#include "Duck.h"

int main(void)
{
    FlyBehavior *flyWithWings = new FlyWithWings();
    FlyBehavior *flyNoWay = new FlyNoWay();
    MallardDuck mDuck(flyWithWings);
    mDuck.display();
    RedheadDuck redDuck(flyWithWings);
    redDuck.display();
    RubberDuck rubberDuck(flyNoWay);
    rubberDuck.display();
    DecoyDuck dDuck(flyNoWay);
    dDuck.display();
    system("pause");
}