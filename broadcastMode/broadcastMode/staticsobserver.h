#ifndef STATICSOBSERVER_H
#define STATICSOBSERVER_H

#include <observer.h>

class StaticsObserver : public Observer
{
public:
    void update();
public:
    StaticsObserver(WeatherData &data);
    ~StaticsObserver()
    {
        // 一定要在析构函数中dettach，否则会造成空指针调用
        weatherData.dettach(shared_ptr<Observer>(this));
    }
};

#endif // STATICSOBSERVER_H
