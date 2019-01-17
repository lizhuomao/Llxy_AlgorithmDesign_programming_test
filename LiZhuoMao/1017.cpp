#include <cstdio>
#include <iostream>

using namespace std;

int main(void)
{
  char A[1000];
  int B;
  cin >> A >> B;
  //cout << B;
  int Q[1000];
  int R;
  int temp = 0, k = 0;
  for (int i = 0; i < 1000 && A[i]; i++)
  {
    if (i == 0 && A[i] - '0' < B)
    {
      temp = A[0] - '0';
      continue;
    }
    Q[k++] = ((A[i] - '0') + temp * 10) / B;
    temp = ((A[i] - '0') + temp * 10) % B;
  } 
  for (int i = 0; i < k; i++)
  {
    cout << Q[i];
  }
  cout << " " << temp;
  system("pause");
  return 0;
}