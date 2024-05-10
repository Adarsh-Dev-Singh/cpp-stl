#include<iostream>
#include<list>
using namespace std;
void display(list <int> &lst){
  list<int> :: iterator it;
  for(it = lst.begin(); it != lst.end() ; it++){
    cout<<*it<<" ";

  }
    cout<<endl;
}
int main(){

  list <int> list1;
  list <int> list2;
  list2.push_front(1);
  list2.push_front(2);
  list1.push_back(4);
  list1.push_back(5);
  list1.push_back(1);
  list1.push_back(9);
  display(list1);
  display(list1);
  list1.merge(list2);
  display(list1);
  list1.sort();
  list1.unique();

  display(list1);
  return 0 ;
}