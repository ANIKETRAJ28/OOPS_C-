#include <iostream>
using namespace std;

class Student
{
  // by default it is set to private access modifier
private:
public: // public access modifier
  string name;
  int age, roll;
  string grade;
};

int main()
{
  Student s1;
  s1.name = "Aniket";
  s1.age = 22;
  s1.roll = 10;
  s1.grade = "A";
  cout << s1.name << " " << s1.age << " " << s1.roll << " " << s1.grade << "\n";
  return 0;
}