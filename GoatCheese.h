#ifndef GOAT_CHEESE_H
#define GOAT_CHEESE_H

#include "SideProduct.h"
/**
 * Kelas GoatCheese, kelas riil turunan side product.
 * Terbuat dari dua goat milk
 */
class GoatCheese : public SideProduct{
  public:
    /**
     * Konstruktor GoatCheese.
     * Melakukan pemanggilan validasi resep sebelum pembuatan objek
     */
    GoatCheese();
};

#endif