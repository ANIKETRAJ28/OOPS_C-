#include <iostream>
using namespace std;

class Square;

class Rectangle
{
  int width, height;

public:
  int area()
  {
    return width * height;
  }
  void convert(Square q);
};

class Square
{
  friend class Rectangle;
  int side;

public:
  Square(int side)
  {
    this->side = side;
  }
};

void Rectangle::convert(Square a)
{
  width = a.side;
  height = a.side;
}

int main()
{
  Rectangle rect;
  Square sqrt(4);
  rect.convert(sqrt);
  cout << rect.area();
  return 0;
}