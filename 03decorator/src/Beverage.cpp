#include "Beverage.h"

float Espresso::cost()
{
    return 1.99;
}

float HouseBlend::cost()
{
    return 0.89;
}

float Mocha::cost()
{
    return beverage->cost() + 0.2;
}