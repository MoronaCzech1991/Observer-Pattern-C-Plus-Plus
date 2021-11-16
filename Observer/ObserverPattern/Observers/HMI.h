#ifndef OBSERVERS_HMI_H
#define OBSERVERS_HMI_H

#include "IDevice.h"
#include "IDisplay.h"
#include "ObserverReference.h"

namespace observer
{

class HMI : public ObserverReference, public IDevice, public IDisplay
{

public:
    HMI();
    ~HMI();
    virtual void update(double temperatue, double pressure, double umidity) override;
    virtual void showData() override;
};

} // namespace observer

#endif // OBSERVERS_HMI_H
