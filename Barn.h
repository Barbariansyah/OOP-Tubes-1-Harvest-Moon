#ifndef BARN_H
#define BARN_H

#include "Land.h"
#include <iostream>
#include <string>

using namespace std;

class Barn : public Land{
    public:
        Barn();
        string Render();
   
};

#endif
