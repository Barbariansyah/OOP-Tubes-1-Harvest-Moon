#ifndef PLAYER_H
#define PLAYER_H

#include "LiveEntity.h"
#include "Product.h"
#include "LinkedList.h"

#include <string>

using namespace std;

//! Kelas Player
/*!
   Merupakan Kelas untuk pengguna dalam permainan ini
   Memiliki semua atribut dan method yang dimiliki oleh pengguna, sesuai spesifikasi
   Berisi konstruktor default dan user defined, setter dan getter, serta method-method untuk berinteraksi pada game
*/
class Player : public LiveEntity {

    private :

        string name; /*!< sebuah string untuk merepresentasikan nama player */
        int water_container; /*!< sebuah integer untuk merepresentasikan kapasitas air yang dimiliki player */
        double money; /*!< sebuah double untuk merepresentasikan uang yang dimiliki player */
        LinkedList<Product*> inventory; /*!< sebuah vector of Product untuk merepresentasikan inventory player */

    public :

        //! Konstruktor default Player()
        /*!
        Digunakan untuk membuat objek dari kelas ini
        TBD!
        */
        Player();

        //! Konstruktor user defined Player()
        /*!
        Digunakan untuk membuat objek dari kelas ini, sesuai dengan parameter dari pengguna
        @param _name nama player
        @param _water_container container air awal
        @param _money nilai awal uang
        */
        Player(string _name , int _water_container , double _money, int x, int y);

        //! Fungsi setter nama
        /*!
        @param _name nama baru
        */
        void SetName(string _name);
        //! Fungsi setter watercontainer
        /*!
        @param _waterContainer isi container air
        */
        void SetWaterContainer(int _waterContainer);
        //! Fungsi setter money
        /*!
        @param _money jumlah uang baru
        */
        void SetMoney(double _money);

        //! Fungsi getter nama
        /*!
        @return nama player
        */
        string GetName();
        //! Fungsi getter isi water container
        /*!
        @return isi water container
        */
        int GetWaterContainer();
        //! Fungsi getter money
        /*!
        @return money
        */
        double GetMoney();

        /**
         * Implementasi fungsi render dari kelas renderer.
         * @return karakter serta kode warna yang sesuai dengan Player.
         */
        string Render();
        
        //! Implementasi dari fungsi Move()
        /*!
        Digunakan untuk melakukan perpindahan pada map 
        TBD!
        */
        void Move();
        //! Implementasi dari fungsi Talk()
        /*!
        Digunakan untuk melakukan interaksi dengan animal
        TBD!
        */
        void Talk();

        //! Implementasi dari fungsi Interact()
        /*!
        Fungsi interact(), digunakan untuk mengambil product dari Milk Producing Farm Animal dan Egg Producing Farm Animal
        ATAU 
        untuk melakukan interaksi dengan Facility
        TBD!
        */
        void Interact();

        //! Implementasi dari fungsi Kill()
        /*!
        Digunakan untuk membunuh animal dan mendapatkan dagingnya
        TBD!
        */
        void Kill();
        
        //! Implementasi dari fungsi Grow()
        /*!
        Digunakan untuk menumbuhkan rumput pada cell
        TBD!
        */
        void Grow();

        //! Implementasi dari fungsi Mix()
        /*!
        Digunakan untuk membuat side product dari farm product
        TBD!
        */
        void Mix();

        void PrintInventory();
        
        void PrintStatus();

        LinkedList<Product*>& GetInventory();
};

#endif