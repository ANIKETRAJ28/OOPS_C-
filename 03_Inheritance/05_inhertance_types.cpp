#include <iostream>
using namespace std;

class Polygon
{
protected:
  int height, width;

public:
  void set_values(int height, int width)
  {
    this->height = height;
    this->width = width;
  }
};

class Triangle : public Polygon
{
public:
  int area()
  {
    return height * width / 2;
  }
};

class Rectangle : public Polygon
{
public:
  int area()
  {
    return height * width;
  }
};

int main()
{
  Rectangle r;
  r.set_values(2, 3);
  cout << r.area() << endl;
  Triangle t;
  t.set_values(2, 3);
  cout << t.area() << endl;
  return 0;
}