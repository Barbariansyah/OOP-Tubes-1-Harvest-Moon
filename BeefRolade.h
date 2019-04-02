#ifndef BEEF_ROLADE_H
#define BEEF_ROLADE_H

#include "SideProduct.h"
/**
 * Kelas BeefRolade, kelas riil turunan side product.
 * Terbuat dari cow meat dan chicken egg.
 */
class BeefRolade : public SideProduct{
  public:
    static LinkedList<Product*> recipe;
    /**
     * initRecipe.
     * Melakukan inisiasi resep
     */
    static void initRecipe();
    /**
     * Konstruktor BeefRolade.
     * Melakukan pemanggilan validasi resep sebelum pembuatan objek
     */
    BeefRolade();
    /**
     * getRecipe.
     * Melakukan pengembalian recipe
     */
    static LinkedList<Product*> getRecipe();
    /**
     * validateRecipe.
     * Melakukan validasi resep
     */
     static bool validateRecipe(LinkedList<Product*> inventory);

};

#endif
