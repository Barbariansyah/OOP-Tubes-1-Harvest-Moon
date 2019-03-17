/* Kelas Bebek */

#ifndef DUCK_H_
#define DUCK_H_

#include "EggPFA.h"
#include "MeatPFA.h"

class Duck : public EggPFA , public MeatPFA {

    private :

    public :

        /* Konstruktor */
        Duck();

        /* Implementasi fungsi render() */
        string Render();

        /* Implementasi fungsi sounds() */
        void Sounds();

};

#endif