#include <iostream>
using namespace std;

#include "../Player.h"
#include "../FarmAnimal.h"

//! Implementasi Kelas Player /*! */

Player :: Player()
//! Konstruktor default Player()
/*!
Digunakan untuk membuat objek dari kelas ini
Inisialisasi name dengan = "Player"
Inisialisasi water_container = 0
Inisialisasi money = 0
*/
    {
        this -> name = "Player";
        this -> water_container = 0;
        this -> money = 0;
    }

Player :: Player(string _name , int _water_container , double _money)
//! Konstruktor user-defined Player()
/*!
Digunakan untuk membuat objek dari kelas ini
Inisialisasi name dengan = _name
Inisialisasi water_container = _water_container
Inisialisasi money = _monet
*/    
    {   
        this -> name = _name;
        this -> water_container = _water_container;
        this -> money = _money;
    }

void Player :: SetName(string _name)
//! Implementasi fungsi setter nama
/*!
@param _name nama baru
Mengubah name dengan _name
*/
    {
        this -> name = _name;
    }

void Player :: SetWaterContainer(int _waterContainer)
//! Implementasi fungsi setter waterContainer
/*!
@param _waterContainer isi container air
Mengubah water_container dengan _waterContainer
*/
    {
        this -> water_container = _waterContainer;
    }

void Player :: SetMoney(double _money)
//! Implementasi fungsi setter money
/*!
@param _money jumlah uang baru
Mengubah money dengan _money
*/
    {
        this -> money = _money;
    }

string Player :: GetName()
//! Implementasi fungsi getter nama
/*!
@return nama player
*/
    {
        return this -> name;
    }

int Player :: GetWaterContainer()
//! Implementasi fungsi getter water_container
/*!
@return isi water container
*/
    {
        return this -> water_container;
    }

double Player :: GetMoney()
//! Implementasi fungsi getter money
/*!
@return jumlah uang
*/
    {
        return this -> money;
    }

/**
 * Implementasi fungsi render dari kelas renderer.
 * @return karakter serta kode warna yang sesuai dengan Player.
 */
string Player :: Render()
    {
        return "P";
    }

//! Implementasi dari fungsi Move()
/*!
Digunakan untuk melakukan perpindahan pada map 
*/
void Player :: Move(string _direction)
    {
        if ( _direction.compare("LEFT") == 0 )
            {
                this -> pos_x = this -> pos_x - 1;
            }
        else 
        if ( _direction.compare("RIGHT") == 0 )
            {
                this -> pos_x = this -> pos_x + 1;
            }
        else
        if ( _direction.compare("UP") == 0 )
            {
                this -> pos_y = this -> pos_y + 1;
            }
        else
        if ( _direction.compare("DOWN") == 0 )
            {
                this -> pos_y = this -> pos_y - 1;
            }        
    }

//! Implementasi dari fungsi Talk()
/*!
Digunakan untuk melakukan interaksi dengan animal
*/
void Player :: Talk()
    {
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x+1,pos_y));
                (*f_a).Sounds();
            }
        catch(const char* msg)
            {
                cerr << msg << endl;
            }
    }

//! Implementasi dari fungsi Interact()
/*!
Fungsi interact(), digunakan untuk mengambil product dari Milk Producing Farm Animal dan Egg Producing Farm Animal
ATAU 
untuk melakukan interaksi dengan Facility
*/
void Player :: Interact()
    {
        // TBD
        // Menunggu fungsi mencari entitas di sekitar player
        /* Case 1 : 
           Jika bertemu dengan FarmAnimal, akan check apakah hewan tersebut termasuk kelas apa
           - EggPFA, akan cek available_eggs
           - MilkPFA, akan cek available_milk */
        /* Case 2 :
           Jika bertemu dengan Facility, akan menjalankan fungsi dari facilitynya */
        
    }

//! Implementasi dari fungsi Kill()
/*!
Digunakan untuk membunuh animal dan mendapatkan dagingnya
TBD!
*/
void Player :: Kill()
    {
        // TBD
        // Menunggu fungsi mencari entitas di sekitar player
        /* Jika bertemu dengan MeatPFA, secara otomatis akan membunuh
           hewan tersebut, dan menambahkan product daging ke inventory */
    }

//! Implementasi dari fungsi Grow()
/*!
Digunakan untuk menumbuhkan rumput pada cell
*/
void Player :: Grow()
    {
        // TBD
        // Menunggu fungsi mencari Land di tempat sekarang
        /* Jika sudah ada rumput, tidak melakukan apa-apa,
           sebaliknya akan memanggil fungsi Land.GrowGrass */
    }

//! Implementasi dari fungsi Mix()
/*!
Digunakan untuk membuat side product dari farm product
*/
void Player :: Mix()
    {
        // TBD
        // Menunggu fungsi mencari entitas di tempat sekitarnya
        /* Akan menggunakan fungsi masing-masing dari facility jika ada di sekitarnya */
    }

