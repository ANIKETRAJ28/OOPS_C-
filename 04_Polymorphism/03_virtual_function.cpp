#include <iostream>
#include <vector>
using namespace std;

class Animal
{
public:
  // virtual function is the function to be called is determined at runtime based on the actual type of the object, not the pointer/reference type.
  virtual void speak()
  {
    cout << "Animal speak\n";
  }
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
  vector<Animal *> v;
  v.push_back(new Dog());
  v.push_back(new Cat());
  v.push_back(new Animal());
  v.push_back(new Dog());
  v.push_back(new Cat());
  for (int i = 0; i < v.size(); i++)
  {
    // during run time, the speak function on the given class will be called respectively.
    // if we donot apply virtual function, for all the classes the speak function on Animal class will be called
    v[i]->speak();
  }
  return 0;
}