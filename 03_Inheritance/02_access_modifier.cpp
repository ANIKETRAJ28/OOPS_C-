#include <iostream>
using namespace std;

class Base
{
  int a;

protected:
  int b;

public:
  int c;
};

class Derived1 : public Base
{
  int d;
};

class Derived2 : protected Base
{
  int d;
};

class Derived3 : private Base
{
  int d;
};

int main()
{
  Base obj1;
  // obj1.a = 10; // a is private in Base
  // obj1.b = 20; // b is protected in Base, accessible in Derived classes
  obj1.c = 30; // c is public in Base, accessible here
  cout << "Base c: " << obj1.c << endl;

  Derived1 obj2;
  // obj2.a = 10; // a is private in Base, not accessible
  // obj2.b = 20; // b is protected in Base, accessible in Derived1 with public inheritance
  obj2.c = 40; // c is public in Base, accessible in Derived1
  cout << "Derived1 c: " << obj2.c << endl;

  Derived2 obj3;
  // obj3.a = 10; // a is private in Base, not accessible
  // obj3.b = 20; // b is protected in Base, accessible in Derived2 with protected inheritance
  // obj3.c = 50; // c is public in Base, not accessible in Derived2 due to protected inheritance

  Derived3 obj4;
  // obj4.a = 10; // a is private in Base, not accessible
  // obj4.b = 20; // b is protected in Base, not accessible in Derived3 due to private inheritance
  // obj4.c = 60; // c is public in Base, not accessible in Derived3 due to private inheritance
  return 0;
}