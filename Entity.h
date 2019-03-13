/* Kelas entity
   memiliki atribut posisi X dan posisi Y */

#ifndef ENTITY_H_
#define ENTITY_H_

#include "Renderable.h"

class Entity : public Renderable {

    protected :

        int pos_x;
        int pos_y;

    public :

        virtual int GetX();
        virtual int GetY();

};
#endif
   