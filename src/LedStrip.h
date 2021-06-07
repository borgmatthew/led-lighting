#ifndef LIBRARIES_LEDSTRIP_H
#define LIBRARIES_LEDSTRIP_H

#include <stdint.h>

class LedStrip {
public:
    virtual void setPixelColour(unsigned int offset, uint32_t colour) = 0;
    virtual void update() = 0;
    virtual void clear() = 0;
};

#endif //LIBRARIES_LEDSTRIP_H
