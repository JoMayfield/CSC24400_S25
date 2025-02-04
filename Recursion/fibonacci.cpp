/*
 * This program demonstrates using recursion
 *    to solve for the n-th Fibonacci number.
*/
#include <iostream>
using namespace std;

// MATHEMATICALLY:
// fib(1) = 1
// fib(2) = 1
// fib(n) = fib(n-1) + fib(n-2)

// This function recursively computes the n-th
//    Fibonacci number.
// Takes one integer argument, n.
// Returns an integer representing the n-th
//    Fibonacci number.
int fib(int n)
{
    // BASE CASE(S)
    // fib(1) = 1
    // fib(2) = 1
    if(n <= 2)
        return 1;

    // RECURSIVE CASE
    // fib(n) = fib(n-1) + fib(n-2)
    return fib(n-1) + fib(n-2);
}

int main()
{
    // Let user specify number
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Compute and print the n-th Fibonacci number
    cout << "The " << number <<"st/nd/rd/th"
         << " Fibonacci number is: ";
    cout << fib(number) << endl;

    return 0;
}
