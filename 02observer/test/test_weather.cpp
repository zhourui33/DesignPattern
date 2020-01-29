#include <iostream>
#include "WeatherData.h"
#include "Display.h"

int main()
{
    WeatherData *wdata = new WeatherData(84, 68, 31.2);
    CurrentConditionDisplay *cc = new CurrentConditionDisplay(wdata);
    StatisticsDisplay *stat = new StatisticsDisplay(wdata);
    ForecastDisplay *fore = new ForecastDisplay(wdata);

    wdata->setMeasurement(80, 65, 30.4);
    std::cout<<"detach current"<<std::endl;
    wdata->detachObserver(cc);
    wdata->setMeasurement(82, 70, 29.2);
    wdata->detachObserver(stat);
    wdata->setMeasurement(78, 90, 29.2);

    system("pause");
    return 0;
}