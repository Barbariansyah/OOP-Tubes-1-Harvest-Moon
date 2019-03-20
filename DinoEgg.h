#ifndef DINO_EGG_H
#define DINO_EGG_H

#include "FarmProduct.h"
/**
 * Kelas DinoEgg, kelas riil turunan farm product.
 * Didapatkan dari aksi interact terhadap farm animal dino yang produknya dapat diambil
 */
class DinoEgg : public FarmProduct{
  public:
    /**
     * Konstruktor DinoEgg.
     */
    DinoEgg();
};

#endif