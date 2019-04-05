#include <iostream>
#include "../Barn.h"

using namespace std;

Barn :: Barn(){
    grass = false;
    type = "Barn";
}

string Barn :: Render(){
    if(this->isGrass()){
        return RED+"@"+NONE;
    }
    else{
        return RED+"X"+NONE;   
    } 
}