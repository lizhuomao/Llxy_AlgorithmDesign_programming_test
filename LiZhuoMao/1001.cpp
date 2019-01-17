#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
  int a, b;
  cin >> a >> b;
  int sum = a + b;
  if (sum < 0)
  {
    cout << "-";
    sum = abs(sum);
  }
  string out = to_string(sum);
  int temp = 3 - out.size() % 3;
  for (int i = 0; i < out.size(); i++, temp++)
  {
    if (temp % 3 == 0 && i != 0)
    {
        cout << ",";
    }
    cout << out[i];
  }
  system("pause");
  return 0;
}
