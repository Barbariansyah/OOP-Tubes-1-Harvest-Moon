#ifndef CHICKEN_BMILK_H
#define CHICKEN_BMILK_H

#include "SideProduct.h"
#include "LinkedList.h"
/**
 * Kelas ChickenButtermilk, kelas riil turunan side product.
 * Terbuat dari chicken meat dan cow milk
 */
class ChickenButterMilk : public SideProduct{
    public:
      static LinkedList<Product*> recipe;
    /**
     * initRecipe.
     * Melakukan inisiasi resep
     */
    static void initRecipe();
    /**
     * Konstruktor ChickenButtermilk.
     * Melakukan pemanggilan validasi resep sebelum pembuatan objek
     */
    ChickenButterMilk();
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
