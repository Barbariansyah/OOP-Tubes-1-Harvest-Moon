#ifndef COW_H_
#define COW_H_

#include "MilkPFA.h"
#include "MeatPFA.h"

//! Kelas Cow
/*!
  Sebuah kelas riil dari FarmAnimal, yaitu kelas cow
  Berisi sebuah konstruktor, implementasi fungsi Render(), dan implementasi fungsi Sounds()
*/
class Cow : public MilkPFA , public MeatPFA {
    private :

    public :

        //! Konstruktor dari kelas cow
        /*!
        TBD!
        */
        Cow(int _pos_x , int _pos_y);

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan cow pada Map
        @return karakter serta kode warna yang sesuai dengan Cow.
        */
        string Render();

        //! Implementasi dari fungsi Sounds()
        /*!
        Digunakan untuk mengeluarkan suara cow
        TBD!
        */
        void Sounds();

        //! Implementasi dari fungsi getProduct()
        /*!
        Getter untuk mendapatkan product dari kelas Cow, berupa CowMilk
        */
        void GetProduct();

        //! Implementasi dari fungsi getKilledProduct()
        /*!
        Getter untuk mendapatkan produk hasil kill dari kelas Cow, berupa CowMeat
        */
        void GetKilledProduct();

};

#endif