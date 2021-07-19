#ifndef LIBRARIES_COLOURPROVIDER_H
#define LIBRARIES_COLOURPROVIDER_H

#include <stdint.h>

class ColourProvider {
public:
    virtual uint32_t getColour(unsigned int index) = 0;
};

#endif //LIBRARIES_COLOURPROVIDER_H
