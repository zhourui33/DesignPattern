#include <iostream>
#include "singleton.h"

Singleton* Singleton::instance = nullptr;

int main()
{
    Singleton *sg = Singleton::getInstance();
    sg->show();
    sg->setName("changed name");
    sg->show();
    Singleton *sgc = Singleton::getInstance();
    sgc->show();
    system("pause");
    return 0;
}