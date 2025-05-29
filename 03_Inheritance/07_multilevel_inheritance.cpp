#include <iostream>
using namespace std;

class Polygon
{
protected:
  int height, width;
};

class Triangle : public Polygon
{
public:
  void set_values(int h, int w)
  {
    height = h;
    width = w;
  }
};

class TriangleOutput : public Triangle
{
public:
  void print()
  {
    cout << height << " " << width << endl;
  }
  void printArea()
  {
    cout << height * width / 2;
  }
};

int main()
{
  TriangleOutput t;
  t.set_values(2, 3);
  t.print();
  t.printArea();
  return 0;
}