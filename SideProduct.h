#ifndef SIDE_PRODUCT_H
#define SIDE_PRODUCT_H

#include "Product.h"

/**
 * Abstract base class SideProduct.
 * Kelas turunan dari product untuk produk olahan/hasil mixer
 */
class SideProduct : public Product{
  public:
    /**
     * Konstruktor side product.
     * @param _Price harga yang ditentukan dari barang yang dibuat
     * @param _name nama produk
     */
    SideProduct(int _price, string _name);
    /**
     * Implementasi method Print.
     * Method ini mencetak produk sesuai format side product
     */
    void Print();
};

#endif
