//! Kelas Player
/*!
   Merupakan Kelas untuk pengguna dalam permainan ini
   Memiliki semua atribut dan method yang dimiliki oleh pengguna, sesuai spesifikasi
   Berisi konstruktor default dan user defined, setter dan getter, serta method-method untuk berinteraksi pada game
*/

#ifndef PLAYER_H_
#define PLAYER_H_

#include "LiveEntity.h"
#include <string>
#include <vector>

using namespace std;

class Player : public LiveEntity {

    private :

        string name; /*!< sebuah string untuk merepresentasikan nama player */
        int water_container; /*!< sebuah integer untuk merepresentasikan kapasitas air yang dimiliki player */
        double money; /*!< sebuah double untuk merepresentasikan uang yang dimiliki player */
        vector<Product> inventory; /*!< sebuah vector of Product untuk merepresentasikan inventory player */

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
        TBD!
        */
        Player(string _name , int _water_container , double _money);

        //! Fungsi setter
        /*!
        Digunakan untuk mengubah atribut pada kelas ini oleh objek lain
        TBD!
        */
        void SetName(string _name);
        void SetWaterContainer(int _waterContainer);
        void SetMoney(double _money);

        //! Fungsi getter
        /*!
        Digunakan untuk mendapatkan atribut pada kelas ini oleh objek lain
        TBD!
        */
        string GetName();
        int GetWaterContainer();
        double GetMoney();

        //! Implementasi dari fungsi Render()
        /*!
        Digunakan untuk menampilkan player pada Map
        TBD!
        */
        string Render();
        
        //! Implementasi dari fungsi Move()
        /*!
        Digunakan untuk melakukan perpindahan pada map 
        TBD!
        */
        void Move();
        
        //! Implementasi dari fungsi Move()
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

};

#endif