#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stack>

using namespace std;

int main(void)
{
  string input_A, input_B;
  cin >> input_A >> input_B;
  //string all;
  // getline(cin, all);
  // input_B = all.substr(all.find(" ") + 1);
  // input_A = all.substr(0,all.size() -  input_B.size() - 1);
  int len_A = input_A.size(), len_B = input_B.size();
  while (len_A > len_B)
  {
    input_B = "0" + input_B; 
    len_B++;
  }
  while (len_B > len_A)
  {
    input_A = "0" + input_A;
    len_A++;
  }
  stack<char> s;
  //cout << input_A << input_B << len_A << len_B;
  while(len_A && len_B)
  {
    if (len_A % 2 == 0)
    {
      int num = input_B[len_B - 1] - input_A[len_A - 1];
      if (num < 0) num += 10;
      //cout << "\nÅ¼Êý:"<< num << endl;
      s.push(num + '0');
    }
    else
    {
      int num = input_A[len_A - 1] - '0' + input_B[len_B - 1] - '0';
      num %= 13;
      //cout << "\nÆæÊý:"<< num << endl;
      if (num == 10) s.push('J');
      else if (num == 11) s.push('Q');
      else if (num == 12) s.push('K');
      else s.push(num + '0');
    }
    len_A--;
    len_B--;
  }
  // while(len_A)
  // {
  //   if (len_A % 2 == 0)
  //   {
  //       int num;
  //       num = input_A[len_A - 1] - '0';
  //       num = 10 - num;
  //       s.push(num + '0');
  //   }
  //   else
  //   s.push(input_A[len_A - 1]);
  //   len_A--;
  // }
  // while(len_B)
  // {
  //   s.push(input_B[len_B - 1]);
  //   len_B--;
  // }

  while(!s.empty())
  {
    cout << s.top();
    s.pop();
  }
  system("pause");
  return 0;
}