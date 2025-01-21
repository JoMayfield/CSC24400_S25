/*
* This is the first program we wrote in C++ (after "Hello,
* World!" of course).
* It showcases some of the differences between C++ and
* Java, such as standalone functions and how to perform 
* file I/O.
*/

// Included so we can get keyboard input and give screen output
#include <iostream>

// Included so we can do file I/O
#include <fstream>

// We want to use the standard namespace (usually)
using namespace std;

// STANDALONE FUNCTION EXAMPLE
// This function prints a greeting to a named individual.
// It returns nothing (since it is void).
// It takes one string argument called name.
//     name represents the individual's name.
void greet(string name)
{
    std::cout << "Hello, " << name << std::endl;
    return;
}

int main() {
    // Create an input file stream object
    ifstream fin;
    
    // Open the input file
    // This line assumes you have a file named in.txt 
    //    that is saved in the same folder as this .cpp file
    fin.open("in.txt");

    // Declare a string variable for the name and read it in
    string name2;
    fin >> name2;
    
    // Call the greet() function to greet the user
    // Notice the lack of object-dot-method notation!!
    //    That is because this is a function, NOT a method.
    greet(name2);
    
    // Every opened file stream should be closed.
    fin.close();

    return 0;
}
