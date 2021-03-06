#ifndef RABBIT_H_
#define RABBIT_H_

#include "MeatPFA.h"

//! Kelas Rabbit
/*!
  Sebuah kelas riil dari FarmAnimal, yaitu kelas Rabbit
  Berisi sebuah konstruktor, implementasi fungsi Render(), dan implementasi fungsi Sounds()
*/
class Rabbit : public MeatPFA {

    private :

    public :

        //! Konstruktor dari kelas rabbit
        /*!
        TBD!
        */
        Rabbit(int _pos_x , int _pos_y);

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan rabbit pada Map
        @return karakter serta kode warna yang sesuai dengan Player.
        */
        string Render();

        //! Implementasi dari fungsi Sounds()
        /*!
        Digunakan untuk mengeluarkan suara rabbit
        TBD!
        */
        void Sounds();
        
        //! Implementasi dari fungsi getProduct()
        /*!
        Getter untuk mendapatkan product dari kelas Rabbit, akan menghasilkan throws error karena rabbit tidak memiliki product
        */
        void GetProduct();

        //! Implementasi dari fungsi getKilledProduct()
        /*!
        Getter untuk mendapatkan produk hasil kill dari kelas Rabbit, berupa RabbitMeat
        */
        void GetKilledProduct();

};

#endif