#include <iostream>

using namespace std;
int main()
{
  []()
  {
    cout << "Hello World" << endl;
  }();
  
  auto func1 = [](double a, double b) -> double
  {
    return (a / b);
  };
  cout << "Result : " << func1(3, 2) << endl;
  cout << "Result : " << func1(3, 4) << endl;
}