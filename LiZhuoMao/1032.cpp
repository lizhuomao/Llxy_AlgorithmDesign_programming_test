#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
  int N;
  cin >> N;
  int grade[N + 1] = {0};
  int Max_P = 0, Max_G  = 0;
  for (int i = 0; i < N; i++)
  {
    int P, G;
    cin >> P >> G;
    grade[P] += G;
    if (grade[P] > Max_G)
    {
      Max_P = P;
      Max_G = grade[P];
    }
  }
  cout << Max_P << " " << Max_G;
  system("pause");
  return 0;
}