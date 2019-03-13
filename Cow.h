/* Kelas Sapi */

#ifndef COW_H_
#define COW_H_

#include "MilkPFA.h"
#include "MeatPFA.h"

class Cow : public MilkPFA , public MeatPFA {

    private :

    public :

        /* Konstruktor */
        Cow();

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