#include <cstdio>
#include <iostream>

using namespace std;

int main(void)
{
  int A_s = 0, A_f = 0, A_p = 0;
  int B_s = 0, B_f = 0, B_p = 0;
  int Ac = 0, Aj = 0, Ab = 0;
  int Bc = 0, Bj = 0, Bb = 0;
  int N; 
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    char A, B;
    cin >> A >> B;
    if (A == 'C')
    {
      if (B == 'J')
      {
        A_s++;
        B_f++;
        Ac++;
      }
      if (B == 'B')
      {
        A_f++;
        B_s++;
        Bb++;
      }
      if (B == 'C')
      {
        A_p++;
        B_p++;
      }
    }
    if (A == 'J')
    {
      if (B == 'B')
      {
        A_s++;
        B_f++;
        Aj++;
      }
      if (B == 'C')
      {
        A_f++;
        B_s++;
        Bc++;
      }
      if (B == 'J')
      {
        A_p++;
        B_p++;
      }
    }
    if (A == 'B')
    {
      if (B == 'C')
      {
        A_s++;
        B_f++;
        Ab++;
      }
      if (B == 'J')
      {
        A_f++;
        B_s++;
        Bj++;
      }
      if (B == 'B')
      {
        A_p++;
        B_p++;
      }
    }
  }
  cout << A_s << " " << A_p << " " << A_f << "\n";
  cout << B_s << " " << B_p << " " << B_f << "\n";
  if (Ab >= Ac && Ab >= Aj) cout << 'B';
  else if (Ac > Ab && Ac >= Aj) cout << 'C';
  else cout << 'J';
  cout << " ";
  if (Bb >= Bc && Bb >= Bj) cout << 'B';
  else if (Bc > Bb && Bc >= Bj) cout << 'C';
  else cout << 'J'<< endl;
  system("pause");
  return 0;
}