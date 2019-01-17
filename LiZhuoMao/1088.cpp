#include <iostream>
#include <cmath>
using namespace std;
int j, k, m, x, y;
float b;
void print(double t)
{
  if (m == t)
  {
    cout << " Ping";
  }
  else if (m < t)
  {
    cout << " Cong";
  }
  else
  {
    cout << " Gai";
  }
}

int main(void)
{
  
  cin >> m >> x >> y;
  for (int i = 99; i >= 10; i--)
  {
    k = (i % 10) * 10 + (i / 10);
    b = abs(i - k) * 1.0 / x;
    if (b * y == k)
    {
      cout << i;
      print(i); 
      print(k);
      print(b);
      system("pause");
      return 0;
    }
  }
  printf("No Solution");
  system("pause");
  return 0;
}