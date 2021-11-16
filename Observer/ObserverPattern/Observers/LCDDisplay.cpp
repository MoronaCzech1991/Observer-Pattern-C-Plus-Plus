#include "LCDDisplay.h"

#include <iostream>
#include <string.h>

namespace observer
{

LCDDisplay::LCDDisplay()
{
}

LCDDisplay::~LCDDisplay()
{
}

void LCDDisplay::update(double temperatue, double pressure, double umidity)
{
    _temperature = temperatue;
    _pressure = pressure;
    _umidity = umidity;

    showData();
}

void LCDDisplay::showData()
{
    std::cout << "This is a LCD display" << std::endl;
    std::cout << "Temperature: " << _temperature << std::endl;
    std::cout << "Pressure: " << _pressure << std::endl;
    std::cout << "Umidity: " << _umidity << std::endl;
    std::cout << "" << std::endl;
}

} // namespace observer
