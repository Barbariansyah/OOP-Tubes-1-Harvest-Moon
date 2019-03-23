#include <iostream>
using namespace std;

#include "..\EggPFA.h"

//! Implementasi dari fungsi Move()
/*!
Digunakan untuk berpindah pada map
*/
void EggPFA :: Move()
    {
        // TBD
        // Menunggu ukuran Coop sehingga angka bisa di random pada range tersebut
    }

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