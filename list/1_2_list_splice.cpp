#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
  list<int>::iterator it;
  for (it = lst.begin(); it != lst.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}
int main()
{
  list<int> list1;
  list<int> list2;
  list<int>::iterator it;
  for (int i = 1; i <= 4; i++)
  {
    list1.push_back(i);
  }
  for (int i = 1; i <= 3; i++)
  {
    list2.push_back(i * 10);
  }
  display(list1);

  display(list2);
  it = list1.begin();
  ++it;
  list1.splice(it, list2);
  display(list1);
  display(list2);
  list2.splice(list2.begin(), list1, it);
  display(list1);
  display(list2);
  it = list1.begin();
  advance(it,3);
  list1.splice(list1.begin(),list1,it,list1.end());
  display(list1);
  display(list2);

      return 0;
}