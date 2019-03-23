#include "FarmProduct.h"
#include <iostream>
/**
 * Konstruktor farm product.
 * @param _price harga dari produk hasil interact/kill
 * @param _name nama produk
 */
FarmProduct::FarmProduct(int _price, string _name):Product(_price, _name){};
/**
 * Implementasi method Print.
 * Method ini mencetak produk sesuai format farm product
 */
void Print(){
  cout<<"Farm Product"<<endl;
  cout<<"Name   : "<<name<<endl;
  cout<<"Price  : "<<price<<endl;
};
