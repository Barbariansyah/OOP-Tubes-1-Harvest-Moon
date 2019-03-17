/* Kelas EggPFA, kelas untuk hewan yang menghasilkan telur */

#ifndef EGGPFA_H_
#define EGGPFA_H_

#include "LiveEntity.h"

class EggPFA : public LiveEntity {

    protected :

    public :

        /* Implementasi fungsi move() */
        void Move();

        /* Implementasi fungsi eat() */
        void Eat();
        
};

#endif