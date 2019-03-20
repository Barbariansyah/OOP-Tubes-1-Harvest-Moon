//! Kelas MeatPFA
/*!
    Kelas Meat Producing Farm Animal, akan di inherit dengan
    kelas hewan-hewan penghasil daging. 
    Berisi implementasi fungsi Move()
*/

#ifndef MEATPFA_H_
#define MEATPFA_H_

#include "FarmAnimal.h"

class MeatPFA : public FarmAnimal {

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