// This file shows the address-of operator and a little bit of how
//    memory is organized in the stack
// Variables stored in the stack are adjacent to each other in memory.
#include <iostream>
using namespace std;

int main()
{
    int val1 = 1; 
    int val2 = 2;
    int val3 = 3;
    int val4 = 100;
    
    // Notice that each of these addresses are 4 bytes away from each other
    // (This is because ints take up 4 bytes of space)
    cout << &val1 << endl;
    cout << &val2 << endl;
    cout << &val3 << endl;
    cout << &val4 << endl;
    
    return 0;
}
