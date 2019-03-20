#ifndef PANCAKE_H
#define PANCAKE_H

#include "SideProduct.h"
/**
 * Kelas Pancake, kelas riil turunan side product.
 * Terbuat dari chicken egg dan cow milk
 */
class Pancake : public SideProduct{
  public:
    /**
     * Konstruktor pancake.
     * Melakukan pemanggilan validasi resep sebelum pembuatan objek
     */
    Pancake();
};

#endif