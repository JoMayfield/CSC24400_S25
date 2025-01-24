/*
* This program showcases the syntax for loops in C++.
*/
#include <iostream>
using namespace std;

int main() {

    // For-loop to print out the numbers [1, 10)
    // for(start; stop; change)
    for(int i=0; i < 10; i++)
    {
        cout << i << endl;
    }
    
    // While-loop to print out the numbers [1, 10)
    int i = 0; // start
    while(i < 10) // while(stop)
    {
        cout << i << endl;
        i++; // change
    }

    return 0;
}
