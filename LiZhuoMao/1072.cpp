#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;

int main(void)
{
  int M, N, n, count_s = 0, count_m = 0;
  cin >> M >> N;
  n = N;
  vector<int> m;
  while(N--)
  {
    int temp;
    cin >> temp;
    m.push_back(temp);
  }
  while (M--)
  {
    string str;
    cin >> str;
    int cnt;
    cin >> cnt; 
    int flag = 0;
    while(cnt--)
    {
      int cmp;
      cin >> cmp;
      for (int i = 0; i < n; i++)
      {
        if (cmp == m[i] && flag == 0)
        {
          cout << str;
          printf(": %04d", m[i]);
          flag = 1;  
          count_m++;
          count_s++;
        }
        else if (flag == 1 && cmp == m[i])
        {
          printf(" %04d", m[i]);
          count_m++;
        }
      }
      cout << endl;
    }
    str = "";
  }
  cout << count_s << " " << count_m << endl;
  system("pause");
  return 0;
}