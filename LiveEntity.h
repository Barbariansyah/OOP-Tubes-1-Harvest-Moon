#ifndef LIVE_ENTITY_H_
#define LIVE_ENTITY_H_

#include "Entity.h"

//! Kelas LiveEntity
/*!
    Kelas LiveEntity, merupakan Abstract Base Class (ABC)
    untuk kelas entitas yang merupakan makhluk hidup.
   
   Memiliki pure virtual method yaitu Move() 
*/
class LiveEntity : public Entity {
        
        protected :

        public :

        //! Pure virtual Move()
        /*!
        Digunakan untuk melakukan perpindahan pada map 
        Akan diimplementasikan sebagai pergerakan random farm animal
        dan pergerakan sesuai input pada player
        TBD!
        */
        virtual void Move() = 0;
        virtual void Move(string _direction) = 0;

    };

#endif