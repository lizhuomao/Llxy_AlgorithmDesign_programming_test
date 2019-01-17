#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
  int N;
  cin >> N;
  int count[10000] = {0};
  for (int i = 0; i < N; i++)
  {
    int input;
    cin >> input;
    int temp = abs(input - (i + 1));
    count[temp]++;
     cout << input << " " << temp << " " << count[temp] << endl;
  }
  for (int i = 9999; i >= 0; i--)
  {
   if (count[i] > 0) 
   {
     cout << i << " " << count[i] << endl;
   }
  }
  system("pause");
  return 0;
}