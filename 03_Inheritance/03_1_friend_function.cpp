#include <iostream>
using namespace std;

class Rectangle
{
  int width, height;

public:
  Rectangle() {}
  Rectangle(int width, int height)
  {
    this->width = width;
    this->height = height;
  }

  int area()
  {
    return this->height * this->width;
  }

  friend Rectangle duplicate(const Rectangle &);
};

Rectangle duplicate(const Rectangle &param)
{
  Rectangle res;
  res.width = param.width * 2;
  res.height = param.height * 2;
  return res;
}

int main()
{
  Rectangle r1;
  Rectangle r2(2, 3);
  cout << r2.area() << endl;
  r1 = duplicate(r2);
  cout << r1.area() << endl;
  return 0;
}