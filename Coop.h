#ifndef COOP_H
#define COOP_H

#include "Land.h"
#include <iostream>
#include <string>

using namespace std;
/**
 * Kelas Coop, kelas riil turunan dari kelas Land.
 * Digunakan sebagai tempat farm animal penghasil telur
 */
class Coop : public Land{
    public:
        /**
         * Konstruktor Coop.
         */
        Coop();
        /**
         * Implementasi fungsi render dari kelas renderer.
         * @return karakter serta kode warna yang sesuai dengan Coop.
         */
        string Render();
};

#endif
