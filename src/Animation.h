#ifndef LIBRARIES_ANIMATION_H
#define LIBRARIES_ANIMATION_H

#include <Arduino.h>
#include "ColourProvider.h"

class Animation {
public:
    virtual void turnOn(ColourProvider* colourProvider) = 0;
    virtual void turnOff(ColourProvider* colourProvider) = 0;
    virtual void loop(ColourProvider* colourProvider) = 0;
    virtual void resetAnimation() = 0;
};

#endif //LIBRARIES_ANIMATION_H
