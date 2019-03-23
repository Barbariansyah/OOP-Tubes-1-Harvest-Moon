#ifndef BEEF_ROLADE_H
#define BEEF_ROLADE_H

#include "SideProduct.h"
/**
 * Kelas BeefRolade, kelas riil turunan side product.
 * Terbuat dari cow meat dan chicken egg.
 */
class BeefRolade : public SideProduct{
  protected:
    private static string recipe[];
  public:
    /**
     * Konstruktor BeefRolade.
     * Melakukan pemanggilan validasi resep sebelum pembuatan objek
     */
    BeefRolade();
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
