#include <iostream>
#include "../Truck.h"

using namespace std;

Truck :: Truck(int _x, int _y){
    this->pos_x = _x;
    this->pos_y = _y;
    AwayCounter = 0;
}

void Truck :: TickTruck(){
    if (AwayCounter > 0){
        AwayCounter--;
    }
}

void Truck :: SetAwayCounter(int val){
    AwayCounter = val;
}

string Truck :: Render(){
    return "T";
}