#ifndef SIDE_PRODUCT_H
#define SIDE_PRODUCT_H

#include "Product.h"

/**
 * Abstract base class SideProduct.
 * Kelas turunan dari product untuk produk olahan/hasil mixer
 */
class SideProduct : public Product{
  protected:
    const string recipe[];
  public:
    /**
     * Konstruktor side product.
     * @param _Price harga yang ditentukan dari barang yang dibuat
     * @param _name nama produk
     */
    SideProduct(int _price, string _name);
    /**
     * Method untuk validasi apakah sebuah resep dapat dibuat dari bahan yang tersedia.
     * @param ingredients[] array of string dari inventory player
     * @return apakah resep dapat dibuat dari ingredients
     */
    bool validateRecipe(string ingredients[]);
    /**
     * Implementasi method Print.
     * Method ini mencetak produk sesuai format side product 
     */
    void Print();
};

#endif