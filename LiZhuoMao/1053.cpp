#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
  int N, D;
  float e;
  float g = 0.0, t = 0.0;
  cin >> N >> e >> D;
  for (int i = 0; i < N; i++)
  {
    int K;
    cin >> K;
    int count = 0;
    for (int j = 0; j < K; j++)
    {
      float input;
      cin >> input;
      if (input < e)
      {
        count++;
      }
    }
    if (count > (K / 2) && K <= D)
    {
      g++;
    }
    if (count > (K / 2) && K > D)
    {
      t++;
    }
  }
  float G = g / N, T = t / N;
  G = G * 100;
  T = T * 100;
  printf("%.1f%% %.1f%%", G, T);
  system("pause");
  return 0;
}