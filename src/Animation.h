#ifndef LIBRARIES_ANIMATION_H
#define LIBRARIES_ANIMATION_H

#include <Arduino.h>

class Animation {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void loop() = 0;
    virtual void resetAnimation() = 0;
};

#endif //LIBRARIES_ANIMATION_H
