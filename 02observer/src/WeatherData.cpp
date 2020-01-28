#include <list>
#include "WeatherData.h"

void WeatherData::attachObserver(Observer *ob)
{
    obs.push_back(ob);
}

void WeatherData::detachObserver(Observer *ob)
{
    obs.remove(ob);
}

void WeatherData::notifyObserver()
{
    std::list<Observer*>::iterator iob;
    for(iob = obs.begin(); iob != obs.end(); iob++)
    {
        (*iob)->update(temprature, humidity, pressure);
    }
}

void WeatherData::changeMeasurement()
{
    notifyObserver();
}

void WeatherData::setMeasurement(float temp, float humi, float pres)
{
    temprature = temp;
    humidity = humi;
    pressure = pres;
    changeMeasurement();
}