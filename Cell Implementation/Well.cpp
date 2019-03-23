#include <iostream>
#include "..\Well.h"

using namespace std;

Well :: Well(int _x, int _y){
    this->pos_x = _x;
    this->pos_y = _y;
}

string Well :: Render(){
    return "W";
}