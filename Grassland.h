#ifndef GRASSLAND_H
#define GRASSLAND_H

#include "Land.h"
#include <string>
#include <iostream>

using namespace std;

class Grassland : public Land{
    public:
        Grassland();
        string Render();
};

#endif
