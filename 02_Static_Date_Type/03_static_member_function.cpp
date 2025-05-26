#include <iostream>
using namespace std;

class Customer
{
  string name;
  int balance;
  static int totalCustomers;
  static int totalBalance;

public:
  Customer(string name, int balance)
  {
    this->name = name;
    this->balance = balance;
    totalCustomers++;
    totalBalance += balance;
  }

  static void getTotalCustomers()
  {
    cout << "Total Customers: " << totalCustomers << endl;
  }

  static void getTotalBalance()
  {
    cout << "Total Balance: " << totalBalance << endl;
  }

  void deposit(int amount)
  {
    balance += amount;
    totalBalance += amount;
  }

  void withdraw(int amount)
  {
    if (amount <= balance && amount > 0)
    {
      balance -= amount;
      totalBalance -= amount;
    }
    else
    {
      cout << "Insufficient balance!" << endl;
    }
  }

  void display()
  {
    cout << "Name: " << name << ", Balance: " << balance << endl;
  }
};

int Customer::totalCustomers = 0; // static variable definition and initialization
int Customer::totalBalance = 0;   // static variable definition and initialization

int main()
{
  Customer *c1 = new Customer("Alice", 1000);
  Customer *c2 = new Customer("Bob", 2000);

  Customer::getTotalCustomers();
  Customer::getTotalBalance();

  c1->display();
  c2->display();

  c1->deposit(500);
  c2->withdraw(300);

  Customer::getTotalBalance();
}