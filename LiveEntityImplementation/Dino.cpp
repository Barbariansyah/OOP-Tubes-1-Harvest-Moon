#include <iostream>
using namespace std;

#include "../Dino.h"
#include "../Game.h"

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
            return "u";
        }
        else if (GetHungerCountdown() > 0){
            return "U";
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

void Dino :: GetProduct()
    {
        if (availableProduct)
            {
                Game::getPlayer().GetInventory().add(new DinoEgg());
            }
        else
        {
            throw "Egg not available";
        }
    }

void Dino :: GetKilledProduct()
    {
        throw "Can't be killed";
    }