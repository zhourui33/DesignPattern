#include<iostream>
#include "Duck.h"

int main(void)
{
    FlyBehavior *flyWithWings = new FlyWithWings();
    FlyBehavior *flyNoWay = new FlyNoWay();
    FlyBehavior *flyWithRocket = new FlyWithRocket();
    MallardDuck mDuck(flyWithWings);
    mDuck.display();
    mDuck.performfly();
    RedheadDuck redDuck(flyWithWings);
    redDuck.display();
    redDuck.performfly();
    RubberDuck rubberDuck(flyNoWay);
    rubberDuck.display();
    rubberDuck.performfly();
    DecoyDuck dDuck(flyNoWay);
    dDuck.display();
    dDuck.performfly();
    dDuck.setFlyBehavior(flyWithRocket);
    dDuck.performfly();
    system("pause");
}