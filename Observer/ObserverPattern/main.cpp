#include "Observables/WeatherStation.h"
#include "Observers/LCDDisplay.h"
#include "Observers/HMI.h"
#include "Observers/Phone.h"

using observable::WeatherStation;
using observer::LCDDisplay;
using observer::HMI;
using observer::Phone;

int main()
{
    WeatherStation* weatherStation = new WeatherStation();
    weatherStation->setTemperature(35);
    weatherStation->setPressure(1.34);
    weatherStation->setUmidity(0.65);

    // Start to create your devices
    LCDDisplay* lcdDisplay = new LCDDisplay();
    weatherStation->add(lcdDisplay);

    HMI* hmi = new HMI();
    weatherStation->add(hmi);

    Phone* phone = new Phone();
    weatherStation->add(phone);

    // Notify the clients
    weatherStation->notify();
}
