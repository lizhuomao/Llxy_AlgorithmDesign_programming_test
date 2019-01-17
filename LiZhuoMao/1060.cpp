#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main(void)
{
  int N;
  cin >> N;
  int date[N];
  for (int i = 0; i < N; i++)
  {
    cin >> date[i];
  }
  sort(date, date + N, cmp);
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    if (date[i] > i + 1)
    {
      ans = i + 1;
    }
  }
  cout << ans;
  system("pause");
  return 0;
}