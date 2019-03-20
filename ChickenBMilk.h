#ifndef CHICKEN_BMILK_H
#define CHICKEN_BMILK_H

#include "SideProduct.h"
/**
 * Kelas ChickenButtermilk, kelas riil turunan side product.
 * Terbuat dari chicken meat dan cow milk
 */
class ChickenButtermilk : public SideProduct{
  public:
    /**
     * Konstruktor ChickenButtermilk.
     * Melakukan pemanggilan validasi resep sebelum pembuatan objek
     */
    ChickenButtermilk();
};

#endif