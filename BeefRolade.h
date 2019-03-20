#ifndef BEEF_ROLADE_H
#define BEEF_ROLADE_H

#include "SideProduct.h"
/**
 * Kelas BeefRolade, kelas riil turunan side product.
 * Terbuat dari cow meat dan chicken egg.
 */
class BeefRolade : public SideProduct{
  public:
    /**
     * Konstruktor BeefRolade.
     * Melakukan pemanggilan validasi resep sebelum pembuatan objek
     */
    BeefRolade();
};

#endif