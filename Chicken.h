//! Kelas Chicken
/*!
  Sebuah kelas riil dari FarmAnimal, yaitu kelas chicken
  Berisi sebuah konstruktor, implementasi fungsi Render(), dan implementasi fungsi Sounds()
*/


#ifndef CHICKEN_H_
#define CHICKEN_H_

#include "EggPFA.h"
#include "MeatPFA.h"

class Chicken : public MeatPFA, public EggPFA {

    private :

    public :

        //! Konstruktor dari kelas Chicken
        /*!
        TBD!
        */
        Chicken();

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan Chicken pada Map
        TBD!
        */
        string Render();

        //! Implementasi dari fungsi Sounds()
        /*!
        Digunakan untuk mengeluarkan suara chicken
        TBD!
        */
        void Sounds();

};

#endif