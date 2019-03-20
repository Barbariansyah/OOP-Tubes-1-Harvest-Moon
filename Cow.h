//! Kelas Cow
/*!
  Sebuah kelas riil dari FarmAnimal, yaitu kelas cow
  Berisi sebuah konstruktor, implementasi fungsi Render(), dan implementasi fungsi Sounds()
*/

#ifndef COW_H_
#define COW_H_

#include "MilkPFA.h"
#include "MeatPFA.h"

class Cow : public MilkPFA , public MeatPFA {

    private :

    public :

        //! Konstruktor dari kelas cow
        /*!
        TBD!
        */
        Cow();

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