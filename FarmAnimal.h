#ifndef FARM_ANIMAL_H_
#define FARM_ANIMAL_H_

#include "LiveEntity.h"

//! Kelas Farm Animal
/*!
    Sebuah Abstract Base Class(ABC) sebagai representasi binatang yang ada pada permainan
    Akan diinherit dengan semua animal yang ada di permainan
    Berisi fungsi Eat(), pure virtual Sounds(), GetHungerCountdown(), dan IsProductAvailable()
*/
class FarmAnimal : public LiveEntity {

    protected :

        int hunger_countdown;  /*!< sebuah integer untuk merepresentasikan countdown lapar */
        bool product_available;  /*!< sebuah boolean untuk merepresentasikan apakah animal memiliki product untuk diambil atau tidak*/

    public :

        //! Fungsi eat()
        /*!
        Digunakan untuk memakan grass yang ada pada cell
        TBD!
        */
        void Eat();

        //! Pure Virtual Sounds()
        /*!
        Digunakan untuk menampilkan suara pada hewan
        Pure virtual karena akan diimplementasikan di kelas riil
        TBD!
        */
        virtual void Sounds() = 0;

        //! Fungsi Getter GetHungerCountdown()
        /*!
        Getter untuk mendapatkan countdown lapar animal
        @return jumlah tick kelaparan, positif berarti kenyang, nol lapar, -5 mati
        */
        int GetHungerCountdown();

        //! Fungsi Getter IsProductAvailable()
        /*!
        Getter untuk mendapatkan apakah animal memiliki product yang tersedia
        TBD!
        */
        bool IsProductAvailable();

};

#endif