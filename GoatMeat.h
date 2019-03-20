#ifndef GOAT_MEAT_H
#define GOAT_MEAT_H

#include "FarmProduct.h"
/**
 * Kelas GoatMeat, kelas riil turunan farm product.
 * Didapatkan dari aksi kill terhadap farm animal goat
 */
class GoatMeat : public FarmProduct{
  public:
    /**
     * Konstruktor GoatMeat.
     */
    GoatMeat();
};

#endif