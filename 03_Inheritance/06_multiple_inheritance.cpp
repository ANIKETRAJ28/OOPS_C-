#include <iostream>
using namespace std;

class Polygon
{
protected:
  int height, width;

public:
  void set_values(int h, int w)
  {
    height = h;
    width = w;
  }
};

class Output
{
public:
  void print(int i)
  {
    cout << i << endl;
  }
};

class Triangle : public Polygon, public Output
{
public:
  int area()
  {
    return height * width / 2;
  }
};

class Rectangle : public Polygon, public Output
{
public:
  int area()
  {
    return height * width;
  }
};

int main()
{
  Triangle t;
  Rectangle r;
  t.set_values(10, 2);
  r.set_values(10, 2);
  t.print(t.area());
  r.print(r.area());
  return 0;
}