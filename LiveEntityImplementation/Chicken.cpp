#include <iostream>
using namespace std;

#include "../Chicken.h"

//! Konstruktor dari kelas Chicken
/*!
*/
Chicken :: Chicken(int _pos_x , int _pos_y)
    {
        pos_x = _pos_x;
        pos_y = _pos_y;
        availableProduct = false;
        hunger_countdown = 5;
        allowed_tiles = "Coop";
    }

//! Implementasi dari fungsi Render()
/*!
Digunakan untuk menampilkan Chicken pada Map
@return karakter serta kode warna yang sesuai dengan Chicken.
*/
string Chicken :: Render()
    {
        if(GetHungerCountdown() <= 0 && GetHungerCountdown() > -6){
            return "c";
        }
        else if (GetHungerCountdown() > 0){
            return "C";
        }
    }

//! Implementasi dari fungsi Sounds()
/*!
Digunakan untuk mengeluarkan suara chicken
TBD!
*/
void Chicken :: Sounds()
    {
        cout << "Kukuruyukkkk :v" << endl;
    }

FarmProduct Chicken :: GetProduct()
    {
        cout << "Made it here" << endl;
        if (availableProduct)
            {
                ChickenEgg ck;
                cout << "Made it here 2" << endl;
                return ck;
            }
        else
        {
            throw "Egg not available";
        }
    }

FarmProduct Chicken :: GetKilledProduct()
    {
        ChickenEgg ck;
        return ck;
    } 