#ifndef _GUMBALL_H_
#define _GUMBALL_H_

#include <iostream>
#include <random>
#include <chrono>

class State
{
    public:
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
};

class GumballMachine
{
    public:
    GumballMachine(int numOfBalls);
    void insertQuarter()
    {
        state->insertQuarter();
    }
    void ejectQuarter()
    {
        state->ejectQuarter();
    }
    void turnCrank()
    {
        state->turnCrank();
        state->dispense();
    }
    void releaseBall()
    {
        std::cout<<"A gumball comes rolling out the slot"<<std::endl;
        if(count != 0) count--;
    }
    void showState()
    {
        std::cout<<"[GumballMachine] Inventory:["<<count<<"] gumballs"<<std::endl;
        std::cout<<"Machine is waiting for quarter..."<<std::endl;
    }
    void setState(State *newstate){state = newstate;}
    State* getSoldOutState(){return soldOut;}
    State* getNoQuarterState(){return noQuarter;}
    State* getHasQuarterState(){return hasQuarter;}
    State* getSoldState(){return sold;}
    State* getWinnerState(){return winnerState;}
    int getCount(){return count;}
    private:
    State *soldOut;
    State *noQuarter;
    State *hasQuarter;
    State *sold;
    State *winnerState;
    State *state;
    int count = 0;
};


class SoldState : public State
{
    public:
    SoldState(GumballMachine* gumballMachine)
    {
        gbMachine = gumballMachine;
    }
    void insertQuarter()
    {
        std::cout<<"Please wait, we're already giving you a gumball"<<std::endl;
    }
    void ejectQuarter()
    {
        std::cout<<"Sorry, you already turned the crank"<<std::endl;
    }
    void turnCrank()
    {
        std::cout<<"Turning twice doesn't get you another gumball!!"<<std::endl;
    }
    void dispense()
    {
        gbMachine->releaseBall();
        if(gbMachine->getCount() == 0)
        {
            std::cout<<"Oops, out of gumballs!!"<<std::endl;
            gbMachine->setState(gbMachine->getSoldOutState());
        }
        else
        {
            gbMachine->setState(gbMachine->getNoQuarterState());
        }
    }
    private:
    GumballMachine* gbMachine;
};

class SoldOutState:public State
{
    public:
    SoldOutState(GumballMachine* gumballMachine)
    {
        gbMachine = gumballMachine;
    }
    void insertQuarter()
    {
        std::cout<<"You can't insert another quarter, the mechine is sold out"<<std::endl;
    }
    void ejectQuarter()
    {
        std::cout<<"You can't eject, you haven't inserted a quarter yet"<<std::endl;
    }
    void turnCrank()
    {
        std::cout<<"You turned but there's no gumballs"<<std::endl;
    }
    void dispense()
    {
        std::cout<<"No gumball dispensed"<<std::endl;
    }
    private:
    GumballMachine* gbMachine;
};

class NoQuarterState:public State
{
    public:
    NoQuarterState(GumballMachine* gumballMachine)
    {
        gbMachine = gumballMachine;
    }
    void insertQuarter()
    {
        std::cout<<"You insert a quarter"<<std::endl;
        gbMachine->setState(gbMachine->getHasQuarterState());
    }
    void ejectQuarter()
    {
        std::cout<<"You haven't inserted a quarter"<<std::endl;
    }
    void turnCrank()
    {
        std::cout<<"You turned but there's no quarter"<<std::endl;
    }
    void dispense()
    {
        std::cout<<"You need to pay first"<<std::endl;
    }
    private:
    GumballMachine* gbMachine;
};

class HasQuarterState:public State
{
    public:
    HasQuarterState(GumballMachine* gumballMachine)
    {
        gbMachine = gumballMachine;
    }
    void insertQuarter()
    {
        std::cout<<"You can't insert another quarter"<<std::endl;
    }
    void ejectQuarter()
    {
        std::cout<<"Quarter returned"<<std::endl;
        gbMachine->setState(gbMachine->getNoQuarterState());
    }
    void turnCrank()
    {
        std::default_random_engine e(std::chrono::high_resolution_clock::now().time_since_epoch().count());
        std::uniform_int_distribution<unsigned> u(0, 9);
        std::cout<<"You turned..."<<std::endl;
        if((u(e) == 0) && (gbMachine->getCount() > 1))
        {
            gbMachine->setState(gbMachine->getWinnerState());
        }
        else
        {
            gbMachine->setState(gbMachine->getSoldState());
        }
    }
    void dispense()
    {
        std::cout<<"No gumball dispensed"<<std::endl;
    }
    private:
    GumballMachine* gbMachine;
};

class WinnerState:public State
{
    public:
    WinnerState(GumballMachine* gumballMachine)
    {
        gbMachine = gumballMachine;
    }
    void insertQuarter()
    {
        std::cout<<"WinnerState can't insert"<<std::endl;
    }
    void ejectQuarter()
    {
        std::cout<<"WinnerState can't eject"<<std::endl;
    }
    void turnCrank()
    {
        std::cout<<"WinnerState can't turnCrank"<<std::endl;
    }
    void dispense()
    {
        std::cout<<"YOU'RE A WINNER! You got two gumballs for your quarter"<<std::endl;
        gbMachine->releaseBall();
        if(gbMachine->getCount() == 0)
        {
            gbMachine->setState(gbMachine->getSoldOutState());
        }
        else
        {
            gbMachine->releaseBall();
            if(gbMachine->getCount() > 0)
            {
                gbMachine->setState(gbMachine->getNoQuarterState());
            }
            else
            {
                std::cout<<"Oops, out of gumballs"<<std::endl;
                gbMachine->setState(gbMachine->getSoldOutState());
            }
            
        }
    }
    private:
    GumballMachine* gbMachine;
};

#endif