#ifndef MIXER_H
#define MIXER_H

#include "Facility.h"
#include <iostream>
#include <string>

using namespace std;

class Mixer : public Facility{
    public:
        string Render();
   
};

#endif