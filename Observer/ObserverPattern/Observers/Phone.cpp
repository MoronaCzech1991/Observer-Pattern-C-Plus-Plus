#include "Phone.h"

#include <iostream>
#include <string.h>

namespace observer
{

Phone::Phone()
{
}

Phone::~Phone()
{
}

void Phone::update(double temperatue, double pressure, double umidity)
{
    _temperature = temperatue;
    _pressure = pressure;
    _umidity = umidity;

    showData();
}

void Phone::showData()
{
    std::cout << "This is a IPhone" << std::endl;
    std::cout << "Temperature: " << _temperature << std::endl;
    std::cout << "Pressure: " << _pressure << std::endl;
    std::cout << "Umidity: " << _umidity << std::endl;
    std::cout << "" << std::endl;
}

} // namespace observer
