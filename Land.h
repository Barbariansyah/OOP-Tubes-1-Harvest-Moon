#ifndef LAND_H
#define LAND_H

#include "Cell.h"
#include <iostream>

using namespace std;
/**
 * Abstract Base Class Cell, turunan dari Kelas Cell.
 * Kelas yang menjadi tempat dari farm animal yang sesuai,
 * dapat ditumbuhkan grass jika dilakukkan penyiraman
 */
class Land : public Cell{
    protected:
        bool grass; /*<! Boolean apakah sebuah tile ditumbuhi grass*/
    public:
        /**
         * Konstruktor Land.
         */
        Land();
        /**
         * Setter untuk menandakan adanya grass.
         * Terjadi ketika player melakukan grow
         */
        void growGrass();
        /**
         * Setter untuk menandakan grass tidak ada.
         * Terjadi ketika grass pada land tersebut dimakan farm animal.
         */
        void removeGrass();
};

#endif
