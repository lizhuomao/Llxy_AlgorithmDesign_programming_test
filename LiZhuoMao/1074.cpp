#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string N, A, B;
  cin >> N;
  cin >> A >> B;
  int max = A.size() > B.size() ? A.size(): B.size();
  string str1(N.length() - A.length(), '0');
  A = str1 + A;
  string str2(N.length() - B.length(), '0');
  B = str2 + B;
  string ans(max, '0');
  int temp = 0;
  //cout << "A = " << A << " B = " << B <<  "A.size = " << A.size() << "B.size = " << B.size() << "max = " << max << endl;
  for (int i = N.size() - 1; i >= 0; i--)
  {
    int mod = N[i] == '0' ? 10 : (N[i] - '0');
    ans[i] = ((A[i] - '0') + (B[i] - '0') + temp) % mod + '0';
    temp = ((A[i] - '0') + (B[i] - '0') + temp) / mod;
    //cout << ans << " " << temp << " " << mod << " " << (int)(A[i] - '0') << " " << (int)(B[i] - '0') <<  endl;
  }
  if (temp != 0)
  {
    ans = "1" + ans;
  }
  int flag = 0;
  for (int i = 0; i < ans.size(); i++)
  {
      if (flag == 0 && ans[i] != '0')
      {
          for (int j = i; j < ans.size(); j++)
          {
              cout << ans[j];
          }
          flag = 1;
      }
  }
  if (flag == 0)
  {
      cout << '0';
  }
  system("pause");
  return 0;
}
