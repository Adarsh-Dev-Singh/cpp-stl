#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
  map<string, int> animeMap;
  animeMap["Naruto"] = 720;
  animeMap["Hunter x Hunter"] = 148;
  animeMap["Death Note"] = 38;
  animeMap.insert({{"Hyouka",22},{"Promised NeverLand",12}});
  map<string, int>::iterator iter;
  for (iter = animeMap.begin(); iter != animeMap.end(); iter++)
  {
    cout << (*iter).first << " " << (*iter).second << "\n";
  }

  return 0;
}