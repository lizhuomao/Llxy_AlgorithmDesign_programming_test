#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  if (M > N)
  {
    M = M % N;
  }
  //getchar();
  char A[N + N - M];
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  for (int i = 0; i < N - M; i++)
  {
    A[N + i] = A[i];
  }
  int k = 0;
  for (int i = N - M; i < N; i++)
  {
    A[k++] = A[i];
    //cout << "\n" << A[i];
    //cout << A;
  }
  int j = N;
  for (int i = M; i < N; i++)
  {
    A[i] = A[j++];

  }
  for (int i = 0; i < N - 1; i++)
  {
    cout << A[i] << " ";
  }
  cout << A[N -1];
  system("pause");
  return 0;
}