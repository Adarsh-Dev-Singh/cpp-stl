#include<iostream>
#include<string>
using namespace std;
int main(){
  string a = "Hello Dost9on";
  string b = " Dafa ho jao";
  auto func1 = [a](){
    cout<<a<<endl;
  };
  auto func2 = [=](){ // will capture all by value
    cout<<a<<endl;
  };
  auto func3 = [&](){ // will capture all by reference
    cout<<a<<endl;
  };
  auto func4 = [&a](){ // will capture a by reference
    cout<<a<<endl;
  };
  func1();
  for (size_t i{}; i < 5; i++)
  {
   a.append(b);
   func1();
   cout<<"Naya a : "<<a<<endl;
  }
  for (size_t i{}; i < 5; i++)
  {
   a.append(b);
   func4();
   cout<<"Naya a : "<<a<<endl;
  }
  
  return 0;
}