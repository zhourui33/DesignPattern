#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include "Observer.h"
#include "WeatherData.h"

class Display
{
    public:
    virtual void show() = 0; 
};

class CurrentConditionDisplay : public Display, public Observer
{
    public:
    CurrentConditionDisplay(WeatherData *wd) : weatherData(wd)
    {
        wd->attachObserver(this);
    }
    void show() override;
    void update(float temp, float humi, float pres) override;

    private:
    float temperature;
    float humidity;
    float pressure;
    WeatherData *weatherData;
};

class StatisticsDisplay : public Display, public Observer
{
    public:
    StatisticsDisplay(WeatherData *wd) : weatherData(wd)
    {
        wd->attachObserver(this);
    }
    void show() override;
    void update(float temp, float humi, float pres) override;

    private:
    float avgTemp;
    float avgHumi;
    float avgPres;
    WeatherData *weatherData;
};

class ForecastDisplay : public Display, public Observer
{
    public:
    ForecastDisplay(WeatherData *wd) : weatherData(wd)
    {
        wd->attachObserver(this);
    }
    void show() override;
    void update(float temp, float humi, float pres) override;

    private:
    float fTemp;
    float fHumi;
    float fPres;
    WeatherData *weatherData;
};

#endif