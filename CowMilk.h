#ifndef COW_MILK_H
#define COW_MILK_H

#include "FarmProduct.h"
/**
 * Kelas CowMilk, kelas riil turunan farm product.
 * Didapatkan dari aksi interact terhadap farm animal cow yang produknya dapat diambil
 */
class CowMilk : public FarmProduct{
  public:
    /**
     * Konstruktor CowMilk.
     */
    CowMilk();
};

#endif