#ifndef COOP_H
#define COOP_H

#include "Land.h"
#include <iostream>
#include <string>

using namespace std;

class Coop : public Land{
    public:
        Coop();
        string Render();
   
};

#endif
