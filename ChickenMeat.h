#ifndef CHICKEN_MEAT_H
#define CHICKEN_MEAT_H

#include "FarmProduct.h"
/**
 * Kelas ChickenMeat, kelas riil turunan farm product.
 * Didapatkan dari aksi kill terhadap farm animal chicken
 */
class ChickenMeat : public FarmProduct{
  public:
    /**
     * Konstruktor ChickenMeat.
     */
    ChickenMeat();
};

#endif