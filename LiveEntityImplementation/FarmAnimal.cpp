#include <iostream>
using namespace std;

#include "../FarmAnimal.h"
#include "../Game.h"

//! Implementasi fungsi eat()
/*!
Digunakan untuk memakan grass yang ada pada cell
*/
void FarmAnimal :: Eat()
    {
        if (hunger_countdown <= 0 && Game::getLand(pos_x,pos_y).isGrass()){
            Game::getLand(pos_x,pos_y).RemoveGrass();
            hunger_countdown = 5;
            availableProduct = true;
        }
    }

//! Fungsi untuk mengurangi hunger countdown
/*!
Fungsi untuk mengurangi hunger countdown
*/
void FarmAnimal :: ReduceHungerCountdown()
    {
        hunger_countdown--;
    }

//! Fungsi Getter GetHungerCountdown()
/*!
Getter untuk mendapatkan countdown lapar animal
@return jumlah tick kelaparan, positif berarti kenyang, nol lapar, -5 mati
*/
int FarmAnimal :: GetHungerCountdown()
    {
        return hunger_countdown;
    }

//! Fungsi move()
/*!
Digunakan untuk berpindah secara random
*/
void FarmAnimal :: Move()
    {
        int x = rand() % 4;

        Game::setEntity(pos_x,pos_y,nullptr);

        if( x == 0 ) {
            if (Game :: isValidPosition(pos_x-1,pos_y))
                if (!Game :: isValidEntity(pos_x-1,pos_y) && Game::getLand(pos_x-1,pos_y).getType() == allowed_tiles)
                    pos_x = pos_x-1;
        }
        else if( x == 1 ) {
            if (Game :: isValidPosition(pos_x+1,pos_y))
                if (!Game :: isValidEntity(pos_x+1,pos_y) && Game::getLand(pos_x+1,pos_y).getType() == allowed_tiles)
                    pos_x = pos_x+1;
        }
        else if( x == 2 ) {
            if (Game :: isValidPosition(pos_x,pos_y-1))
                if (!Game :: isValidEntity(pos_x,pos_y-1) && Game::getLand(pos_x,pos_y-1).getType() == allowed_tiles)
                    pos_y = pos_y-1;
        }
        else {
            if (Game :: isValidPosition(pos_x,pos_y+1))
                if (!Game :: isValidEntity(pos_x,pos_y+1) && Game::getLand(pos_x,pos_y+1).getType() == allowed_tiles)
                    pos_y = pos_y+1;        
        }

        Game::setEntity(pos_x,pos_y,this);
    }
