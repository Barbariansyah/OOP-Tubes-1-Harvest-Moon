#ifndef RABBIT_MEAT_H
#define RABBIT_MEAT_H

#include "FarmProduct.h"
/**
 * Kelas RabbitMeat, kelas riil turunan farm product.
 * Didapatkan dari aksi kill terhadap farm animal rabbit
 */
class RabbitMeat : public FarmProduct{
  public:
    /**
     * Konstruktor RabbitMeat.
     */
    RabbitMeat();
};

#endif