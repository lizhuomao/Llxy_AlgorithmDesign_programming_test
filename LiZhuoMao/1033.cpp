#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string str1, str2;
  cin >> str1 >> str2;
  int flag = 0;
  for (int i = 0; i < str1.size(); i++)
  {
    if (str1[i] == '+' || str1[i] == ',' || str1[i] == '+' || str1[i] == '-')
    {
      flag = 1;
      break;
    }
  }
  for (int i = 0; i < str2.size(); i++)
  {
      char temp = str2[i];
      if (temp >= 97) temp = temp - 32;
      //cout << "temp = "<< temp;
    if (str1.find(temp) == string::npos)
    {
        //cout << "i = " << i << endl;
      if (flag == 0)
      {
        cout << str2[i];
      }
      else if (flag == 1 && str2[i] >= 95)
      {
        cout << str2[i];
      }
    }
  }
  system("pause");
  return 0;
}