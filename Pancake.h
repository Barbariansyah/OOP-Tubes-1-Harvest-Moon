#ifndef PANCAKE_H
#define PANCAKE_H

#include "SideProduct.h"
/**
 * Kelas Pancake, kelas riil turunan side product.
 * Terbuat dari chicken egg dan cow milk
 */
class Pancake : public SideProduct{
  protected:
    private static string recipe[];
  public:
    /**
     * Konstruktor pancake.
     * Melakukan pemanggilan validasi resep sebelum pembuatan objek
     */
    Pancake();
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
