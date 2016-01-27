#include <iostream>
#include "weatherdata.h"
#include "staticsobserver.h"
using namespace std;

int main()
{
    WeatherData w;
    StaticsObserver sObserver(w);
    StaticsObserver s2(w);
    w.measurementChanged();

    return 0;
}

