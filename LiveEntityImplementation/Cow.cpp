#include <iostream>
using namespace std;

#include "../Cow.h"
#include "../Game.h"

//! Konstruktor dari kelas cow
/*!
*/
Cow :: Cow(int _pos_x , int _pos_y)
    {
        pos_x = _pos_x;
        pos_y = _pos_y;
        availableProduct = false;
        hunger_countdown = 5;
        allowed_tiles = "Grassland";
    }

//! Implementasi dari fungsi Render()
/*!
Digunakan untuk menampilkan cow pada Map
@return karakter serta kode warna yang sesuai dengan Cow.
*/
string Cow :: Render()
    {
        if(GetHungerCountdown() <= 0 && GetHungerCountdown() > -5){
            return "ċ";
        }
        else if (GetHungerCountdown() > 0){
            return "S";
        }
    }

//! Implementasi dari fungsi Sounds()
/*!
Digunakan untuk mengeluarkan suara cow
TBD!
*/
void Cow :: Sounds()
    {
        cout << "Moooooo :o" << endl;
    }

void Cow :: GetProduct()
    {
        if (availableProduct)
            {
                Game::getPlayer().GetInventory().add(new CowMilk());
            }
        else
        {
            throw "Milk not available";
        }
    }

void Cow :: GetKilledProduct()
    {
        Game::getPlayer().GetInventory().add(new CowMeat());
    }