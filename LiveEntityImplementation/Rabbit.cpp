#include <iostream>
using namespace std;

#include "../Rabbit.h"

//! Konstruktor dari kelas Rabbit
/*!
*/
Rabbit :: Rabbit(int _pos_x , int _pos_y)
    {
        pos_x = _pos_x;
        pos_y = _pos_y;
        hunger_countdown = 5;
    }

//! Implementasi dari fungsi Render()
/*!
Digunakan untuk menampilkan rabbit pada Map
@return karakter serta kode warna yang sesuai dengan Player.
*/
string Rabbit :: Render()
    {
        return "R";
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

FarmProduct Rabbit :: getKilledProduct()
    {
        return RabbitMeat();
    }