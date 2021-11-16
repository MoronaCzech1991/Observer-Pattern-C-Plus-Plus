#ifndef OBSERVERS_IDISPLAY_H
#define OBSERVERS_IDISPLAY_H

namespace observer
{

class IDisplay
{
public:
    virtual ~IDisplay() = default;
    virtual void showData() = 0;
};

} // namesapce observer

#endif // OBSERVERS_IDISPLAY_H
