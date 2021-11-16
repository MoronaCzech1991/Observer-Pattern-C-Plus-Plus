#ifndef OBSERVERS_PHONE_H
#define OBSERVERS_PHONE_H

#include "IDevice.h"
#include "IDisplay.h"
#include "ObserverReference.h"

namespace observer
{

class Phone : public ObserverReference, public IDevice, public IDisplay
{

public:
    Phone();
    ~Phone();
    virtual void update(double temperatue, double pressure, double umidity) override;
    virtual void showData() override;
};

} // namepsace observer

#endif // OBSERVERS_PHONE_H
