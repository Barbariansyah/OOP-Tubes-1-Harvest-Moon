#ifndef WELL_H
#define WELL_H

#include "Facility.h"
#include <iostream>
#include <string>

using namespace std;
/**
 * Kelas Well.
 * Kelas turunan dari facility,
 * Interaksi dengan truck menyebabkan water container pada player terisi penuh
 */
class Well : public Facility{
    public:
        /**
         * Konstruktor Truck.
         * @param _x, _y adalah posisi Well pada Cell
         */
        Well(int _x, int _y);
        /**
         * Implementasi fungsi render dari kelas renderer.
         * @return karakter serta kode warna yang sesuai dengan Truck.
         */    
        string Render();
};

#endif
