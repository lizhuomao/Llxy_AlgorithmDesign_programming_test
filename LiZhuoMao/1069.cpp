#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <stdlib.h>

using namespace std;

int main(void)
{
  int M, N, S;
  cin >> M >> N >> S;
  vector<string> data;
  while (M--)
  {
    string input;
    cin >> input;
    data.push_back(input);
  }
  int count = 0;
  set<string> Set;
  for (int i = S - 1; i < data.size(); i += N)
  {
    if (Set.count(data[i]))
    {
      for (int j = i; j < data.size() - 1; j++)
      {
        data[j] = data[j + 1];
      }
    }
    if (!Set.count(data[i]))
    {
      Set.insert(data[i]);
      cout << data[i] << endl;
    }
  }
  if (Set.empty())
  {
    cout << "Keep going..." << endl;
  }
  system("pause");
  return 0;
}