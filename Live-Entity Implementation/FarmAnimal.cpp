#include <iostream>
using namespace std;

#include "..\FarmAnimal.h"

//! Implementasi fungsi eat()
/*!
Digunakan untuk memakan grass yang ada pada cell
*/
void FarmAnimal :: Eat()
    {
        // TBD
        // Menunggu fungsi untuk mendapatkan sekarang berada di cell mana
        /* Jika ada rumput, maka bisa makan, dan hunger_countdown akan menjadi 5
           serta product_available akan menjadi true */
    }

//! Fungsi Getter GetHungerCountdown()
/*!
Getter untuk mendapatkan countdown lapar animal
@return jumlah tick kelaparan, positif berarti kenyang, nol lapar, -5 mati
*/
int FarmAnimal :: GetHungerCountdown()
    {
        return hunger_countdown;
    }

void FarmAnimal :: Move()
    {
        pos_x = 0;
        pos_y = 0;
    }