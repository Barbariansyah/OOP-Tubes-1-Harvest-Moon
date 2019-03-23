#ifndef GOAT_CHEESE_H
#define GOAT_CHEESE_H

#include "SideProduct.h"
/**
 * Kelas GoatCheese, kelas riil turunan side product.
 * Terbuat dari dua goat milk
 */
class GoatCheese : public SideProduct{
  protected:
    private static string recipe[];
  public:
    /**
     * Konstruktor GoatCheese.
     * Melakukan pemanggilan validasi resep sebelum pembuatan objek
     */
    GoatCheese();
    /**
     * getRecipe.
     * Melakukan pengembalian recipe
     */
    static string[] getRecipe();
    /**
     * validateRecipe.
     * Melakukan validasi resep
     */
     boolean validateRecipe(string inventory[]);
};

#endif
