#include "LedLighting.h"

LedLighting::LedLighting(unsigned long inactivityPeriod, Animation* animation, ColourProvider* colourProvider) {
    this -> _inactivityPeriod = inactivityPeriod;
    this -> _animation = animation;
    this -> _colourProvider = colourProvider;
    _state = AnimationState::TURNING_OFF;
}

void LedLighting::onMotionDetected() {
    this -> _lastMotion = millis();
}

void LedLighting::loop() {
    if (_lastMotion != 0) {
        unsigned long now = millis();
        unsigned long elapsed_time = now - _lastMotion;
        if (elapsed_time > _inactivityPeriod && _state != AnimationState::TURNING_OFF) {
            this->_animation -> turnOff(_colourProvider);
            _state = AnimationState::TURNING_OFF;
        } else if (elapsed_time < _inactivityPeriod && _state != AnimationState::TURNING_ON) {
            this -> _animation -> turnOn(_colourProvider);
            _state = AnimationState::TURNING_ON;
        }

        this -> _animation -> loop(_colourProvider);
    }
}

void LedLighting::reset() {
    _animation -> resetAnimation();
    _state = AnimationState::TURNING_OFF;
}

void LedLighting::setAnimation(Animation * animation) {
    this -> _animation = animation;
}

void LedLighting::setInactivityPeriod(unsigned long inactivityPeriod) {
    this -> _inactivityPeriod = inactivityPeriod;
}

unsigned long LedLighting::getInactivityPeriod() {
    return _inactivityPeriod;
}

void LedLighting::setColourProvider(ColourProvider *colourProvider) {
    this -> _colourProvider = colourProvider;
}