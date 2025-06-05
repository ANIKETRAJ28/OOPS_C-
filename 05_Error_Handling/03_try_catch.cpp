#include <iostream>
using namespace std;

int main()
{
  try
  {
    // in some compiler it does not give error for too large input
    long long int *p = new long long int[100000000000];
    cout << "Memory allocation successfully\n";
    delete p;
  }
  // this is the exception calss
  catch (const exception &e)
  {
    // e.what() will print the error
    cout << "Exception occured: " << e.what();
  }
}