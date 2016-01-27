#include "staticsobserver.h"
#include <memory>

StaticsObserver::StaticsObserver(WeatherData &data) : Observer(data)
{
    data.attach(shared_ptr<Observer>(this));
}

void StaticsObserver::update()
{
    weatherData.getTemperature();
    weatherData.getHumidity();
    weatherData.getPressure();
}
