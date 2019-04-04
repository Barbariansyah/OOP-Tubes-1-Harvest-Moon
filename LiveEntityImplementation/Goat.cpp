#include <iostream>
using namespace std;

#include "../Goat.h"

//! Konstruktor dari kelas Goat
/*!
*/
Goat :: Goat(int _pos_x , int _pos_y)
    {
        pos_x = _pos_x;
        pos_y = _pos_y;
        availableProduct = false;
        hunger_countdown = 5;
        allowed_tiles = "Grassland";
    }

//! Implementasi dari fungsi Render()
/*!
Digunakan untuk menampilkan goat pada Map
@return karakter serta kode warna yang sesuai dengan Player.
*/
string Goat :: Render()
    {
        if(GetHungerCountdown() <= 0 && GetHungerCountdown() > -5){
            return "g";
        }
        else if (GetHungerCountdown() > 0){
            return "G";
        }
    }

//! Implementasi dari fungsi Sounds()
/*!
Digunakan untuk mengeluarkan suara goat
TBD!
*/
void Goat :: Sounds()
    {
        cout << "Baaaaaaaa :9" << endl;
    }

FarmProduct Goat :: GetKilledProduct()
    {
        GoatMeat gm;
        return gm;
    }

FarmProduct Goat :: GetProduct()
    {
        if (availableProduct)
            {
                GoatMeat gm;
                return gm;
            }
        else
        {
            throw "Milk not available";
        }
    }