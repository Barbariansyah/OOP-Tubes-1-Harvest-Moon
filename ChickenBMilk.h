#ifndef CHICKEN_BMILK_H
#define CHICKEN_BMILK_H

#include "SideProduct.h"
/**
 * Kelas ChickenButtermilk, kelas riil turunan side product.
 * Terbuat dari chicken meat dan cow milk
 */
class ChickenButtermilk : public SideProduct{
  protected:
    private static string recipe[];
  public:
    /**
     * Konstruktor ChickenButtermilk.
     * Melakukan pemanggilan validasi resep sebelum pembuatan objek
     */
    ChickenButtermilk();
    /**
     * getRecipe.
     * Melakukan pengembalian recipe
     */
    static string[] getRecipe();
    /**
     * validateRecipe.
     * Melakukan validasi resep
     */
     boolean validateRecipe(string recipe[]);
};

#endif
