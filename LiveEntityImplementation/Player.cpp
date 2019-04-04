#include <iostream>
using namespace std;

#include "../Player.h"
#include "../FarmAnimal.h"
#include "../Land.h"
#include "../AllProduct.h"

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
        if (_waterContainer > 5 )
            {
                this -> water_container = 5;
            }
        else
            {
                this -> water_container = _waterContainer;
            }

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
        if ( _direction.compare("UP") == 0 )
            {
                if (Game::isValidPosition(pos_x-1, pos_y)){
                    if (Game::isValidEntity(pos_x-1, pos_y))
                        this -> pos_x = this -> pos_x - 1;
                }
            }
        else 
        if ( _direction.compare("DOWN") == 0 )
            {
                if (Game::isValidPosition(pos_x+1, pos_y)){
                    if (Game::isValidEntity(pos_x+1, pos_y))
                        this -> pos_x = this -> pos_x + 1;
                }
            }
        else
        if ( _direction.compare("LEFT") == 0 )
            {
                if (Game::isValidPosition(pos_x, pos_y-1)){
                    if (Game::isValidEntity(pos_x, pos_y-1))
                        this -> pos_y = this -> pos_y - 1;
                }
            }
        else
        if ( _direction.compare("RIGHT") == 0 )
            {
                if (Game::isValidPosition(pos_x, pos_y+1)){
                    if (Game::isValidEntity(pos_x, pos_y+1))
                        this -> pos_y = this -> pos_y + 1;
                }
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
                return;
            }
        catch(const char* msg)
            {

            }
        
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x,pos_y+1));
                (*f_a).Sounds();
                return;
            }
        catch(const char* msg)
            {

            }

        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x,pos_y-1));
                (*f_a).Sounds();
                return;
            }
        catch(const char* msg)
            {

            }
        
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x-1,pos_y));
                (*f_a).Sounds();
                return;
            }
        catch(const char* msg)
            {

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
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x+1,pos_y));
                FarmProduct fp = (*f_a).GetProduct();
                inventory.add(&fp);
                return;
            }
        catch(const char* msg)
            {

            }
        
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x,pos_y+1));
                FarmProduct fp = (*f_a).GetProduct();
                inventory.add(&fp);
                return;
            }
        catch(const char* msg)
            {

            }

        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x,pos_y-1));
                FarmProduct fp = (*f_a).GetProduct();
                inventory.add(&fp);
                return;
            }
        catch(const char* msg)
            {

            }
        
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x-1,pos_y));
                FarmProduct fp = (*f_a).GetProduct();
                inventory.add(&fp);
                return;
            }
        catch(const char* msg)
            {

            }
        
        try
            {
                Truck* t = &(Game :: getTruck(pos_x+1,pos_y));
                return;

            }
        catch(const char* msg)
            {

            }
        
        try
            {
                Truck* t = &(Game :: getTruck(pos_x,pos_y+1));
                return;

            }
        catch(const char* msg)
            {

            }

        try
            {
                Truck* t = &(Game :: getTruck(pos_x,pos_y-1));
                return;

            }
        catch(const char* msg)
            {

            }

        try
            {
                Truck* t = &(Game :: getTruck(pos_x-1,pos_y));
                return;
            }
        catch(const char* msg)
            {

            }  

        try
            {
                Mixer* m = &(Game :: getMixer(pos_x+1,pos_y));
                return;
            }
        catch(const char* msg)
            {

            }  

        try
            {
                Mixer* m = &(Game :: getMixer(pos_x,pos_y+1));
                return;
            }
        catch(const char* msg)
            {

            }   

        try
            {
                Mixer* m = &(Game :: getMixer(pos_x,pos_y-1));
                return;
            }
        catch(const char* msg)
            {

            }   

        try
            {
                Mixer* m = &(Game :: getMixer(pos_x-1,pos_y));
                return;
            }
        catch(const char* msg)
            {

            }

        try
            {
                Well* w = &(Game :: getWell(pos_x+1,pos_y));
                waterContainer = 5;
                return;
            }
        catch(const char* msg)
            {

            }  

        try
            {
                Well* w = &(Game :: getWell(pos_x,pos_y+1));
                waterContainer = 5;
                return;
            }
        catch(const char* msg)
            {

            }   

        try
            {
                Well* w = &(Game :: getWell(pos_x,pos_y-1));
                waterContainer = 5;
                return;
            }
        catch(const char* msg)
            {

            }   

        try
            {
                Well* w = &(Game :: getWell(pos_x-1,pos_y));
                waterContainer = 5;
                return;
            }
        catch(const char* msg)
            {

            }
    }

