#ifndef MIXER_H
#define MIXER_H

#include "Facility.h"
#include <iostream>
#include <string>

using namespace std;
/**
 * Kelas Mixer.
 * Kelas turunan dari facility,
 * Menjalankan perintah mix di samping mixer akan menampilkan menu pembuatan side product
 */
class Mixer : public Facility{
    public:
        /**
         * Konstruktor Mixer.
         * @param _x, _y adalah posisi Mixer pada Cell
         */
        Mixer(int _x, int _y);
        /**
         * Implementasi fungsi render dari kelas renderer.
         * @return karakter serta kode warna yang sesuai dengan Render.
         */ 
        string Render();
};

#endif
