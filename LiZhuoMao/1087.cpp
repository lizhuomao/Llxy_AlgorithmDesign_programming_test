#include <iostream>
#include <set>

using namespace std;

int main(void)
{
  int N;
  cin >> N;
  set<int> S;
  int count = 0;
  for (int i = 1; i < N; i++)
  {
    int sum = i / 2 + i / 3 + i / 5;
    if (!S.count(sum))
    {
      S.insert(sum);
      count++;
    }
  }
  cout << count;
  system("pause");
  return 0;
}