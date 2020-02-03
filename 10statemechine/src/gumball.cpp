#include "gumball.h"

GumballMachine::GumballMachine(int numOfBalls)
{
    noQuarter = new NoQuarterState(this);
    hasQuarter = new HasQuarterState(this);
    soldOut = new SoldOutState(this);
    sold = new SoldState(this);
    winnerState = new WinnerState(this);
    count = numOfBalls;
    if(count > 0)
    {
        state = noQuarter;
    }
}