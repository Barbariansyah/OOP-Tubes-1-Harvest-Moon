#ifndef COOP_H
#define COOP_H

#include "Land.h"
#include <iostream>
#include <string>

using namespace std;

class Coop : public Barn{
    public:
        string Render();
   
};

#endif