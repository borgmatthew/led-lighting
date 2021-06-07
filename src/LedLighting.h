#ifndef LIBRARIES_LEDLIGHTING_H
#define LIBRARIES_LEDLIGHTING_H

#include "Animation.h"

class LedLighting {
public:
    LedLighting(unsigned long inactivityPeriod, Animation* animation);
    void onMotionDetected();
    void loop();
    void reset();
    void setAnimation(Animation *animation);
    unsigned long getInactivityPeriod();
    void setInactivityPeriod(unsigned long inactivityPeriod);

private:
    enum AnimationState {
        TURNING_OFF = 0,
        TURNING_ON = 1
    };

    unsigned long _inactivityPeriod;
    unsigned long _lastMotion = 0;
    Animation* _animation;
    AnimationState _state;
};

#endif //LIBRARIES_LEDLIGHTING_H
