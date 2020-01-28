#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include "Observer.h"

class Display
{
    public:
    virtual void show() = 0; 
};

class CurrentConditionDisplay : public Display, public Observer
{
    public:
    void show() override;
    void update(float temp, float humi, float pres) override;

    private:
    float temperature;
    float humidity;
    float pressure;
};

class StatisticsDisplay : public Display, public Observer
{
    public:
    void show() override;
    void update(float temp, float humi, float pres) override;

    private:
    float avgTemp;
    float avgHumi;
    float avgPres;
};

class ForecastDisplay : public Display, public Observer
{
    public:
    void show() override;
    void update(float temp, float humi, float pres) override;

    private:
    float fTemp;
    float fHumi;
    float fPres;
};

#endif