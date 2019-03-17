/* Kelas Kelinci */

#ifndef RABBIT_H_
#define RABBIT_H_

#include "MilkPFA.h"
#include "MeatPFA.h"

class Rabbit : public MeatPFA {

    private :

    public :

        /* Konstruktor */
        Rabbit();

        /* Implementasi fungsi render() */
        string Render();

        /* Implementasi fungsi sounds() */
        void Sounds();

};

#endif