#ifndef OBSERVERS_OBERVSERREFERENCE_H
#define OBSERVERS_OBERVSERREFERENCE_H

namespace observer
{

class ObserverReference
{
public:
    ObserverReference();

protected:
    double _temperature = 0;
    double _pressure = 0;
    double _umidity = 0;
};

} // namespace observer

#endif // OBSERVERS_OBERVSERREFERENCE_H
