#ifndef OBSERVERS_LCDDISPLAY_H
#define OBSERVERS_LCDDISPLAY_H

#include "IDevice.h"
#include "IDisplay.h"
#include "ObserverReference.h"

namespace observer
{

class LCDDisplay : public ObserverReference, public IDevice, public IDisplay
{

public:
    LCDDisplay();
    ~LCDDisplay();
    virtual void update(double temperatue, double pressure, double umidity) override;
    virtual void showData() override;
};

} // namepsace observer

#endif // OBSERVERS_LCDDISPLAY_H
