#ifndef RENDERABLE_H_
#define RENDERABLE_H_

#include <string>
using namespace std;

//! Kelas Renderable
/*!
   Merupakan Abstract Base Class (ABC)
   untuk melakukan output pada setiap objek yang menginheritnya
   Memiliki sebuah pure virtual method Render()
*/
class Renderable {

    protected :
        string GREEN = "\033[92m";
        string BLUE = "\033[94m";
        string RED = "\033[91m";
        string BOLD = "\033[1m";
        string NONE = "\033[0m";
        string YELLOW = "\033[93m";

    public :

        //! Pure virtual method Render()
        /*!
        Digunakan untuk mengeluarkan string pada map
        Diimplementasikan pada setiap entity dan cell karena memiliki tampilannya masing-masing
        */
        virtual string Render() = 0;

};

#endif