/*
* This program showcases a little bit of arrays in C++.
*/
#include <iostream>
using namespace std;

int main() {

    // Declares an int array of size 10 without specifying
    //    the contents
    int myArr[10];

    // Declares an int array (of size 4) holding the integers
    //     integers 5, 6, 7, and 8
    int myArr2[] = {5, 6, 7, 8};
    
    // None of the following (commented-out) lines work
    // Remember that arrays are NOT objects in C++
    //cout << myArr2.length;
    //cout << myArr2.length();
    //cout << len(myArr2);
    
    // This will calculate the number of elements in an array
    cout << sizeof(myArr2) / sizeof(int) << endl;

    return 0;
}
