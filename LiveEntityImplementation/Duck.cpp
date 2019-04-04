#include <iostream>
using namespace std;

#include "../Duck.h"

//! Konstruktor dari kelas duck
/*!
TBD!
*/
Duck :: Duck(int _pos_x , int _pos_y)
    {
        pos_x = _pos_x;
        pos_y = _pos_y;
        availableProduct = false;
        hunger_countdown = 5;
        allowed_tiles = "Coop";
    }

//! Implementasi dari fungsi Render()
/*!
Digunakan untuk menampilkan duck pada Map
@return karakter serta kode warna yang sesuai dengan Duck.
*/
string Duck :: Render()
    {
        if(GetHungerCountdown() <= 0 && GetHungerCountdown() > -5){
            return "d";
        }
        else if (GetHungerCountdown() > 0){
            return "D";
        }
    }

//! Implementasi dari fungsi Sounds()
/*!
Digunakan untuk mengeluarkan suara duck
TBD!
*/
void Duck :: Sounds()
    {
        cout << "Wkwkwkwkwk :D" << endl;
    }

FarmProduct Duck :: GetProduct()
    {
        if (availableProduct)
            {
                DuckEgg de;
                return de;
            }
        else
        {
            throw "Egg not available";
        }
    }

FarmProduct Duck :: GetKilledProduct()
    {
        DuckEgg de;
        return de;
    }