#include <iostream>
#include "../Land.h"

using namespace std;

void Land :: GrowGrass(){
    grass = true;
}

void Land :: RemoveGrass(){
    grass = false; 
}

bool Land :: isGrass(){
    return grass;
}

string Land :: getType(){
    return type;
}
