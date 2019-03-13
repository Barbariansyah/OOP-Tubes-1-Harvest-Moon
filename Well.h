#ifndef WELL_H
#define WELL_H

#include "Facility.h"
#include <iostream>
#include <string>

using namespace std;

class Well : public Facility{
    public:
        Well();    
        string Render();
   
};

#endif
