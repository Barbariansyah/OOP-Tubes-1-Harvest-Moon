#include <iostream>
using namespace std;

#include "../Player.h"
#include "../Game.h"

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
        pos_x = 0;
        pos_y = 0;
    }

Player :: Player(string _name , int _water_container , double _money, int x, int y)
//! Konstruktor user-defined Player()
/*!
Digunakan untuk membuat objek dari kelas ini
Inisialisasi name dengan = _name
Inisialisasi water_container = _water_container
Inisialisasi money = _money
*/    
    {   
        this -> name = _name;
        this -> water_container = _water_container;
        this -> money = _money;
        pos_x = x;
        pos_y = y;
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
void Player :: Move()
    {
        string _direction;
        cin >> _direction;
        Game::setEntity(pos_x,pos_y,nullptr);
        if ( _direction == "UP" )
            {
                if (Game::isValidPosition(pos_x-1, pos_y)){
                    if (!Game::isValidEntity(pos_x-1, pos_y)){
                        this -> pos_x = this -> pos_x - 1;
                    }
                }
            }
        else 
        if ( _direction == "DOWN" )
            {
                if (Game::isValidPosition(pos_x+1, pos_y)){
                    if (!Game::isValidEntity(pos_x+1, pos_y))
                        this -> pos_x = this -> pos_x + 1;
                }
            }
        else
        if ( _direction == "LEFT" )
            {
                if (Game::isValidPosition(pos_x, pos_y-1)){
                    if (!Game::isValidEntity(pos_x, pos_y-1))
                        this -> pos_y = this -> pos_y - 1;
                }
            }
        else
        if ( _direction == "RIGHT" )
            {
                if (Game::isValidPosition(pos_x, pos_y+1)){
                    if (!Game::isValidEntity(pos_x, pos_y+1))
                        this -> pos_y = this -> pos_y + 1;
                }
            } 
        Game::setEntity(pos_x,pos_y,this);       
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
        bool notfound = false;
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x+1,pos_y));
                f_a->GetProduct();
                return;
            }
        catch(const char* msg)
            {
                notfound = true;
            }
        
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x,pos_y+1));
                f_a->GetProduct();
                return;
            }
        catch(const char* msg)
            {
                notfound = true;
            }

        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x,pos_y-1));
                f_a->GetProduct();
                return;
            }
        catch(const char* msg)
            {
                notfound = true;
            }
        
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x-1,pos_y));
                f_a->GetProduct();
                return;
            }
        catch(const char* msg)
            {
                notfound = true;
            }
        
        try
            {
                Truck t = Game :: getTruck(pos_x,pos_y);
                t.SetAwayCounter(5);
                double selling = 0;
                for(int i = 0; i < inventory.length(); i++){
                    selling += inventory.get(i)->getPrice();
                }
                money += selling;
                inventory.removeAll();
                return;
            }
        catch(const char* msg)
            {
                notfound = true;
            }

        try
            {
                Well w = Game :: getWell(pos_x,pos_y);
                water_container = 5;
                return;
            }
        catch(const char* msg)
            {
                notfound = true;
            }  
        
        if (notfound)
            cout << "Nothing to interact to :(" << endl;
    }

//! Implementasi dari fungsi Kill()
/*!
Digunakan untuk membunuh animal dan mendapatkan dagingnya
TBD!
*/
void Player :: Kill()
    {
        bool notfound;

        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x+1,pos_y));
                f_a -> GetKilledProduct();
                f_a -> SetKilled();
                return;
            }
        catch(const char* msg)
            {
                notfound = true;
            }
        
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x,pos_y+1));
                f_a -> GetKilledProduct();
                f_a -> SetKilled();
                return;
            }
        catch(const char* msg)
            {
                notfound = true;
            }

        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x,pos_y-1));
                f_a -> GetKilledProduct();
                f_a -> SetKilled();
                return;
            }
        catch(const char* msg)
            {
                notfound = true;
            }
        
        try
            {
                FarmAnimal* f_a = &(Game :: getAnimal(pos_x-1,pos_y));
                f_a -> GetKilledProduct();
                f_a -> SetKilled();
                return;
            }
        catch(const char* msg)
            {
                notfound = true;
            }
        
        if (notfound)
            {
                cout << "There is nothing to kill :(" << endl;
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
                        water_container--;
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
        try{
            Game::getMixer(pos_x,pos_y);
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
        }catch(const char* msg){
            cout << msg << endl;
        }
    }

void Player :: PrintInventory()
    {
        if (inventory.isEmpty()){
            cout << "Inventory Empty" << endl;
        }else{
            for (int i = 0 ; i < inventory.length() ; i++)
                {
                    cout << inventory.get(i)->getName() << endl;
                }
        }
    }

void Player :: PrintStatus()
    {
        cout << "Water Container : " << water_container << endl;
        cout << "Money : " << money << endl;
        PrintInventory();        
    }

LinkedList<Product*>& Player::GetInventory(){
    return inventory;
}