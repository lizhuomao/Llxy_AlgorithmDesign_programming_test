#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  int N, D;
  cin >> D >> N;
  string input, pre, ans = "";
  pre = to_string(D);
  int k = 0;
  for (int i = 1; i < N; i++)
  {
    ans = "";
    for (int j = 0; j < pre.size(); j = k)
    {
      for (k = j; k < pre.size() && pre[j] == pre[k]; k++);
      ans += to_string((pre[j] - '0') * 10 + k - j);
    }
    pre = ans;
  }
  cout << ans;
  system("pause");
  return 0;
}