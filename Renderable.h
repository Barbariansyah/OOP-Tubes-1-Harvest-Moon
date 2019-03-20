//! Kelas Renderable
/*!
   Merupakan Abstract Base Class (ABC)
   untuk melakukan output pada setiap objek yang menginheritnya
   Memiliki sebuah pure virtual method Render()
*/
#ifndef RENDERABLE_H_
#define RENDERABLE_H_

#include <string>
using namespace std;

class Renderable {

    protected :

    public :

        //! Pure virtual method Render()
        /*!
        Digunakan untuk mengeluarkan string pada map
        TBD!
        */
        virtual string Render() = 0;

};

#endif