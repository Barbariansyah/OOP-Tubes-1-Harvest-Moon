//! Kelas Dino
/*!
  Sebuah kelas riil dari FarmAnimal, yaitu kelas dino
  Berisi sebuah konstruktor, implementasi fungsi Render(), dan implementasi fungsi Sounds()
*/

#ifndef DINO_H_
#define DINO_H_

#include "EggPFA.h"
#include "MeatPFA.h"

class Dino : public EggPFA , public MeatPFA {

    private :

    public :

        //! Konstruktor dari kelas Dino
        /*!
        TBD!
        */
        Dino();

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan Dino pada Map
        TBD!
        */
        string Render();

        //! Implementasi dari fungsi Sounds()
        /*!
        Digunakan untuk mengeluarkan suara dino
        TBD!
        */
        void Sounds();

};

#endif