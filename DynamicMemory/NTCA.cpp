// This file shows another example of dynamically allocated arrays,
//    specifically, null-terminated character arrays (NTCAs)
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 5;
    
    // Dynamically allocated char array
   char* myArr = new char[n];
   
   // Individually assign elements of myArr
   myArr[0] = 'h';
   myArr[1] = 'e';
   myArr[2] = 'l';
   myArr[3] = 'l';
   myArr[4] = 'o';
   
   // Instead of printing an address, it will print the char array so that
   //    it looks like a string
   cout << myArr << endl;
   
   // Can still treat it like an array
   for(int i = 0; i < n; i++)
   {
      cout << myArr[i] << " ";
   }
   
   return 0;
  }
