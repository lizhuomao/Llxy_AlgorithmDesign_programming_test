#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
  vector<string> input[3];
  string temp;
  for (int i = 0;  i < 3; i++)
  {
    temp = "";
    getline(cin, temp);
    //cout << temp << endl;
    for (int j = 1; j < temp.size(); j++)    
    {
      if (temp[j - 1] == '[')
      {
        int k = j;
        string str = "";
        while(temp[k] != ']' && k < temp.size())
        {
            //cout << temp[k] << endl;
          str += temp[k];
          k++;
        }
        //cout << str << endl;
        input[i].push_back(str);
      }
    }
    // for (int j = 0; j < input[i].size(); j++)
    // {
    //     cout << input[i][j];
    // }
  }
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
      int cloose[5];
      for (int i = 0; i < 5; i++)
      {
        cin >> cloose[i];
      }
      if (cloose[0] > input[0].size() || cloose[4] > input[0].size() || cloose[0] < 1 || cloose[4] < 1)
      {
        cout << "Are you kidding me? @\\/@" << endl;
        continue;
      }
      if (cloose[1] > input[1].size() || cloose[3] > input[1].size() || cloose[3] < 1 || cloose[1] < 1)
      {
        cout << "Are you kidding me? @\\/@" << endl;
        continue;
      }
      if (cloose[2] > input[2].size() || cloose[2] < 1)
      {
        cout << "Are you kidding me? @\\/@" << endl;
        continue;
      }
      cout << input[0][cloose[0] - 1] << "(" << input[1][cloose[1] - 1] << input[2][cloose[2] - 1] << input[1][cloose[3] - 1] << ")" << input[0][cloose[4] - 1] << endl;
    }
  
  system("pause");
  return 0;
}