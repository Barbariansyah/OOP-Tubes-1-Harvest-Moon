#include <iostream>
#include "..\Mixer.h"

using namespace std;

Mixer :: Mixer(int _x, int _y){
    this->pos_x = _x;
    this->pos_y = _y;
}

string Mixer :: Render(){
    return "M";
}