/* Kelas Dino */

#ifndef DINO_H_
#define DINO_H_

#include "EggPFA.h"
#include "MeatPFA.h"

class Dino : public EggPFA , public MeatPFA {

    private :

    public :

        /* Konstruktor */
        Dino();

        /* Implementasi fungsi render() */
        string Render();

        /* Implementasi fungsi move() */
        void Move();

        /* Implementasi fungsi eat() */
        void Eat();

        /* Implementasi fungsi sounds() */
        void Sounds();

};

#endif