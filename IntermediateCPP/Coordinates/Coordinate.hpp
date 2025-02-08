#ifndef      _COORDINATE_HPP
#define       _COORDINATE_HPP // 1

#include <iostream>
using namespace std;

//3 - copy over the class
class Coordinate
{
    public:
        int x;
        int y;
        
        Coordinate() {}
        Coordinate(int a, int b) {x = a; y = b;}
        
        void printCoordMethod();
};


#endif // 2
