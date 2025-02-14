// Have to include Coordinate.hpp to be able
//    to use Coordinate class
#include "Coordinate.hpp"

#include <iostream>
using namespace std;

// STANDALONE FUNCTION EXAMPLE FOR PRINTING (x, y)
// This function prints a coordinate out as (x, y).
// It takes one Coordinate argument.
// It returns nothing.
// NOTICE: We do not need to scope this function
//    because it is not a class method.
// NOTICE: We need a Coordinate object because
//    there is no Coordinate calling object
//    like there is with one of the class methods.
void printCoordFunction(Coordinate p)
{
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
    return;
}

// PASS-BY-VALUE VERSUS PASS-BY-REFERENCE
// This function changes the x and y values of a 
//    coordinate such that its new value is
//    (x+xOffset, y+yOffset).
// It takes one Coordinate argument and two integer
//    arguments representing the x and y offsets.
// It returns nothing.
// NOTICE: If we pass-by-value (default behavior
//    in C++), the changes to p do NOT persist 
//    after we leave this function. That's not 
//    what we want in this case.
//    The solution is to pass p by reference,
//    which means we precede it with an ampersand.
// NOTICE: Since we are not changing xOffset or
//    yOffset throughout this function, we should
//    make them constant parameters to enforce
//    that they should not be changed.
//    We do this by declaring xOffset and yOffset
//    to be "const" parameters.
void translate(Coordinate &p, const int xOffset, const int yOffset)
{
    p.x = p.x + xOffset;
    p.y += yOffset; // Just another way to increment
    return;
}

int main()
{
    // Declare and initialize two coordinate
    //    objects
    Coordinate c1 = Coordinate(3, 17);
    Coordinate c2 = Coordinate(25, 11);

    // Syntax differences in calling class
    //    methods and standalone functions
    c1.printCoordMethod();
    printCoordFunction(c1);
    cout << endl << endl;

    // Testing operator+()
    Coordinate c3 = Coordinate();
    // The following two lines are equivalent!
    c3 = c1.operator+(c2);
    c3 = c1 + c2;

    // Print c3 before and after translating
    //    it by (1, 2).
    c3.printCoordMethod();
    translate(c3, 1, 2);
    c3.printCoordMethod();
    cout << endl << endl;


    // We can now cout a Coordinate!
    Coordinate c4 = Coordinate(100, 100);
    cout << c4 << "!!!" << endl << endl;

    return 0;
}