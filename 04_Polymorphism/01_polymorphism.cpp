#include <iostream>
using namespace std;

class Area
{
public:
  int calculateArea(int l, int b)
  {
    return l * b;
  }

  int calculateArea(int s)
  {
    return s * s;
  }

  double calculateArea(double r)
  {
    return 3.14 * r * r;
  }
};

int main()
{
  Area a;
  cout << a.calculateArea(2) << endl;
  cout << a.calculateArea(2, 3) << endl;
  cout << a.calculateArea(2.0) << endl;
  return 0;
}