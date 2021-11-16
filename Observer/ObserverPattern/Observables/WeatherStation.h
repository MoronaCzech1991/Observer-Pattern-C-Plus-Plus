#ifndef OBSERVABLES_WHETERSTATION_H
#define OBSERVABLES_WHETERSTATION_H

#include "Observables/IWeatherStation.h"

#include <vector>

using namespace std;

namespace observable
{
using observable::IWeatherStation;
using observer::IDevice;

class WeatherStation : public IWeatherStation
{
public:
    virtual ~WeatherStation();

    virtual void add(IDevice* device) override;
    virtual void notify() override;

    void setTemperature(const double temperature);
    void setPressure(const double pressure);
    void setUmidity(const double umidity);

private:
    double _temperature;
    double _pressure;
    double _umidity;

    vector<IDevice*> _devices;
};

} // namespace observable

#endif // OBSERVABLES_WHETERSTATION_H
