#ifndef GOAT_CHEESE_H
#define GOAT_CHEESE_H

#include "SideProduct.h"
#include "LinkedList.h"
/**
 * Kelas GoatCheese, kelas riil turunan side product.
 * Terbuat dari dua goat milk
 */
class GoatCheese : public SideProduct{
  public:
    static LinkedList<Product*> recipe;
    /**
     * initRecipe.
     * Melakukan inisiasi resep
     */
    static void initRecipe();
    /**
     * Konstruktor GoatCheese.
     * Melakukan pemanggilan validasi resep sebelum pembuatan objek
     */
    GoatCheese();
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
