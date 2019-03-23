#include <iostream>
#include "Land.h"

using namespace std;

Land :: Land(){
    //grass = false;
}

void Land :: growGrass(){
    grass = true;
}

void Land : removeGrass(){
    grass = false;
}