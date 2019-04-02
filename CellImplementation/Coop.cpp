#include <iostream>
#include "../Coop.h"

using namespace std;

Coop :: Coop(){
    grass = false;
    type = "Coop";
}

string Coop :: Render(){
    return "O";
}