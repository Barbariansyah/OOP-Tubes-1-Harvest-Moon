#include <iostream>
using namespace std;

#include "../Dino.h"

//! Konstruktor dari kelas Dino
/*!
*/
Dino :: Dino(int _pos_x , int _pos_y)
    {
        pos_x = _pos_x;
        pos_y = _pos_y;
        availableProduct = false;
        hunger_countdown = 5;
        allowed_tiles = "Coop";
    }

//! Implementasi dari fungsi Render()
/*!
Digunakan untuk menampilkan Dino pada Map
@return karakter serta kode warna yang sesuai dengan Dino.
*/
string Dino :: Render()
    {
        if(GetHungerCountdown() <= 0 && GetHungerCountdown() > -5){
            return "ḋ";
        }
        else if (GetHungerCountdown() > 0){
            return "Ḋ";
        }
    }

//! Implementasi dari fungsi Sounds()
/*!
Digunakan untuk mengeluarkan suara dino
*/
void Dino :: Sounds()
    {
        cout << "Rawrrrr :<" << endl;
    }

FarmProduct Dino :: GetProduct()
    {
        if (availableProduct)
            {
                DinoEgg de; 
                return de;
            }
        else
        {
            throw "Egg not available";
        }
    }

FarmProduct Dino :: GetKilledProduct()
    {
        throw "Can't be killed";
    }