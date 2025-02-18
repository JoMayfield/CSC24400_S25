#include "Coordinate.hpp"
#include <iostream>
using namespace std;

Coordinate
Coordinate::operator+(const Coordinate &other) const
{
  Coordinate answer;
  answer.x = x + other.x;
  answer.y = y + other.y;

  return answer;
}

int
Coordinate::operator*(const Coordinate &other) const
{
  return x*other.x + y*other.y; 
}

void
Coordinate::printCoordMethod()
{
    cout << "(" << x << ", " << y << ")" << endl;
    return;
}

void printCoordFunction(const Coordinate &someCoordinate)
{
  cout << "["  << someCoordinate.x
       << ", " << someCoordinate.y
       << "]" << endl;
  
  //someCoordinate.x++;
}
