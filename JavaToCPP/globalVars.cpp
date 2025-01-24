#include <iostream>
using namespace std;

// myVar is a GLOBAL variable
int myVar = 5;

// Example of a global constant
const int MAX_ROWS = 200;


void myFunc()
{
    // Sets the GLOBAL variable myVar to 71
    myVar = 71;

    // Declares a variable myVar that is LOCAL
    //    to myFunc() and sets its value to 71
    //int myVar = 71;

    // If declared locally, myVar refers to the
    //    local myVar.
    // Else, it refers to the global myVar.
    cout << "In function: " << myVar << endl;
    return;
}

int main()
{
    // Sets the GLOBAL myVar to 99
    myVar = 99;

    // Prints the value of the GLOBAL myVar
    cout << "In main(): " << myVar << endl;

    // Declares a variable myVar that is LOCAL
    //    to main()
    int myVar = 100;

    // Calls the function we defined
    // (Again, notice lack of dot-notation
    //    because myFunc() is NOT a class method)
    myFunc();

    // Prints out the value of the newly created
    //    LOCAL (to main()) myVar
    // If we hadn't declared myVar locally,
    //    this line would print out the global myVar.
    cout << "In main(): " << myVar << endl;
    
    return 0;
}