#ifndef BARN_H
#define BARN_H

#include "Land.h"
#include <iostream>
#include <string>

using namespace std;
/**
 * Kelas Barn, kelas riil turunan dari kelas Land.
 * Digunakan sebagai tempat farm animal penghasil daging
 */
class Barn : public Land{
    public:
        /**
         * Konstruktor Barn.
         */
        Barn();
        /**
         * Implementasi fungsi render dari kelas renderer.
         * @return karakter serta kode warna yang sesuai dengan Barn.
         */
        string Render(); 
};

#endif
