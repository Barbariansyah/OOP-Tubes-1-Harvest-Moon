#include "Product.h"
/**
 * Konstruktor product.
 * @param _price harga yang ditentukan
 * @param _name nama produk
 */
Product::Product(double _price, string _name){
  price = _price;
  name = _name;
}
/**
 * Getter harga.
 * Mengembalikan nilai harga dari suatu produk
 * @return harga produk
 */
double Product::getPrice() const{
  return price;
}
