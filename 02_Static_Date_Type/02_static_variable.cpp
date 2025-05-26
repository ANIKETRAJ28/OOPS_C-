#include <iostream>
using namespace std;

class Student
{
  string name;
  int roll, age;
  // static variable is shared among all objects of the class
  // to access it we need to declare it in public section
  // static int count; // static variable declaration
public:
  static int count; // static variable declaration and definition

  Student(string name, int roll, int age)
  {
    this->name = name;
    this->roll = roll;
    this->age = age;
    count++; // incrementing the static variable
  }

  ~Student()
  {
    count--; // decrementing the static variable when object is destroyed
  }

  void display()
  {
    cout << "Name: " << name << ", Roll: " << roll << ", Age: " << age << endl;
  }
};

int Student::count = 0; // static variable definition and initialization

int main()
{
  Student *s1 = new Student("Aniket", 10, 22);
  Student *s2 = new Student("John", 11, 23);

  // for accessing static variable, we need to initialize it in public section
  cout << "Total Students: " << Student::count << endl; // accessing static variable using class name
  s1->display();
  s2->display();

  delete s1; // free memory
  delete s2; // free memory

  cout << "Total Students after deletion: " << Student::count << endl;
  return 0;
}