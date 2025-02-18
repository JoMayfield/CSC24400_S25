#include <iostream>
#include "Coordinate.hpp"
using namespace std;

int main()
{
  //Coordinate c1 = Coordinate(1, 42);
  Coordinate c1(1, 42);
  //    c1.x = 1;
    c1.printCoordMethod();

    printCoordFunction(c1);

    Coordinate c2(2,3);

    Coordinate c3;

    // goal: c3 = c1+c2;
    //Coordinate add(const Coordinate &other) const;
    //c3 = c1.add(c2);
    //c3 =c1.operator+(c2);
    c3 = c1+c2;

    /*
    c3 = c1 + 3;
    c3 = 3 + c1;
    */

    
    cout << "Sum is: "; 
    c3.printCoordMethod();
    cout << endl;

    int dotProd = c1*c2;

    cout << "c1*c3=" << dotProd << endl;
    
    
    return 0;
}
