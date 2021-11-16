#include "Observables/WeatherStation.h"

#include "Observers/IDevice.h"

namespace observable
{

WeatherStation::~WeatherStation()
{
    for (IDevice* device : _devices)
    {
        delete device;
    }
}

void WeatherStation::add(IDevice* device)
{
    _devices.push_back(device);
}

void WeatherStation::notify()
{
    for (IDevice* device : _devices)
    {
        device->update(_temperature, _pressure, _umidity);
    }
}

void WeatherStation::setTemperature(const double temperature)
{
    _temperature = temperature;
}

void WeatherStation::setPressure(const double pressure)
{
    _pressure = pressure;
}

void WeatherStation::setUmidity(const double umidity)
{
    _umidity= umidity;
}

} // namespace observable
