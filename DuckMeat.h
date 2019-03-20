#ifndef DUCK_MEAT_H
#define DUCK_MEAT_H

#include "FarmProduct.h"
/**
 * Kelas DuckMeat, kelas riil turunan farm product.
 * Didapatkan dari aksi kill terhadap farm animal duck
 */
class DuckMeat : public FarmProduct{
  public:
    /**
     * Konstruktor DuckMeat.
     */
    DuckMeat();
};

#endif