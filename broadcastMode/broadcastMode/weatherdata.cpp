#include "weatherdata.h"
#include "observer.h"

WeatherData::WeatherData()
{

}

void WeatherData::attach(shared_ptr<Observer> o)
{
    observerList.push_back(o);
}

void WeatherData::dettach(shared_ptr<Observer> o)
{
    list<shared_ptr<Observer>>::iterator it = observerList.begin();
    while(it != observerList.end())
    {
        if(*it == o)
        {
            observerList.erase(it);
            return;
        }
        it++;
    }
}

void WeatherData::measurementChanged()
{
    list<shared_ptr<Observer>>::iterator it = observerList.begin();
    while(it != observerList.end())
    {
        (*it)->update();
        it++;
    }
}

