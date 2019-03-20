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

        int available_milk; /*!< sebuah integer untuk merepresentasikan jumlah susu tersedia */

    public :

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan berpindah pada map
        TBD!
        */
        void Move();

        //! Fungsi getter
        /*!
        Digunakan untuk mendapatkan atribut pada kelas ini,yaitu available milk oleh objek lain
        TBD!
        */
        int GetAvailableMilk();

        //! Fungsi getter
        /*!
        Digunakan untuk mengubah atribut pada kelas ini, yaitu available_egg oleh objek lain
        TBD!
        */
        void SetAvailableMilk();
};

#endif