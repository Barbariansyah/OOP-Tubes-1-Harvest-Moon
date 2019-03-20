//! Kelas EggPFA
/*!
    Kelas Egg Producing Farm Animal, akan di inherit dengan
    kelas hewan-hewan penghasil telur. 
    Berisi implementasi fungsi Move()
*/

#ifndef EGGPFA_H_
#define EGGPFA_H_

#include "FarmAnimal.h"

class EggPFA : public FarmAnimal {

    protected :

    public :

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan berpindah pada map
        TBD!
        */
        void Move();
        
};

#endif