#ifndef OBSERVABLES_IWEATHERSTATION_H
#define OBSERVABLES_IWEATHERSTATION_H

#include "Observers/IDevice.h"

namespace observable
{
using observer::IDevice;

class IWeatherStation
{
public:
    virtual void add(IDevice* device) = 0;
    virtual void notify() = 0;
};

} // namespace observable

#endif // OBSERVABLES_IWEATHERSTATION_H
