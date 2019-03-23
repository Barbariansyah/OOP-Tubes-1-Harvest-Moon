#include <iostream>
using namespace std;

#include "..\MilkPFA.h"

//! Implementasi dari fungsi Move()
/*!
Digunakan untuk berpindah pada map
*/
void MilkPFA :: Move()
    {
        // TBD
        // Menunggu ukuran Grassland sehingga angka bisa di random pada range tersebut
    }

//! Fungsi getter
/*!
Digunakan untuk mendapatkan atribut pada kelas ini,yaitu available milk oleh objek lain
*/
int MilkPFA :: GetAvailableMilk()
    {
        return available_milk;
    }

//! Fungsi getter
/*!
Digunakan untuk mengubah atribut pada kelas ini, yaitu available_milk oleh objek lain
*/
void MilkPFA :: SetAvailableMilk(int _available_milk)
    {
        available_milk = _available_milk;
    }