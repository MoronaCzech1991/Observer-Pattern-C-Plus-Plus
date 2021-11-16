#ifndef OBSERVERS_IDEVICE_H
#define OBSERVERS_IDEVICE_H

namespace observer
{

class IDevice
{
public:
    virtual ~IDevice() = default;
    virtual void update(double temperatue, double pressure, double umidity) = 0;
};

} // namespace observer

#endif // OBSERVERS_IDEVICE_H
