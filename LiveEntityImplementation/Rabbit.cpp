#include <iostream>
using namespace std;

#include "../Rabbit.h"
#include "../Game.h"

//! Konstruktor dari kelas Rabbit
/*!
*/
Rabbit :: Rabbit(int _pos_x , int _pos_y)
    {
        pos_x = _pos_x;
        pos_y = _pos_y;
        hunger_countdown = 5;
        allowed_tiles = "Barn";
    }

//! Implementasi dari fungsi Render()
/*!
Digunakan untuk menampilkan rabbit pada Map
@return karakter serta kode warna yang sesuai dengan Player.
*/
string Rabbit :: Render()
    {
        if(GetHungerCountdown() <= 0 && GetHungerCountdown() > -5){
            return "r";
        }
        else if (GetHungerCountdown() > 0){
            return "R";
        }
    }

//! Implementasi dari fungsi Sounds()
/*!
Digunakan untuk mengeluarkan suara rabbit
TBD!
*/
void Rabbit :: Sounds()
    {
        cout << "Chill :3" << endl;
    }

void Rabbit :: GetKilledProduct()
    {
        Game::getPlayer().GetInventory().add(new RabbitMeat());
    }

void Rabbit :: GetProduct()
    {
        throw "Can't be interracted";
    }