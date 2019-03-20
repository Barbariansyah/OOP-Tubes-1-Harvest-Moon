#ifndef DUCK_EGG_H
#define DUCK_EGG_H

#include "FarmProduct.h"
/**
 * Kelas DuckEgg, kelas riil turunan farm product.
 * Didapatkan dari aksi interact terhadap farm animal duck yang produknya dapat diambil
 */
class DuckEgg : public FarmProduct{
  public:
    /**
     * Konstruktor DuckEgg.
     */
    DuckEgg();
};

#endif