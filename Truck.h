#ifndef TRUCK_H
#define TRUCK_H

#include "Facility.h"
#include <iostream>
#include <string>

using namespace std;

class Truck : public Facility{
    protected:
        int AwayCounter = 5;
    
    public:
        string Render();
   
};

#endif