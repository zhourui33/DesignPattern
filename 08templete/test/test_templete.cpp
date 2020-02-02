#include <iostream>
#include "templete.h"

int main()
{
    Coffee *coffee = new Coffee();
    Tea *tea = new Tea();

    coffee->prepareRecipe();
    tea->prepareRecipe();
    system("pause");
    return 0;
}