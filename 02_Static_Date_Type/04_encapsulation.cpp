#include <iostream>
using namespace std;

class Customer
{
  string name;
  int balance;

public:
  Customer(string name, int balance)
  {
    this->name = name;
    this->balance = balance;
  }

  void deposite(int balance)
  {
    if (balance > 0)
    {
      this->balance += balance;
      cout << "Deposited: " << balance << ", New Balance: " << this->balance << endl;
    }
    else
    {
      cout << "Invalid deposit amount!" << endl;
    }
  }

  void withdraw(int balance)
  {
    if (balance > 0 && balance <= this->balance)
    {
      this->balance -= balance;
      cout << "Withdrawn: " << balance << ", New Balance: " << this->balance << endl;
    }
    else
    {
      cout << "Invalid withdrawal amount or insufficient balance!" << endl;
    }
  }

  void display()
  {
    cout << "Customer Name: " << name << ", Balance: " << balance << endl;
  }
};

int main()
{
  Customer *c1 = new Customer("Alice", 1000);
  c1->display();
  c1->deposite(500);
  c1->withdraw(200);
  c1->withdraw(1500); // Invalid withdrawal
  c1->deposite(-100); // Invalid deposit
  c1->display();
}