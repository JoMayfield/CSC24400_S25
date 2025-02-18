#include <iostream>
using namespace std;

class Coordinate
{ 
    public:
        int x;
        int y;

        Coordinate() {}
        Coordinate(int a, int b) {x = a; y = b;}
};

int main()
{
    Coordinate c1 = Coordinate();

    cout << c1.x << ", " << c1.y << endl;

    return 0;
}
