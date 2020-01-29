#include <iostream>
#include "Beverage.h"

int main()
{
    Espresso *es = new Espresso();
    HouseBlend *ho = new HouseBlend();
    Mocha * mo2es = new Mocha(es);
    Mocha * mo2ho = new Mocha(ho);

    std::cout<<mo2es->getDiscription()<<" "<<mo2es->cost()<<std::endl;
    std::cout<<mo2ho->getDiscription()<<" "<<mo2ho->cost()<<std::endl;

    system("pause");
    return 0;
}