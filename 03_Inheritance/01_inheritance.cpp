#include <iostream>
using namespace std;

class Base
{
  int a;

protected:
  int b;

public:
  int c;

  Base(int a, int b, int c)
  {
    this->a = a;
    this->b = b;
    this->c = c;
  }
};

int main()
{
  Base obj = Base(1, 2, 3);
  // cout<<obj.a<<endl; // private member cannot be accessed
  // cout<<obj.b<<endl; // protected member cannot be accessed
  cout << obj.c << endl; // public member can be accessed
}