#ifndef ENTITY_H_
#define ENTITY_H_

#include "Renderable.h"

//! Kelas Entity
/*!
    Merupakan Abstract Base Class untuk merepresentasikan entitas yang ada pada permainan ini
    memiliki atribut posisi X dan posisi Y
*/
class Entity : public Renderable {

    protected :

        int pos_x; /*!< sebuah integer untuk merepresentasikan posisi x entitas */
        int pos_y; /*!< sebuah integer untuk merepresentasikan posisi y entitas */

    public :

        //! Pure virtual getter x
        /*!
        Digunakan untuk mendapatkan atribut pos_x oleh objek lain
        @return X;
        */
        virtual int GetX();

        //! Pure virtual getter y
        /*!
        Digunakan untuk mendapatkan atribut pos_y oleh objek lain
        @return Y;
        */
        virtual int GetY();

};
#endif
   