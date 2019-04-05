#ifndef FARM_PRODUCT_H
#define FARM_PRODUCT_H

#include "Product.h"

/**
 * Abstract base class FarmProduct.
 * Kelas turunan dari product untuk produk hasil interact/kill terhadap farm animal
 */
class FarmProduct : public Product{
  public:
    /**
     * Konstruktor farm product.
     * @param _price harga dari produk hasil interact/kill
     * @param _name nama produk
     */
    FarmProduct(double _price, string _name);
    /**
     * Implementasi method Print.
     * Method ini mencetak produk sesuai format farm product
     */
    void Print();
};

#endif
