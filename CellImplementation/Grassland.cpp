#include <iostream>
#include "../Grassland.h"

using namespace std;

Grassland :: Grassland(){
    grass = false;
    type = "Grassland";
}

string Grassland :: Render(){
    if(isGrass()){
        return "#";
    }
    else{
        return "-";
    }
     
}
