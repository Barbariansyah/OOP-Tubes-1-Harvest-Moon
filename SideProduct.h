#ifndef SIDE_PRODUCT_H
#define SIDE_PRODUCT_H


#include "Product.h"
#include "LinkedList.h"
#include "DuckEgg.h"
#include "GoatMilk.h"
#include "DuckMeat.h"
#include "RabbitMeat.h"
#include "CowMeat.h"
#include "GoatMeat.h"
#include "ChickenMeat.h"
#include "CowMilk.h"
#include "ChickenEgg.h"
#include "DinoEgg.h"

/**
 * Abstract base class SideProduct.
 * Kelas turunan dari product untuk produk olahan/hasil mixer
 */
class SideProduct : public Product{
  public:
    /**
     * Konstruktor side product.
     * @param _price harga yang ditentukan dari barang yang dibuat
     * @param _name nama produk
     */
    SideProduct(double _price, string _name);
    /**
     * Implementasi method Print.
     * Method ini mencetak produk sesuai format side product
     */
    void Print();
};

#endif
