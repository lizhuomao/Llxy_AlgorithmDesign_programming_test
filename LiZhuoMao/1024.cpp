#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
  string input;
  cin >> input;
  if (input[0] == '-') cout << "-";
  string ans = "";
  ans += input[1];
  int E = input.find('E');
  ans += input.substr(3, E - 3);
  string p = "";
  p += input.substr(E + 1);
  stringstream ss;
  ss << p;
  int n;
  ss >> n;
  cout << "p = "<< p << "n = " << n << "ans = " << ans << '\n';
  if (n < 0)
  {
    cout << "0.";
    for (int i = 0; i < -n - 1; i++)
    {
      cout << "0";
    }
    cout << ans;
  }
  else if (n >= ans.size() - 1)
  {
    cout << ans;
    for (int i = 0; i < n - ans.size() + 1; i++)
    {
      cout << "0";
    }
  }
  else
  {
    cout << ans.substr(0, n + 1);
    cout << ".";
    cout << ans.substr(n + 1);
  }
  system("pause");
  return 0;
}
