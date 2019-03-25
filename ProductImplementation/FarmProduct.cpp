#include "../FarmProduct.h"
#include <iostream>

FarmProduct::FarmProduct(double _price, string _name):Product(_price, _name){};

void FarmProduct::Print(){
  cout<<"Farm Product"<<endl;
  cout<<"Name   : "<<name<<endl;
  cout<<"Price  : "<<price<<endl;
};
/*
bool operator==(const FarmProduct p1, const FarmProduct p2){
    if (p1.getName().compare(p2.getName()) == 0){
      return true;
    }
    else{
      return false;
    }
}*/
