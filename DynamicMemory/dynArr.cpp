// This file introduces dynamically allocated arrays
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    // The following is not permitted by C++.
    // g++ (the compiler) will let us, though.
    // Uncomment the next line and compile with the -pedantic flag to see more info
   // int myArr[n];
   
   // The proper way to declare an array of unknown size
   // ...using pointers!
   // Arrays can decay into a pointer to their first element,
   //    so that's kind of where this logic comes from
   // myArr is a pointer to an integer, specifically the first integer
   //    in the array
   int* myArr = new int[n];
   
    // We can index into myArr like any other array
    for(int i = 0; i < n; i++)
    {
        myArr[i] = i;
    }
    
    // We can also do pointer arithmetic
    for(int i = 0; i < n; i++)
    {
        //cout << myArr[i] << endl; // Normal way of indexing
        
        // Pointer arithmetic
        // Add i to the address to get the i-th element's location
        // Then de-reference to get the element itself
        cout << *(myArr + i) << endl;
    }

    cout << endl;
    // Printing the array will print the address of the first element
    cout << myArr << endl;
    cout << &(myArr[0]) << endl;
    
    // If we use new, we have to use delete!
    // Use "delete[]" for arrays
    delete[] myArr;

    return 0;
}
