// The following two lines and the last line
//    of this file are new!
// They are needed when we define a header file.
#ifndef _COORDINATE_HPP // If it's not defined
#define _COORDINATE_HPP // Define it

#include <iostream>
using namespace std;

// General syntax: class ClassName
class Coordinate
{ 
    // Specify the access (e.g. public or private)
    //    for a whole section at a time
    private:
        // INSTANCE ATTRIBUTES (usually private)
        int x;
        int y;

    public:

        // METHOD DECLARATIONS
        // Default constructor
        Coordinate() {}
        // Parameterized constructor
        //    This is defined "in-line"
        Coordinate(int a, int b) {x = a; y = b;}

        // "set" methods
        void setX(int a) {x = a;}
        void setY(int b) {y = b;}
        
        // "get" methods
        int getX() {return x;}
        int getY() {return y;}
        
        // Return-by-reference example
        // Combining a getter and a setter - this one does both!
        // Looks like a getter, but we use return-by-reference
        int& X() {return x;}

        // Class method to print (x, y)
        void printCoordMethod();

        // Operator overloading
        Coordinate operator+(const Coordinate &p2);
        
        // Return-by-reference example
        Coordinate& scale(const int& val);

        // Friend function but also operator overloading
        // Also return-by-reference
        // This is so we can cout a Coordinate!
        // IMPORTANT FOR PROJECTS 2, 3, AND 4!
        friend ostream& operator<<(ostream &os, const Coordinate &c);
        
        // Friend function
        friend void translate(Coordinate& p, const int& xOffset, const int& yOffset);
}; // <-- NOTICE THE SEMI-COLON


#endif // End the definition
