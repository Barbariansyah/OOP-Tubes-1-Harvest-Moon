#include <iostream>
using namespace std;

#include "../Cow.h"

//! Konstruktor dari kelas cow
/*!
*/
Cow :: Cow(int _pos_x , int _pos_y)
    {
        pos_x = _pos_x;
        pos_y = _pos_y;
        available_milk = 0;
        hunger_countdown = 5;
    }

//! Implementasi dari fungsi Render()
/*!
Digunakan untuk menampilkan cow pada Map
@return karakter serta kode warna yang sesuai dengan Cow.
*/
string Cow :: Render()
    {
        return "CO";
    }

//! Implementasi dari fungsi Sounds()
/*!
Digunakan untuk mengeluarkan suara cow
TBD!
*/
void Cow :: Sounds()
    {
        cout << "Moooooo" << endl;
    }