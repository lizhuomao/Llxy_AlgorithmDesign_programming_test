#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
  char A[11], B[11], DA, DB;
  scanf("%s%*c%c%s%*c%c", A, &DA, B, &DB);
  int count = 0, PA = 0, PB = 0;
  for (int i = 0; i < strlen(A); i++)
  {
    if (A[i] == DA) count++;
  }
  for (int i = 0; i < count; i++)
  {
    PA = PA * 10 + (DA - '0');
  }
  count = 0;
  for (int i = 0; i < strlen(B); i++)
  {
    if (B[i] == DB) count++;
  }
  for (int i = 0; i < count; i++)
  {
     PB = PB * 10 + (DB - '0');
  }
  cout << PA + PB;
  system("pause");
  return 0;
}