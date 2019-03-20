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

        int available_egg; /*!< sebuah integer untuk merepresentasikan jumlah telur tersedia */
    public :

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan berpindah pada map
        TBD!
        */
        void Move();

        //! Fungsi getter
        /*!
        Digunakan untuk mendapatkan atribut pada kelas ini, yaitu available_egg oleh objek lain
        TBD!
        */
        int GetAvailableEgg();

        //! Fungsi setter
        /*!
        Digunakan untuk mengubah atribut pada kelas ini, yaitu available_egg oleh objek lain
        TBD!
        */
        void SetAvailableEgg();
        
};

#endif