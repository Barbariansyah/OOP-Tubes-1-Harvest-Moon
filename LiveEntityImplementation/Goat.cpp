#include <iostream>
using namespace std;

#include "../Goat.h"
#include "../Game.h"

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

void Goat :: GetKilledProduct()
    {
        Game::getPlayer().GetInventory().add(new GoatMeat());
    }

void Goat :: GetProduct()
    {
        if (availableProduct)
            {
                Game::getPlayer().GetInventory().add(new GoatMilk());
            }
        else
        {
            throw "Milk not available";
        }
    }