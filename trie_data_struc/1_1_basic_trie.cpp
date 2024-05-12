#include <bits/stdc++.h>
using namespace std;
struct TrieNode
{

  TrieNode *childNode[26];

  bool wordEnd;
  TrieNode()
  {
    wordEnd = false;
    for (int i = 0; i < 26; i++)
    {
      childNode[i] = NULL;
    }
  }
};
void insertKey(TrieNode *root, string &key)
{

  TrieNode *currentNode = root;
  for (auto c : key)
  {
    if (currentNode->childNode[c - 'a'] == NULL)
    {
      TrieNode *newNode = new TrieNode();
      currentNode->childNode[c - 'a'] = newNode;
    }
    currentNode = currentNode->childNode[c - 'a'];
  }
  currentNode->wordEnd = 1;
}
bool searchKey(TrieNode *root, string &key)
{
  TrieNode *currentNode = root;
  for (auto c : key)
  {
    if (currentNode->childNode[c - 'a'] == NULL)
    {
      return false;
    }
    currentNode = currentNode->childNode[c - 'a'];
  }
  return (currentNode->wordEnd == true);
}
int main()
{
  TrieNode *root = new TrieNode();
  vector<string> inputStr = {"hi", "hello", "you", "are", "a", "buffalo"};
  int n = inputStr.size();
  for (int i = 0; i < n; i++)
  {
    insertKey(root, inputStr[i]);
  }
  vector<string> queryStr = {"hello", "not", "a", "buffalo", "ullu"};
  int m = queryStr.size();
  for (int i = 0; i < m; i++)
  {
    cout<<"Query String : "<<queryStr[i]<<endl;
    if(searchKey(root,queryStr[i])){
      cout<<"The query String -> "<<queryStr[i]<<" is present in trie"<<endl;
    }else{
        cout<<"The query String -> "<<queryStr[i]<<" is not present in trie"<<endl;
    }
  }
  return 0;
}