#include <iostream>
#include "../Barn.h"

using namespace std;

Barn :: Barn(){
    grass = false;
    type = "Barn";
}

string Barn :: Render(){
    return "X";
}