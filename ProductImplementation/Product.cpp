#include "../Product.h"

Product::Product(double _price, string _name){
  price = _price;
  name = _name;
}

double Product::getPrice() const{
  return price;
}

string Product::getName() const{
  return name;
}
