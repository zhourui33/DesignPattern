#include<iostream>
#include"FlyBehavior.h"

void FlyWithWings::fly()
{
    std::cout<<"fly with wings"<<std::endl;
}

void FlyNoWay::fly()
{
    std::cout<<"fly no way"<<std::endl;
}

// int main(void)
// {
//     FlyBehavior *flyWithWings = new FlyWithWings();
//     FlyBehavior *flyNoWay = new FlyNoWay();

//     flyWithWings->fly();
//     flyNoWay->fly();
// }