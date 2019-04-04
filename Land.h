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
        string type; /*<! string untuk menunjukkan tipe dari land*/
    public:
        /**
         * Setter untuk menandakan adanya grass.
         * Terjadi ketika player melakukan grow
         */
        void GrowGrass();
        /**
         * Setter untuk menandakan grass tidak ada.
         * Terjadi ketika grass pada land tersebut dimakan farm animal.
         */
        void RemoveGrass(); 

        /**
         * Method getter untuk mendapatkan apakah pada sebuah land terdapat grass atau tidak
         * @return boolean apakah terdapat grass atau tidak (bernilai true or false)
         */
        bool isGrass(); 

        /**
         * Method getter untuk mendapatkan tipe dari sebuah Land
         * @return string yang mengindikasikan tipe Barn, Coop, atau Grassland
         */
        string getType();
};

#endif
