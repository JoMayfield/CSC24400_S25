// This program introduces pointers
#include <iostream>
using namespace std;

int main() {
  int val = 4; // val is a int variable
  int* intPtr; // intPtr is a pointer to an int variable
 
  // Set intPtr to the ADDRESS-OF val
  intPtr = &val;

  cout << val << endl; // Outputs 4
  cout << *intPtr << endl; // Outputs 4
 
  // Assign 7 to the int variable pointed to by val
  *intPtr = 7;
 
  cout << val << endl; // Outputs 7
  cout << *intPtr << endl; // Outputs 7
 
  return 0;
}

