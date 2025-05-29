#include <iostream>
using namespace std;

class Complex
{
  int real, img;

public:
  Complex() {}
  Complex(int r, int i) : real(r), img(i) {}
  Complex operator+(Complex &c)
  {
    Complex co;
    co.real = this->real + c.real;
    co.img = this->img + c.img;
    return co;
  }
  Complex operator-(Complex &c)
  {
    Complex co;
    co.real = this->real - c.real;
    co.img = this->img - c.img;
    return co;
  }
  void display()
  {
    cout << real << "+" << img << "i" << endl;
  }
};

int main()
{
  Complex c1(2, 3);
  Complex c2(5, 6);
  Complex c3 = c1 + c2;
  Complex c4 = c1 - c2;
  c1.display();
  c2.display();
  c3.display();
  c4.display();
  return 0;
}