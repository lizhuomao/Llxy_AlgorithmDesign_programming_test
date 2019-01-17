#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
  int N;
  cin >> N;
  float input[N];
  for (int i = 0; i < N; i++)
  {
    cin >> input[i];
  }
  float sum = 0.0;
  for (int i = N; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      sum += input[j] * (float)(N - j);
    }
  }
  cout << sum;
  system("pause");
  return 0;
}