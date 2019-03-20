#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

/**
 * Abstract base class Product.
 * Memiliki atribut price yang dimiliki semua product turunan
 */
class Product{
  protected:
    double price; /*<! Atribut harga dari sebuah produk*/
    string name;
  public:
    /**
     * Konstruktor product.
     * @param _price harga yang ditentukan
     * @param _name nama produk
     */
    Product(double _price, string _name);
    /**
     * Getter harga.
     * Mengembalikan nilai harga dari suatu produk
     * @return harga produk
     */
    double getPrice() const;
    /**
     * Pure virtual method Print.
     * Method ini mencetak produk yang tampilannya akan berbeda antara side product dengan farm product 
     */
    virtual void Print() = 0;
};

#endif
