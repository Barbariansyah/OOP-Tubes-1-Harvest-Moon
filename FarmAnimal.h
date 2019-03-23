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
        int allowed_tiles;

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

        void Move();

};

#endif