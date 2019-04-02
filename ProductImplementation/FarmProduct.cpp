#include "../FarmProduct.h"
#include <iostream>

FarmProduct::FarmProduct(double _price, string _name):Product(_price, _name){};

void FarmProduct::Print(){
  cout<<"Farm Product"<<endl;
  cout<<"Name   : "<<name<<endl;
  cout<<"Price  : "<<price<<endl;
};
