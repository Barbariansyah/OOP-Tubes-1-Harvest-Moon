#include "../Product.h"

Product::Product(double _price, string _name){
  price = _price;
  name = _name;
}

double Product::getPrice() const{
  return price;
}

bool operator==(const Product& p1, const Product& p2){
<<<<<<< HEAD
    std::cout << "Kepanggil" << '\n';
=======
>>>>>>> ab3d3e1555e68ba34c52c7a55a869fed128548b8
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
