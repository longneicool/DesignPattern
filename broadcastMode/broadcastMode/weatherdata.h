#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include <iostream>
#include <memory>
#include <list>

using std::list;
using std::shared_ptr;

class Observer;
class WeatherData
{
public:
    WeatherData();
    ~WeatherData()
    {

    }

public:
    void attach(shared_ptr<Observer> o);
    void dettach(shared_ptr<Observer> o);
    void getTemperature()
    {
        std::cout << "temperature is 80'c" <<std::endl;
    }
    void getHumidity()
    {
        std::cout << "Humidity is wet" << std::endl;
    }
    void getPressure()
    {
        std::cout << "Pressure is 80pa" << std::endl;
    }

    void measurementChanged();
private:
    list<shared_ptr<Observer>> observerList;
};

#endif // WEATHERDATA_H
