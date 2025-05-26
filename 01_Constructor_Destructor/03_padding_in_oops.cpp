#include <iostream>
using namespace std;

class S
{
  int b;
};

class T
{
  char c;
};

class U
{
  int b;
  char c;
};

int main()
{
  S s;
  T t;
  U u;
  cout << sizeof(s) << " " << sizeof(t) << " " << sizeof(u) << "\n";
  /**
   * Here we can see that the size of class using only int data type is of 4 byte size
   * and the class using only char data type is of 1 byte size.
   * But the class using int and char data type does not have 5 size.
   * Here is the concept of padding. By padding and greedly allignment of data types in the class
   * helps to make the class implementation efficient and faster.
   * Resource: https://medium.com/@xsankalp13/padding-and-greedy-alignment-d2e3a843c35
   */
  return 0;
}