#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <stack>

using namespace std;

int main()
{
  stack<string> str;
  string s;
  string temp = "";
  getline(cin, s);
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '\n') break;
    if (s[i] != ' ')
    {
      temp += s[i];
    }
    else
    {
      str.push(temp);
      temp = "";
    }
  }
  str.push(temp);
  int i = 0;
  while (!str.empty())
  {
    cout << str.top();
    if (i)
    {
      cout << " " << str.top();
    }
    str.pop();
    i++;
  }
  system("pause");
  return 0;
}