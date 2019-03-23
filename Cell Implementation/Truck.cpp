#include <iostream>
#include "Truck.h"

using namespace std;

Truck :: Truck(int _x, int _y){
    this.pos_x = _x;
    this.pos_y = _y;
}

string Coop :: Render(){
    return "T";
}