//! Kelas Goat
/*!
  Sebuah kelas riil dari FarmAnimal, yaitu kelas goat
  Berisi sebuah konstruktor, implementasi fungsi Render(), dan implementasi fungsi Sounds()
*/

#ifndef GOAT_H_
#define GOAT_H_

#include "MilkPFA.h"
#include "MeatPFA.h"

class Goat : public MilkPFA , public MeatPFA {

    private :

    public :

        //! Konstruktor dari kelas Goat
        /*!
        TBD!
        */
        Goat();

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan goat pada Map
        TBD!
        */
        string Render();

        //! Implementasi dari fungsi Sounds()
        /*!
        Digunakan untuk mengeluarkan suara goat
        TBD!
        */
        void Sounds();

};

#endif