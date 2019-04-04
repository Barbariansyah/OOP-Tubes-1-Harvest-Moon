#ifndef DINO_H_
#define DINO_H_

#include "EggPFA.h"

//! Kelas Dino
/*!
  Sebuah kelas riil dari FarmAnimal, yaitu kelas dino
  Berisi sebuah konstruktor, implementasi fungsi Render(), dan implementasi fungsi Sounds()
*/
class Dino : public EggPFA {

    private :

    public :

        //! Konstruktor dari kelas Dino
        /*!
        TBD!
        */
        Dino(int _pos_x , int _pos_y);

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan Dino pada Map
        @return karakter serta kode warna yang sesuai dengan Dino.
        */
        string Render();

        //! Implementasi dari fungsi Sounds()
        /*!
        Digunakan untuk mengeluarkan suara dino
        TBD!
        */
        void Sounds();

        FarmProduct GetProduct();
        FarmProduct GetKilledProduct();

};

#endif