#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}
int main()
{
  vector<int> vec1;
  int element, size;
  cout << "Enter the size of vector" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    cout << "Enter an element to add to this vector :";
    cin >> element;
    vec1.push_back(element);
  }
  // vector<int> vec2(2,6) --> 2 elements int vector of 6
  // vector<char> vec3(4) --> 4-element character vector
  // vector<char> vec4(vec2) --> 4-element character vector from vec3
  vector<int>::iterator iter1 = vec1.begin();
  display(vec1);
  vec1.insert(iter1,10,10);
  display(vec1);
  vec1.pop_back();
  display(vec1);
  return 0;
}