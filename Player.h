/* Kelas Player, digunakan sebagai representasi user
   dalam permainan ini */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "LiveEntity.h"
#include <string>
#include <vector>

using namespace std;

class Player : public LiveEntity {

    private :

        string name;
        int water_container;
        double money;
        // vector<Product> inventory;

    public :

        /* Konstruktor default kelas Player */
        Player();

        /* Konstruktor user defined kelas Player */
        Player(string _name , int _water_container , double _money);

        /* Setter */
        void SetName(string _name);
        void SetWaterContainer(int _waterContainer);
        void SetMoney(double _money);

        /* Getter */
        string GetName();
        int GetWaterContainer();
        double GetMoney();

        /* Implementasi fungsi render() */
        string Render();
        
        /* Implementasi fungsi move() */
        void Move();
        
        /* Fungsi talk() , digunakan untuk berinteraksi dengan Farm Animal */
        void Talk();

        /* Fungsi interact(), digunakan untuk mengambil product dari Milk Producing Farm Animal dan Egg Producing Farm Animal
           ATAU 
           untuk melakukan interaksi dengan Facility */
        void Interact();

        /* Fungsi kill(), digunakan untuk mengambil daging dari Meat Producing Farm Animal */
        void Kill();
        
        /* Fungsi grow(), digunakan untuk menumbuhkan rumput pada cell tempat player berada */
        void Grow();

        /* Fungsi mix(), digunakan untuk membuat Side Product pada Facility Mixer */
        void Mix();

};

#endif