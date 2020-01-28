#include <iostream>
#include "WeatherData.h"
#include "Display.h"

int main()
{
    WeatherData *wdata = new WeatherData();
    CurrentConditionDisplay *cc = new CurrentConditionDisplay();
    StatisticsDisplay *stat = new StatisticsDisplay();
    ForecastDisplay *fore = new ForecastDisplay();

    wdata->attachObserver(cc);
    wdata->attachObserver(stat);
    wdata->attachObserver(fore);

    wdata->setMeasurement(1.11, 2.22, 3.33);
    cc->show();
    stat->show();
    fore->show();

    wdata->setMeasurement(2.61, 7.26, 13.24);
    cc->show();
    stat->show();
    fore->show();
    system("pause");
    return 0;
}