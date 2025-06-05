#include <iostream>
using namespace std;

class InvalidAmountError : public runtime_error
{
public:
  InvalidAmountError(string msg) : runtime_error(msg) {}
};

class InsufficientBalanceError : public runtime_error
{
public:
  InsufficientBalanceError(string msg) : runtime_error(msg) {}
};

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
      throw InvalidAmountError("Can not deposite amount less than 1\n");
    }
    balance += amount;
    cout << "Amount creadit successfully\n";
  }

  void withdraw(int amount)
  {
    if (amount <= 0)
      throw InvalidAmountError("Can not withdraw money less than 1\n");
    if (amount > balance)
      throw InsufficientBalanceError("Insufficient balance\n");
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
    // c1.deposite(-10);
    c1.withdraw(10000);
  }
  catch (const runtime_error &e)
  {
    cout << "Runtime Exception occured: " << e.what();
  }
  catch (const bad_alloc &e)
  {
    cout << "Memory Exception occured: " << e.what();
  }
  // default catch
  catch (...)
  {
    cout << "Exception occured: ";
  }
  return 0;
}