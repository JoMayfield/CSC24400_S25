// This program introduces the keywords "new" and "delete"
#include <iostream>
using namespace std;

int main() {
  // Create a pointer to an int that we haven't declared yet
  int* intPtr = new int;
 
  // Assign 5 to the int that intPtr points to
  *intPtr = 5;
 
  cout << *intPtr << endl; // Outputs 5
  cout << intPtr << endl << endl; // Outputs a memory address
 
  // Maybe we want to increment to 6
  //    But this would increment the address,
  //    NOT the int variable itself
  //intPtr++; // Comment this out, and uncomment the next line
  (*intPtr)++; // SOLUTION: De-reference before incrementing!
 
  cout << *intPtr << endl; // Outputs non-sense (maybe 0, maybe not)
  cout << intPtr << endl; // Outputs the next memory address
 
  // Try uncommenting this
  //delete intPtr;
  // It doesn't work if we incremented the memory address because
  //    if so, we altered the memory address of where intPtr was
  //    pointing, and that new memory is not ours to free.
  //    So, because we can't delete it, we end up with a memory leak.
  // If we did just increment the value of the int it's pointing to,
  //    then we would want to delete intPtr

  return 0;
}
