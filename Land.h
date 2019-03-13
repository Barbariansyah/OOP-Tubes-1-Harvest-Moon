#ifndef LAND_H
#define LAND_H

#include "cell.h"
#include <iostream>

using namespace std;

class Land : public Cell{
    protected:
        Land();
        bool grass;
};

#endif
