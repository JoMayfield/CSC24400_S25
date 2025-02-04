/*
 * This program demonstrates two ways to compute 
 *     a factorial: the iterative way and the 
 *     recursive way.
 * This is our first example of a recursive C++
 *    program!
*/
#include <iostream>
using namespace std;

// MATHEMATICALLY:
// 1! = 1
// n! = n * (n-1)!

// RECURSIVE VERSION
// This function recursively calls itself in order
//    to compute the factorial of n.
// Takes one integer argument, n.
// Returns (ultimately) an integer representing
//    n-factorial.
int factorialRecursive(int n)
{
    // BASE CASE
    // 1! = 1
    if(n <= 1)
        return 1;

    // RECURSIVE CASE
    // n! = n*(n-1)!
    return n * factorialRecursive(n-1);
}

// ITERATIVE VERSION
// This function iteratively computes the
//    factorial of n.
// Takes one integer argument, n.
// Returns an integer representing n-factorial.
int factorialIterative(int n)
{
    // a represents our final answer
    int a = 1;

    // Start at 1, multiply by 2, then 3, etc.
    for(int num = 1; num <= n; num++)
    {
        a = a * num;
    }
    return a;
}

int main()
{
    // Declare an int and read in a value for it
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << endl << number << "! is ..." << endl;
    // Compute the factorial of it in two ways
    cout << factorialRecursive(number) << endl;
    cout << factorialIterative(number) << endl;

    return 0;
}
