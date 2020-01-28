#include<iostream>
#include "Duck.h"

int main(void)
{
    FlyBehavior *flyWithWings = new FlyWithWings();
    FlyBehavior *flyNoWay = new FlyNoWay();
    FlyBehavior *flyWithRocket = new FlyWithRocket();
    QuackBehavior *duckQuack = new DuckQuack();
    QuackBehavior *muteQuack = new MuteQuack();

    MallardDuck mDuck(flyWithWings, duckQuack);
    mDuck.display();
    mDuck.performfly();
    mDuck.performquack();
    RedheadDuck redDuck(flyWithWings, duckQuack);
    redDuck.display();
    redDuck.performfly();
    redDuck.performquack();
    RubberDuck rubberDuck(flyNoWay, muteQuack);
    rubberDuck.display();
    rubberDuck.performfly();
    rubberDuck.performquack();
    DecoyDuck dDuck(flyNoWay, muteQuack);
    dDuck.display();
    dDuck.performfly();
    dDuck.setFlyBehavior(flyWithRocket);
    dDuck.performfly();
    dDuck.performquack();
    system("pause");
}