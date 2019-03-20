#ifndef COW_MEAT_H
#define COW_MEAT_H

#include "FarmProduct.h"
/**
 * Kelas CowMeat, kelas riil turunan farm product.
 * Didapatkan dari aksi kill terhadap farm animal cow
 */
class CowMeat : public FarmProduct{
  public:
    /**
     * Konstruktor CowMeat.
     */
    CowMeat();
};

#endif