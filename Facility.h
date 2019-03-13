#ifndef FACILITY_H
#define FACILITY_H

#include "cell.h"
#include <iostream>

using namespace std;

class Facility : public Cell, public Entity{
   public:
      Facility();
};

#endif
