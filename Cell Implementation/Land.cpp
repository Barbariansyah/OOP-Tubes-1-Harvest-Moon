#include <iostream>
#include "..\Land.h"

using namespace std;

Land :: Land(){
    //grass = false;
}

void Land :: GrowGrass(){
    grass = true;
}

void Land :: RemoveGrass(){
    grass = false;
}
