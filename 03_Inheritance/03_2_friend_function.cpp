#include <iostream>
using namespace std;

class Square
{
  int side;

public:
  Square(int side)
  {
    this->side = side;
  }

  int area()
  {
    return side * side;
  }
};

class Rectangle
{
  int width, height;

public:
  Rectangle(int width, int height)
  {
    this->width = width;
    this->height = height;
  }

  int area()
  {
    return width * height;
  }

  friend Square change(const Rectangle &r);
};

Square change(const Rectangle &rect)
{
  Square sqrt(rect.height);
  return sqrt;
}

int main()
{
  Rectangle rect(2, 3);
  Square sqrt = change(rect);
  cout << rect.area() << endl;
  cout << sqrt.area() << endl;
  return 0;
}