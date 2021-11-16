QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        Observables/WeatherStation.cpp \
        Observers/HMI.cpp \
        Observers/LCDDisplay.cpp \
        Observers/ObserverReference.cpp \
        Observers/Phone.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Observables/IWeatherStation.h \
    Observables/WeatherStation.h \
    Observers/HMI.h \
    Observers/IDevice.h \
    Observers/IDisplay.h \
    Observers/LCDDisplay.h \
    Observers/ObserverReference.h \
    Observers/Phone.h
