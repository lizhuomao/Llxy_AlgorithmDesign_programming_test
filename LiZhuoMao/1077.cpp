#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
  int N, M;
  cin >> N >> M;
  for (int i = 0; i < N; i++)
  {
    int G1, G2 = 0;
    cin >> G1;
    int max = 0, min = M;
    int count = 0;
    for (int j = 0; j < N - 1; j++)
    {
      int temp;
      cin >> temp;
      if (temp > M || temp < 0)
      {
        continue;
      }
      if (temp > max)
      {
        max = temp;
      }
      if (temp < min)
      {
        min = temp;
      }
      G2 += temp;
      count++;
    }
    G2 = G2 - max - min;
    double sum = (G2 / (double)(count - 2.0)) + G1;
    double y = sum / 2;
    sum = (y + 0.5);
    cout << (int)sum << endl; 
  }
  system("pause");
  return 0;
}

