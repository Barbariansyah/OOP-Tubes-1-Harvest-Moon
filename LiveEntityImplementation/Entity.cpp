#include <iostream>
using namespace std;

#include "../Entity.h"

//! Fungsi getter x
/*!
Digunakan untuk mendapatkan atribut pos_x oleh objek lain
@return X;
*/
int Entity :: GetX()
    {
        return pos_x;
    }

//! Fungsi getter y
/*!
Digunakan untuk mendapatkan atribut pos_y oleh objek lain
@return Y;
*/
int Entity :: GetY()
    {
        return pos_y;
    }