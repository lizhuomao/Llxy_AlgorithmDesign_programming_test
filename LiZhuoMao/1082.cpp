#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
  int N; 
  cin >> N;
  int max_r = 0, min_r =  100 * 100;
  int id_ma = -1, id_mi = -1;
  for (int i = 0; i < N; i++)
  {
    int x, y, id;
    cin >> id >> x >> y;
    int rd = x * x + y * y;
    if (rd > max_r)
    {
      id_ma = id;
      max_r = rd;
    }
    if (rd < min_r)
    {
      id_mi = id;
      min_r = rd;
    }
  }
  cout << id_ma << " " << id_mi;
  system("pause");
  return 0;
}