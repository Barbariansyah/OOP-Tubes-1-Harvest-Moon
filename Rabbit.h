//! Kelas Cow
/*!
  Sebuah kelas riil dari FarmAnimal, yaitu kelas cow
  Berisi sebuah konstruktor, implementasi fungsi Render(), dan implementasi fungsi Sounds()
*/

#ifndef RABBIT_H_
#define RABBIT_H_

#include "MeatPFA.h"

class Rabbit : public MeatPFA {

    private :

    public :

        //! Konstruktor dari kelas cow
        /*!
        TBD!
        */
        Rabbit();

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan cow pada Map
        TBD!
        */
        string Render();

        //! Implementasi dari fungsi Sounds()
        /*!
        Digunakan untuk mengeluarkan suara cow
        TBD!
        */
        void Sounds();

};

#endif