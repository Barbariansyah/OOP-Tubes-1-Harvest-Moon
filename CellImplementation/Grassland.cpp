#include <iostream>
#include "../Grassland.h"

using namespace std;

Grassland :: Grassland(){
    grass = false;
    type = "Grassland";
}

string Grassland :: Render(){
    if(isGrass()){
        return GREEN+"#"+NONE;
    }
    else{
        return GREEN+"-"+NONE;
    }
     
}
