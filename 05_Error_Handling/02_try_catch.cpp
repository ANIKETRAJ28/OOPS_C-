#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  try
  {
    if (b == 0)
      throw "Divisibility by 0 is not possible";
    cout << a / b << endl;
  }
  catch (const char *c)
  {
    cout << "Error is: " << c;
  }
  return 0;
}