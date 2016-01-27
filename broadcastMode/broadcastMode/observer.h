#ifndef OBSERVER_H
#define OBSERVER_H

#include <weatherdata.h>

class Observer
{
public:
    Observer(WeatherData &w);
    ~Observer()
    {

    }

public:
    virtual void update()
    {
        return;
    }

protected:
    WeatherData &weatherData;
};

#endif // OBSERVER_H
