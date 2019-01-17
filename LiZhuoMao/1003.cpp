#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int n = 0;
  cin >> n;
  getchar();
  for (int i = 0; i < n; i++)
  {
      int P = 0, A = 0, T = 0, flag = 0, ans = 1;
      for (char c; c = getchar(),c != '\n';)
      {
        if (c == 'P' || c == 'A' || c == 'T')
        {
          if (c == 'P' && flag == 0) flag = 1;
          else if (c == 'T' && flag == 1) flag = 2;
          else if (c == 'A')
          {
            if (flag == 0)
            {
              P++;
            }
            else if (flag == 1)
            {
              A++;
            }
            else if (flag == 2)
            {
              T++;
            }
          }
          else
          {
            ans = 0;
          }
          
        }
        else
        {
          ans = 0;
        }
      }
      if (flag == 2 && P * A == T && ans && P + A + T && A && (P && T || !P && !T)) printf("YES\n");
      else printf("NO\n");
       
  }
  system("pause");
  return 0;
}