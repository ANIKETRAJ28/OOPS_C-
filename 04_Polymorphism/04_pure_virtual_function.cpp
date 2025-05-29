#include <iostream>
#include <vector>
using namespace std;

class Animal
{
public:
  virtual void speak() = 0; // to make a function abstract class or pure virtual function
};

class Dog : public Animal
{
public:
  void speak()
  {
    cout << "Bark\n";
  }
};

class Cat : public Animal
{
public:
  void speak()
  {
    cout << "Meow\n";
  }
};

int main()
{
  // Animal a; // abstract class object cannot be created
  vector<Animal *> v;
  v.push_back(new Dog());
  v.push_back(new Cat());
  v.push_back(new Dog());
  v.push_back(new Cat());
  for (int i = 0; i < v.size(); i++)
  {
    v[i]->speak();
  }
  return 0;
}