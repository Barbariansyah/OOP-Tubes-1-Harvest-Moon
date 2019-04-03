#ifndef FARM_ANIMAL_H_
#define FARM_ANIMAL_H_

#include "LiveEntity.h"
#include "AllProduct.h"

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
        virtual void Sounds();

        //! Fungsi Getter GetHungerCountdown()
        /*!
        Getter untuk mendapatkan countdown lapar animal
        @return jumlah tick kelaparan, positif berarti kenyang, nol lapar, -5 mati
        */
        int GetHungerCountdown();

        //! Fungsi move()
        /*!
        Digunakan untuk berpindah secara random
        */
        void Move();

        //! Fungsi Getter getProduct()
        /*!
        Getter untuk mendapatkan product dari hewan yang tidak dibunuh
        @return product dari tiap hewan
        */
        virtual FarmProduct GetProduct();

        
        //! Fungsi Getter getKilledProduct()
        /*!
        Getter untuk mendapatkan product dari hewan yang dibunuh
        @return product dari hewan yang dibunuh
        */
        virtual FarmProduct GetKilledProduct();

};

#endif