#include <iostream>
using namespace std;

class Student
{
  string name;
  int roll, age;

public:
  Student(string name, int roll, int age, int &count)
  {
    this->name = name;
    this->roll = roll;
    this->age = age;
    count++;
  }

  void display()
  {
    cout << "Name: " << name << ", Roll: " << roll << ", Age: " << age << endl;
  }
};

int main()
{
  int count = 0;
  Student *s1 = new Student("Aniket", 10, 22, count);
  Student *s2 = new Student("John", 11, 23, count);
  cout << "Total Students: " << count << endl;
  s1->display();
  s2->display();
}