/* Kelas FarmAnimal, merupakan Abstract Base Class 
   untuk Animal yang ada pada permainan */

#ifndef FARM_ANIMAL_H_
#define FARM_ANIMAL_H_

#include "LiveEntity.h"

class FarmAnimal : public LiveEntity {

    protected :

        int hunger_countdown;
        bool product_available;

    public :

        /* Fungsi eat(), digunakan untuk memakan GRASS */
        virtual void Eat();

        /* Fungsi sounds(), mengeluarkan suara tiap hewan */
        virtual void Sounds() = 0;

        /* Getter untuk hungerCountdown */
        int GetHungerCountdown();

        /* Getter untuk isProductAvailable */
        bool IsProductAvailable();

};

#endif