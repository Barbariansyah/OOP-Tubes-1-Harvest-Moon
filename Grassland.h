#ifndef GRASSLAND_H
#define GRASSLAND_H

#include "Land.h"
#include <string>
#include <iostream>

using namespace std;
/**
 * Kelas Grassland, kelas riil turunan dari kelas Land.
 * Digunakan sebagai tempat farm animal penghasil susu
 */
class Grassland : public Land{
    public:
        /**
         * Konstruktor Grassland.
         */
        Grassland();
        /**
         * Implementasi fungsi render dari kelas renderer.
         * @return karakter serta kode warna yang sesuai dengan Grassland.
         */
        string Render(); 
};

#endif
