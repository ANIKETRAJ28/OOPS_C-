#include <iostream>
using namespace std;

class Student
{
  string name;
  int age, roll;
  string grade;
  int *data; // for dynamic memory allocation to test the destructor

public:
  // constructor overloading
  // default constructor
  Student()
  {
    name = "Aniket";
    age = 22;
    roll = 10;
    grade = "A";
    // for destructor
    data = new int[10]; // dynamically allocating memory
    cout << name << "\n";
  }
  // parameterized constructor
  Student(string n, int a)
  {
    this->name = n;
    this->age = a;
    this->roll = 10;
    this->grade = "A";
    cout << this->name << "\n";
  }

  // Student(string n, int a, int r, string g)
  // {
  //   name = n;
  //   age = a;
  //   roll = r;
  //   grade = g;
  // cout<<name<<"\n";
  // }
  // copy constructor
  // if we do not implement copy constructor, compiler creates a default copy constructor
  // if we do not pass the reference of the object, it creates a new object and copies the values
  // and this will do same for new created object and it will create an infinite loop
  // so we need to pass the reference of the object to the copy constructor
  Student(Student &s)
  {
    this->name = s.name;
    this->age = s.age;
    this->roll = s.roll;
    this->grade = s.grade;
    cout << this->name << "\n";
  }

  // inline constructor
  Student(string n, int a, int r, string g) : name(n), age(a), roll(r), grade(g) { cout << name << "\n"; }
  // inline Student(string n, int a, int r, string g) : name(n), age(a), roll(r), grade(g) {}

  // destructor
  // it is the opposite of constructor, which is automatically called when the object is destroyed
  // it is used to deallocate the heap memory or dynamic memory allocated by the constructor
  // it does not take any arguments, does not return any value and can not be overloaded
  // class automatically creates a destructor for the class if we do not create one
  // but it is not a good practice to use the default destructor
  // because it does not deallocate the memory allocated by the constructor
  ~Student()
  {
    delete data; // deallocating the memory
    cout << "Destructor called for " << name << "\n";
  }

  void display()
  {
    cout << name << " " << age << " " << roll << " " << grade << "\n";
  }
};

int main()
{
  Student s1; // default constructor is called

  Student s2("Ritul", 23); // parameterized constructor is called

  Student s3;
  // just like class creates the default constructor, it also creates a copy constructor
  s3 = s2; // copy constructor is called, before implementing copy constructor

  Student s4(s1); // copy constructor is called

  Student s5("Aniket", 22, 10, "A"); // inline constructor is called

  Student *s6 = new Student("Aniket", 22, 10, "A"); // dynamic memory allocation
  // destructor is not called here because we are not deleting the object
  // we need to delete the object to call the destructor
  delete s6; // destructor is called here

  // constructor is called in in straight order, but destructor is called in reverse order
  // because there can be dependency of the objects
  // for example, if we create an object of class A and then create an object of class B
  // and class B has a constructor which takes an object of class A as an argument
  // then class A will be destroyed first and then class B will be destroyed
  return 0;
}