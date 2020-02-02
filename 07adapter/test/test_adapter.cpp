#include <iostream>
#include "adapter.h"

static void DuckTest(Duck *duck);

int main()
{
    MallardDuck *md = new MallardDuck();
    WildTurkey *wt = new WildTurkey();
    TurkeyAdapter *turkeyAdapter = new TurkeyAdapter(wt);

    DuckTest(md);
    DuckTest(turkeyAdapter);

    system("pause");
    return 0;
}

static void DuckTest(Duck *duck)
{
    duck->Quack();
    duck->Fly();
}