/*
* This program showcases the different between
* pass-by-value and pass-by-reference.
*/
#include <iostream>
using namespace std;

// This function increments an integer.
// It returns nothing.
// It takes one integer argument named x.
//    x represents the number to be incremented.
void incrementVar(int &x)
// !!! TRY IT !!! : Try removing the "&" to go back to
//    pass-by-value and see how that affects the program.
{
    x++;
    cout << "\tIn function: " << x << endl;
    return;
}

int main() {

    int y = 84;
    
    // Testing the value of y
    cout << "Before: " << y << endl;
    incrementVar(y);
    cout << "After: " << y << endl;

    return 0;
}
