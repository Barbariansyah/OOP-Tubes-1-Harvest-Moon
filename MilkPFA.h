#ifndef MILKPFA_H_
#define MILKPFA_H_

#include "FarmAnimal.h"

//! Kelas MilkPFA
/*!
    Kelas Milk Producing Farm Animal, akan di inherit dengan
    kelas hewan-hewan penghasil susu. 
    Berisi implementasi fungsi Move()
*/
class MilkPFA : public FarmAnimal {

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