#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int M, N;
  cin >> M >> N;
  int count = 1, count1 = 1;
  for (int i = 2; i <= 100000000; i++)
  {
    int k = 0;
    for (int j = 2; j <= sqrt(i); j++)
    {
        if (i % j == 0)
        {
        k++;
        break;
        }
    }
    //cout << " k = " << k << "\n";
    if (!k)
    {
        if (count >= M)
        {
            if (count > N) break;
            if (count1 % 10 == 1)cout << i;
            else cout << " " << i;
            if (count1 % 10 == 0) cout << "\n";
            count1++;
        }
        count++;
    }
  }
  system("pause");
  return 0;
}