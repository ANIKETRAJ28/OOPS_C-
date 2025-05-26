#include <iostream>
using namespace std;

class Student
{
  string name;
  int age, roll;
  string grade;

public:
  void set_name(string s)
  {
    name = s;
  }
  void set_age(int x)
  {
    age = x;
  }
  void set_roll(int r)
  {
    roll = r;
  }
  void set_grade(string g)
  {
    grade = g;
  }

  string get_name()
  {
    return name;
  }
  int get_age()
  {
    return age;
  }
  int get_roll()
  {
    return roll;
  }
  string get_grade()
  {
    return grade;
  }

  void display()
  {
    cout << name << " " << age << " " << roll << " " << grade << "\n";
  }
};

int main()
{
  Student s1;
  s1.set_name("Aniket");
  s1.set_age(22);
  s1.set_roll(10);
  s1.set_grade("A");
  cout << s1.get_name() << "\n";
  cout << s1.get_age() << "\n";
  cout << s1.get_roll() << "\n";
  cout << s1.get_grade() << "\n";
  s1.display();
  return 0;
}