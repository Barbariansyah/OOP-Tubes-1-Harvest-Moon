/* Kelas Renderable, merupakan Abstract Base Class (ABC)
   untuk melakukan output pada setiap objeknya */
#ifndef RENDERABLE_H_
#define RENDERABLE_H_

#include <string>
using namespace std;

class Renderable {

    protected :

    public :

        virtual string Render() = 0;

};

#endif