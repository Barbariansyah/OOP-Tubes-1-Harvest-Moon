#ifndef CHICKEN_H_
#define CHICKEN_H_

#include "EggPFA.h"
#include "MeatPFA.h"

//! Kelas Chicken
/*!
  Sebuah kelas riil dari FarmAnimal, yaitu kelas chicken
  Berisi sebuah konstruktor, implementasi fungsi Render(), dan implementasi fungsi Sounds()
*/
class Chicken : public MeatPFA, public EggPFA {

    private :

    public :

        //! Konstruktor dari kelas Chicken
        /*!
        TBD!
        */
        Chicken(int _pos_x , int _pos_y);

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan Chicken pada Map
        @return karakter serta kode warna yang sesuai dengan Chicken.
        */
        string Render();

        //! Implementasi dari fungsi Sounds()
        /*!
        Digunakan untuk mengeluarkan suara chicken
        TBD!
        */
        void Sounds();

        FarmProduct getProduct();
        FarmProduct getKilledProduct();

};

#endif