#include "../SideProduct.h"

SideProduct::SideProduct(double _price, string _name):Product(_price, _name){}

void SideProduct::Print(){
  cout<<"Side Product"<<endl;
  cout<<"Name   : "<<name<<endl;
  cout<<"Price  : "<<price<<endl;
}
