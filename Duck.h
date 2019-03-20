#ifndef DUCK_H_
#define DUCK_H_

#include "EggPFA.h"
#include "MeatPFA.h"

//! Kelas Duck
/*!
  Sebuah kelas riil dari FarmAnimal, yaitu kelas duck
  Berisi sebuah konstruktor, implementasi fungsi Render(), dan implementasi fungsi Sounds()
*/
class Duck : public EggPFA , public MeatPFA {

    private :

    public :

        //! Konstruktor dari kelas duck
        /*!
        TBD!
        */
        Duck();

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan duck pada Map
        @return karakter serta kode warna yang sesuai dengan Duck.
        */
        string Render();

        //! Implementasi dari fungsi Sounds()
        /*!
        Digunakan untuk mengeluarkan suara duck
        TBD!
        */
        void Sounds();

};

#endif