//! Implementasi dari fungsi Kill()
/*!
Digunakan untuk membunuh animal dan mendapatkan dagingnya
TBD!
*/
void Player :: Kill()
    {
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x+1,pos_y));
                try
                    {
                        FarmProduct fp = (*f_a).GetKilledProduct();
                        inventory.add(&fp);
                    }
                catch(const char* msg)
                    {

                    }
                return;
            }
        catch(const char* msg)
            {

            }
        
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x,pos_y+1));
                try
                    {
                        FarmProduct fp = (*f_a).GetKilledProduct();
                        inventory.add(&fp);
                    }
                catch(const char* msg)
                    {

                    }
                return;
            }
        catch(const char* msg)
            {

            }

        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x,pos_y-1));
                try
                    {
                        FarmProduct fp = (*f_a).GetKilledProduct();
                        inventory.add(&fp);
                    }
                catch(const char* msg)
                    {

                    }
                return;
            }
        catch(const char* msg)
            {

            }
        
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x-1,pos_y));
                try
                    {
                        FarmProduct fp = (*f_a).GetKilledProduct();
                        inventory.add(&fp);
                    }
                catch(const char* msg)
                    {

                    }
                return;
            }
        catch(const char* msg)
            {

            }
    }

//! Implementasi dari fungsi Grow()
/*!
Digunakan untuk menumbuhkan rumput pada cell
*/
void Player :: Grow()
    {
        if (water_container > 0 )
            {
                Land* la = &(Game :: getLand(pos_x,pos_y));
                if (!(*la).isGrass())
                    {
                        (*la).GrowGrass();
                    }
            }
        else 
            {
                cout << "Water out of stock" << endl;
            }

    }

//! Implementasi dari fungsi Mix()
/*!
Digunakan untuk membuat side product dari farm product
*/
void Player :: Mix()
    {
        int x;
        cout << "What do you want ? " << endl;
        cout << "1. Beef Rolade " << endl;
        cout << "2. Pancake " << endl;
        cout << "3. Chicken Buttermilk" << endl;
        cout << "4. Goat Cheese" << endl;
        cin >> x;
        if (x == 1 ) 
            {
                if (BeefRolade :: validateRecipe(inventory))
                    {
                        BeefRolade* b_r = new BeefRolade();
                        inventory.add(b_r);

                        LinkedList<Product*> l_p = BeefRolade :: getRecipe();

                        for(int i = 0 ; i < l_p.length() ; i++)
                            {
                                inventory.remove(l_p.get(i));
                            }
                        
                        
                    }
            }
        else if ( x == 2)
            {
                if (Pancake :: validateRecipe(inventory))
                    {
                        Pancake* p = new Pancake();
                        inventory.add(p);

                        LinkedList<Product*> l_p = Pancake :: getRecipe();

                        for(int i = 0 ; i < l_p.length() ; i++)
                            {
                                inventory.remove(l_p.get(i));
                            }
                    }
            }
        else if ( x == 3)
            {
                if (ChickenButterMilk :: validateRecipe(inventory))
                    {
                        ChickenButterMilk* c_bm = new ChickenButterMilk();
                        inventory.add(c_bm);

                        LinkedList<Product*> l_p = ChickenButterMilk :: getRecipe();

                        for(int i = 0 ; i < l_p.length() ; i++)
                            {
                                inventory.remove(l_p.get(i));
                            }
                    }
            }
        else
            {
                if (GoatCheese :: validateRecipe(inventory))
                    {
                        GoatCheese* g_c = new GoatCheese();
                        inventory.add(g_c);

                        LinkedList<Product*> l_p = GoatCheese :: getRecipe();

                        for(int i = 0 ; i < l_p.length() ; i++)
                            {
                                inventory.remove(l_p.get(i));
                            }
                    }
            }
    }

