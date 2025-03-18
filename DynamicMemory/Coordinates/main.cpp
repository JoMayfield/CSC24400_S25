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

// STANDALONE FUNCTION EXAMPLE FOR TRANSLATING
// Coordinate p will be (x + xOffSet,   y + yOffset)
// It takes three arguments:
//    - One Coordinate object p, PBR so we can modify it
//    - An integer representing an offset for the x value, PBCR so it's passed efficiently but won't change
//    - An integer representing an offset for the x value, PBCR so it's passed efficiently but won't change
// Returns nothing (void) because it modifies p directly
void translate(Coordinate& p, const int& xOffset, const int& yOffset)
{
    p.x += xOffset;
    p.y = p.y + yOffset;
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
    
    // Testing operator<<()
    cout << c3 << endl;
    
    // Testing translate()
    Coordinate c4 = Coordinate(5, 4);
    translate(c4, 1, 1);
    cout << c4 << endl;
    
    // Since scale() returns a reference to a Coordinate, we can chain method calls
    c4.scale(10).scale(2);
    cout << c4 << endl;
    
    // "get"
    //cout << c4.x << endl; // Doesn't work because x is private!
    cout << c4.getX() <<endl;
    cout << c4.X() << endl; // X() is a combo getter AND setter!
    
    // "set"
    //c4.x = 5; // Doesn't work because x is private!
    //c4.setX(5); // Works but looks a little silly?
    c4.X() = 5; // X() is a combo getter AND setter! 
    
    // cout updated c4
    cout << c4 << endl;
    
    // Declaring a pointer to a Coordinate
    // Uses * to create a pointer and "new" to allocate space
    Coordinate* coordPtr = new Coordinate(1,2);
    
    // Doesn't work because coordPtr is a POINTER to a Coordinate, NOT a Coordinate
    // X() is not a method that is defined for Coordinate*s, only Coordinates
    //cout << coordPtr.X() << endl;
    
    // Possible solutions:
    // 1. De-reference first to get a Coordinate, and then call X()
    cout << (*coordPtr).X() << endl;
    // 2. Or, use -> notation that de-refences before calling the method
    //      Think of the -> like an arrow (which is what we draw to represent pointers)
    cout << coordPtr->X() << endl;
    
    return 0;
}
