#include <iostream>
#include "../Coop.h"

using namespace std;

Coop :: Coop(){
    grass = false;
    type = "Coop";
}

string Coop :: Render(){
    if(isGrass()){
        return YELLOW+"*"+NONE;
    }
    else{
        return YELLOW+"O"+NONE;
    }
    
} 