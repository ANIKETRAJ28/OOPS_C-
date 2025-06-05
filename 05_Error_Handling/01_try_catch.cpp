#include <iostream>
using namespace std;

class Customer
{
  string name;
  int balance, account_number;

public:
  Customer(string n, int b, int a) : name(n), balance(b), account_number(a) {}

  void deposite(int amount)
  {
    if (amount <= 0)
    {
      throw "Can not deposite amount less than 1\n";
    }
    balance += amount;
    cout << "Amount creadit successfully\n";
  }

  void withdraw(int amount)
  {
    if (amount <= 0)
      throw "Can not withdraw money less than 1\n";
    if (amount > balance)
      throw "Insufficient balance\n";
    balance -= amount;
    cout << "Amount debited successfully\n";
  }
};

int main()
{
  Customer c1("Rohit", 5000, 10);
  try
  {
    c1.deposite(500);
    c1.deposite(-10);
    c1.withdraw(10000);
  }
  catch (const char *c)
  {
    cout << "Exception occured: " << c;
  }
  return 0;
}