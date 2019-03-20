#ifndef FACILITY_H
#define FACILITY_H

#include "Cell.h"
#include "Entity.h"
#include <iostream>

using namespace std;
/**
 * Base Class Facility.
 * Kelas turunan dari entity sehingga dapat terjadi interaksi dengan player,
 * turunan dari cell sehingga dapat ditempatkan bersamaan dengan land tanpa dapat ditumbuhi grass
 */
class Facility : public Cell, public Entity{
   public:
      /**
      * Konstruktor Facility.
      */
      Facility();
};

#endif
