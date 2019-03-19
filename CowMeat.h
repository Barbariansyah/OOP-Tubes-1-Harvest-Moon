#ifndef COW_MEAT_H
#define COW_MEAT_H

#include "FarmProduct.h"

class CowMeat : public FarmProduct{
public:
  CowMeat();//Contoh implementasi CowMeat():Product(150);
  void Print();
};

#endif