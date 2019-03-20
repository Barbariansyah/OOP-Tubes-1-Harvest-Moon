#ifndef CHICKEN_EGG_H
#define CHICKEN_EGG_H

#include "FarmProduct.h"
/**
 * Kelas ChickenEgg, kelas riil turunan farm product.
 * Didapatkan dari aksi interact terhadap farm animal chicken yang produknya dapat diambil
 */
class ChickenEgg : public FarmProduct{
  public:
    /**
     * Konstruktor ChickenEgg.
     */
    ChickenEgg();
};

#endif