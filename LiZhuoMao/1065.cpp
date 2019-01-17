#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main(void)
{
  map<int, int> P;
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int a, b;
    cin >> a >> b;
    P[a] = b;
    P[b] = a;
  }
  cin >> N;
  set<int> IN;
  for (int i = 0; i < N; i++)
  {
    int input;
    cin >> input;
    IN.insert(input);
  }
  set<int> H;
  for (set<int> :: iterator it = IN.begin(); it != IN.end(); it++)
  {
      if (!P.count(*it))
      {
          H.insert(*it);
      }
      else
      {
          set<int> :: iterator tt = find(IN.begin(), IN.end(), P[*it]);
          if (tt == IN.end())
          {
              H.insert(*it);
          }
      }
  }
  cout << H.size() << endl;
  int flag  = 0;
  for (set<int> :: iterator it = H.begin(); it != H.end(); it++)
  {
    cout << (flag == 0 ? "" : " ");
    printf("%05d", *it);
    flag = 1;
  }
  system("pause");
  return 0;
}
