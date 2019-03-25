#include "../Product.h"

Product::Product(double _price, string _name){
  price = _price;
  name = _name;
}

double Product::getPrice() const{
  return price;
}

bool operator==(const Product& p1, const Product& p2){
    if (p1.getName().compare(p2.getName()) == 0){
      return true;
    }
    else{
      return false;
    }
}

string Product::getName() const{
  return name;
}
