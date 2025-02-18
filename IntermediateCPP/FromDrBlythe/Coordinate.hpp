#ifndef      _COORDINATE_HPP
#define       _COORDINATE_HPP // 1

#include <iostream>
using namespace std;

//3 - copy over the class
class Coordinate
{
private:
        int x;
        int y;

public:
  Coordinate() {}
  Coordinate(int a, int b) {x = a; y = b;}

  int getX() const {return x;}
  int getY() const {return y;}

  void setX(int toNewX)  {x = toNewX;}

  Coordinate operator+(const Coordinate &other) const;
  Coordinate operator+(int value) const;

  int operator*(const Coordinate &other) const;
  
  void printCoordMethod();

  friend void printCoordFunction(const Coordinate &someCoordinate);
};

void printCoordFunction(const Coordinate &someCoordinate);

#endif // 2
