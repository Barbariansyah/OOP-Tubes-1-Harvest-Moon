/* Kelas LiveEntity, merupakan Abstract Base Class (ABC)
   untuk kelas entitas yang merupakan makhluk hidup.
   
   Memiliki pure virtual method yaitu Move() */

#ifndef LIVE_ENTITY_H_
#define LIVE_ENTITY_H_

#include "Entity.h"

class LiveEntity : public Entity {
        
        protected :

        public :

            virtual void Move() = 0;

    };

#endif