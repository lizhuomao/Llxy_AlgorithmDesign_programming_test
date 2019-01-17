#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string str1, str2;
  cin >> str1 >> str2;
  vector<char> v;
  for (int i = 0, j = 0; i < str1.size(); i++)
  {
    if (str1[i] != str2[j])
    {
      if (find(v.begin(), v.end(), str1[i]) == v.end())
      {
        v.push_back(str1[i]);
      }
    }
    else
    {
      j++;
    }
  }
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i];
  }
  system("pause");
  return 0;
}