#include "HMI.h"

#include <iostream>
#include <string.h>

namespace observer
{

HMI::HMI()
{
}

HMI::~HMI()
{
}

void HMI::update(double temperatue, double pressure, double umidity)
{
    _temperature = temperatue;
    _pressure = pressure;
    _umidity = umidity;

    showData();
}

void HMI::showData()
{
    std::cout << "This came from the industrial plant, from siemens HMI" << std::endl;
    std::cout << "Temperature: " << _temperature << std::endl;
    std::cout << "Pressure: " << _pressure << std::endl;
    std::cout << "Umidity: " << _umidity << std::endl;
    std::cout << "" << std::endl;
}

} // namespace observer
