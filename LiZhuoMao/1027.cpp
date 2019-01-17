#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
  int N;
  char c;
  cin >> N >> c;
  int height = 1;
  int c_sum = 1;
  int k = 1;
  while(c_sum + 2 * (k + 2) <= N)
  {
    k += 2;
    c_sum += 2 * k;
    height++;
  }
  cout << "k = " << k << "c_sum = " << c_sum << "height = " << height << "\n";
  int temp = k;
  for (int i = 0;  i < height; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int m = 0; m < temp; m++)
    {
      cout << c;
    }
    temp -= 2;
    cout << "\n";
  }
  temp = 3;
  for (int i = 1; i < height; i++)
  {
    for (int j = height - 1; j > i; j--)
    {
      cout << " ";
    }
    for (int j = 0; j < temp; j++)
    {
      cout << c;
    }
    temp += 2;
    cout << "\n";
  }
  cout << N - c_sum;
  system("pause");
  return 0;
}