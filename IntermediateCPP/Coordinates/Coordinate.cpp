// Have to include Coordinate.hpp to be able
//    to use Coordinate class
#include "Coordinate.hpp"

#include <iostream>
using namespace std;

// CLASS METHOD EXAMPLE FOR PRINTING (x, y)
// This method prints a coordinate out as (x, y).
// It takes no arguments.
// It returns nothing.
// NOTICE: We must scope this method to the
//    Coordinate class!
void Coordinate::printCoordMethod()
{
    // NOTICE: We can access x and y (instance attrs)
    //    directly since this is a class method.
    cout << "(" << x << ", " << y << ")" << endl;
    return;
}

// This method overloads the + operator.
// It takes one Coordinate argument.
// It returns a Coordinate representing the sum
//    of the calling Coordinate and the Coordinate
//    argument.
Coordinate Coordinate::operator+(const Coordinate& p2) const
{
    Coordinate sum = Coordinate();
    sum.x = x + p2.x;
    sum.y = y + p2.y;

    return sum;
}

// This function overloads the << operator.
// It takes one output stream argument and
//    one Coordinate argument.
// It returns the output stream, which allows us
//    to chain calls to op<<.
//    E.g. cout << c << "!" << endl;
// This function is also a good example of
//    return-by-reference.
// Notice there is no scoping because op<< is
//   NOT a method of the Coordinate class.
ostream& operator<<(ostream &os, const Coordinate &c)
{
    // Use os like any other output stream,
    //    such as cout or fout
    os << "(" << c.x << ", " << c.y << ")" << endl;
    return os;
}