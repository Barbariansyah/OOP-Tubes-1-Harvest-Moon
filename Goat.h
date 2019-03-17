/* Kelas Kambing */

#ifndef GOAT_H_
#define GOAT_H_

#include "MilkPFA.h"
#include "MeatPFA.h"

class Goat : public MilkPFA , public MeatPFA {

    private :

    public :

        /* Konstruktor */
        Goat();

        /* Implementasi fungsi render() */
        string Render();

        /* Implementasi fungsi sounds() */
        void Sounds();

};

#endif