#include <iostream>
#include <fstream>
using namespace std;

const int NUM_ROWS = 10;
const int NUM_COLS = 10;
char grid[NUM_ROWS][NUM_COLS];

int main()
{
    // Create input file stream object
    ifstream fin;
    // Open smiley.txt
    fin.open("smiley.txt");

    // Nearly every double-nested loop structure
    //    to loop over a list will look like this.
    // Let i take on the row value.
    // Let j take on the column value.
    // Start at the top-left corner and get
    //    every value in the first row.
    //    Then, start back at column 0 and get
    //    every value in the second row. Etc.
    for(int i = 0; i < NUM_ROWS; i++)
    {
        for(int j = 0; j < NUM_COLS; j++)
        {
            fin >> grid[i][j];
        }
    }

    // Notice the same looping structure again!
    // This time, we are outputting the grid.
    for(int i = 0; i < NUM_ROWS; i++)
    {
        for(int j = 0; j < NUM_COLS; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    // Close any open file streams
    fin.close();

    return 0;
}