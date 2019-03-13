/* Kelas Ayam */

#ifndef CHICKEN_H_
#define CHICKEN_H_

#include "EggPFA.h"
#include "MeatPFA.h"

class Chicken : public MeatPFA, public EggPFA {

    private :

    public :

        /* Konstruktor */
        Chicken();

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