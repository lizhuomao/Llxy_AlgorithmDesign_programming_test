#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string str;
  cin >> str;
  int count[6] = {0};
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == 'P') count[0]++;
    if (str[i] == 'A') count[1]++;
    if (str[i] == 'T') count[2]++;
    if (str[i] == 'e') count[3]++;
    if (str[i] == 's') count[4]++;
    if (str[i] == 't') count[5]++;
  }
    //cout << count[0] << count[1] << count[2] << count[3] << count[4] << count[5] << endl;
  while(count[0] || count[1] || count[2] || count[3] || count[4] || count[5])
  {
         // cout << count[0] << count[1] << count[2] << count[3] << count[4] << count[5] << endl;
    if (count[0]) { cout << 'P'; count[0]--;}
    if (count[1]) { cout << 'A'; count[1]--;}
    if (count[2]) { cout << 'T'; count[2]--;}
    if (count[3]) { cout << 'e'; count[3]--;}
    if (count[4]) { cout << 's'; count[4]--;}
    if (count[5]) { cout << 't'; count[5]--;}
  }
  system("pause");
  return 0;
}