#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

class Product{
//Abstract base class for products
protected:
  double Price;
public:
  Product(double _Price);
  double getPrice() const;

  virtual void Print() = 0;
};

#endif
