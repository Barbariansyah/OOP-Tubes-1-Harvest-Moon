#include <iostream>
#include "../Grassland.h"

using namespace std;

Grassland :: Grassland(){
    grass = true;
    type = "Grassland";
}

string Grassland :: Render(){
    return "-";
}
