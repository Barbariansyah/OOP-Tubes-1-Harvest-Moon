#ifndef GOAT_MILK_H
#define GOAT_MILK_H

#include "FarmProduct.h"
/**
 * Kelas GoatMilk, kelas riil turunan farm product.
 * Didapatkan dari aksi interact terhadap farm animal goat yang produknya dapat diambil
 */
class GoatMilk : public FarmProduct{
  public:
    /**
     * Konstruktor GoatMilk.
     */
    GoatMilk();
};

#endif