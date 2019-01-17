#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
  string A, B;
  cin >> A;
  string t = A;
  reverse(t.begin(), t.end());
  if (A == t)
  {
      cout << A << " is a palindromic number." << endl;
      return 0;
  }
  for (int i = 0; i < 10; i++)
  {
    B = A;
    reverse(B.begin(), B.end());
    int max = A.size() > B.size() ? A.size() : B.size();
    string str = "";
    int temp = 0;
    for (int j = max - 1; j >= 0; j--)
    {
        str = to_string((A[j] - '0' + B[j] - '0' + temp) % 10) + str;
        temp = (A[j] - '0' + B[j] - '0' + temp) / 10;
    }
    if (temp != 0)
    {
        str = "1" + str;
    }
    int p = 0;
    // for (int j = 0; j < (str.size() + 1) / 2; j++)
    // {
    //   if (str[j] != str[str.size() - 1 - j])
    //   {
    //     p = 1;
    //     break;
    //   }
    // }
    string str_r = str;
    reverse(str_r.begin(), str_r.end());
    if (str_r == str)
    {
        p = 1;
    }
    cout << A << " + " << B  << " = " <<  str <<endl;
    A = str;
    if (p == 1)
    {
      cout << str << " is a palindromic number." << endl;
      system("pause");
      return 0;
    }
  }
  cout << "Not found in 10 iterations." << endl;
  system("pause");
  return 0;
}