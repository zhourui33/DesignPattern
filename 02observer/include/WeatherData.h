#ifndef _WEATHERDATA_H_
#define _WEATHERDATA_H_

#include <list>
#include "Subject.h"
#include "Observer.h"

class WeatherData : public Subject
{
    public:
    WeatherData():temprature(0),humidity(0),pressure(0){}
    WeatherData(float temp, float humi, float pres):temprature(temp),humidity(humi),pressure(pres){}
    void attachObserver(Observer *ob) override;
    void detachObserver(Observer *ob) override;
    void notifyObserver() override;
    void changeMeasurement();
    void setMeasurement(float temp, float humi, float pres);
    private:
    std::list<Observer*> obs;
    float temprature = 0;
    float humidity = 0;
    float pressure = 0;
};

#endif