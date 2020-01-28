#include <iostream>
#include "Display.h"

void CurrentConditionDisplay::show()
{
    std::cout<<"***CurrentCondition***"<<std::endl;
    std::cout<<"temperature : "<<temperature<<std::endl;
    std::cout<<"humidity : "<<humidity<<std::endl;
    std::cout<<"pressure : "<<pressure<<std::endl;
}

void CurrentConditionDisplay::update(float temp, float humi, float pres)
{
    temperature = temp;
    humidity = humi;
    pressure = pres;
}

void StatisticsDisplay::show()
{
    std::cout<<"***Statistics***"<<std::endl;
    std::cout<<"avgTemp : "<<avgTemp<<std::endl;
    std::cout<<"avgHumi : "<<avgHumi<<std::endl;
    std::cout<<"avgPres : "<<avgPres<<std::endl;
}

void StatisticsDisplay::update(float temp, float humi, float pres)
{
    avgTemp = (temp + avgTemp) / 2;
    avgHumi = (humi + avgHumi) / 2;
    avgPres = (pres + avgPres) / 2;
}

void ForecastDisplay::show()
{
    std::cout<<"***Forecast***"<<std::endl;
    std::cout<<"forecastTemp : "<<fTemp<<std::endl;
    std::cout<<"forecastHumi : "<<fHumi<<std::endl;
    std::cout<<"forecastPres : "<<fPres<<std::endl;
}

void ForecastDisplay::update(float temp, float humi, float pres)
{
    fTemp = (temp + 3.14);
    fHumi = (humi + 3.14);
    fPres = (pres + 3.14);
}