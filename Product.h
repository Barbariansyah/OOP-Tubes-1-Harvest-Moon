#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string.h>
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
     * Getter nama.
     * Mengembalikan nama dari suatu produk
     * @return nama produk
     */
    string getName() const;
    /**
     * Pure virtual method Print.
     * Method ini mencetak produk yang tampilannya akan berbeda antara side product dengan farm product
     */
    virtual void Print() = 0;
    /**
     * Override operator ==.
     * @return boolean perbandingan dua produk
     */
    friend bool operator==(const Product& p1, const Product& p2);

};

#endif
