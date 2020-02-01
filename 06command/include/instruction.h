#ifndef _INSTRUCTION_H_
#define _INSTRUCTION_H_

#include <iostream>

class Light
{
    public:
    void on(){std::cout<<"Light On"<<std::endl;}
    void off(){std::cout<<"Light Off"<<std::endl;}
};

class GarageDoor
{
    public:
    void up(){std::cout<<"Garage Door Up"<<std::endl;}
    void down(){std::cout<<"Garage Door Down"<<std::endl;}
    void stop(){std::cout<<"Garage Door Stop"<<std::endl;}
    void lightOn(){std::cout<<"Garage Door Light On"<<std::endl;}
    void lightOff(){std::cout<<"Garage Door Light Off"<<std::endl;}
};

class Stero
{
    public:
    void on(){std::cout<<"Stero On"<<std::endl;}
    void off(){std::cout<<"Stero Off"<<std::endl;}
    void setCD(){std::cout<<"Stero setCD"<<std::endl;}
    void setDVD(){std::cout<<"Stero setDVD"<<std::endl;}
    void setRadio(){std::cout<<"Stero setRadio"<<std::endl;}
    void setVolume(){std::cout<<"Stero setVolume"<<std::endl;}
};

#endif