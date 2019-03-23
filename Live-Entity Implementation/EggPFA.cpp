#include <iostream>
using namespace std;

#include "..\EggPFA.h"

//! Fungsi getter
/*!
Digunakan untuk mendapatkan atribut pada kelas ini, yaitu available_egg oleh objek lain
TBD!
*/
int EggPFA :: GetAvailableEgg()
    {
        return available_egg;
    }

//! Fungsi setter
/*!
Digunakan untuk mengubah atribut pada kelas ini, yaitu available_egg oleh objek lain
TBD!
*/
void EggPFA :: SetAvailableEgg(int _available_egg)
    {
        available_egg = _available_egg;
    }