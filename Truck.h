#ifndef TRUCK_H
#define TRUCK_H

#include "Facility.h"
#include <iostream>
#include <string>

using namespace std;
/**
 * Kelas Truck.
 * Kelas turunan dari facility,
 * Interaksi dengan truck menyebabkan semua barang hasil ternak pada inventory terjual
 */
class Truck : public Facility{
    protected:
        int AwayCounter = 0; /*!< Penghitung mundur serta penanda keberadaan truck, positif berarti truck di luar dan tidak tersedia, nol berarti truck tersedia*/
    
    public:
        /**
         * Konstruktor Truck.
         * @param _x, _y adalah posisi Truck pada cell
         */
        Truck(int _x, int _y);
        /**
         * Method tick pada Truck.
         * Method ini dapat dipanggil oleh Tick pada Game dan memodifikasi AwayCounter jika nilainya positif.
         */
        void TickTruck();

        /**
         * Method getter untuk keberadaan truck.
         * @return apakah truck tersedia.
         */
        bool GetAvailable();
        /**
         * Implementasi fungsi render dari kelas renderer.
         * @return karakter serta kode warna yang sesuai dengan Truck.
         */
        string Render();
};

#endif
