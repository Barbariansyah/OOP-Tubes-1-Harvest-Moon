#ifndef PANCAKE_H
#define PANCAKE_H

#include "SideProduct.h"
/**
 * Kelas Pancake, kelas riil turunan side product.
 * Terbuat dari chicken egg dan cow milk
 */
class Pancake : public SideProduct{
    public:
      static LinkedList<Product*> recipe;
    /**
     * initRecipe.
     * Melakukan inisiasi resep
     */
    static void initRecipe();
    /**
     * Konstruktor pancake.
     * Melakukan pemanggilan validasi resep sebelum pembuatan objek
     */
    Pancake();
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
