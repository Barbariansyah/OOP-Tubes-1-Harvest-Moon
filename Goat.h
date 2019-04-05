#ifndef GOAT_H_
#define GOAT_H_

#include "MilkPFA.h"
#include "MeatPFA.h"

//! Kelas Goat
/*!
  Sebuah kelas riil dari FarmAnimal, yaitu kelas goat
  Berisi sebuah konstruktor, implementasi fungsi Render(), dan implementasi fungsi Sounds()
*/
class Goat : public MilkPFA , public MeatPFA {

    private :

    public :

        //! Konstruktor dari kelas Goat
        /*!
        TBD!
        */
        Goat(int _pos_x , int _pos_y);

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan goat pada Map
        @return karakter serta kode warna yang sesuai dengan Player.
        */
        string Render();

        //! Implementasi dari fungsi Sounds()
        /*!
        Digunakan untuk mengeluarkan suara goat
        TBD!
        */
        void Sounds();

        //! Implementasi dari fungsi getProduct()
        /*!
        Getter untuk mendapatkan product dari kelas Goat, berupa GoatMilk
        */
        void GetProduct();

        //! Implementasi dari fungsi getKilledProduct()
        /*!
        Getter untuk mendapatkan produk hasil kill dari kelas Goat, berupa GoatMeat
        */
        void GetKilledProduct();

};

#endif