#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> v[100];
int Count[100] = {0};
int maxdepth = -1;
void dfs(int index, int depth)
{
   if (v[index].size() == 0) 
   {
       Count[depth]++;
       maxdepth = max(maxdepth, depth);
       return;
   }
   for (int i = 0; i < v[index].size(); i++)
   {
       dfs(v[index][i], depth + 1);
   }
}

int main(void)
{
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int temp, k;
        cin >> temp >> k;
        for (int j = 0; j < k; j++)
        {
            int child;
            cin >> child;
            v[temp].push_back(child);
        }
    }
    dfs(1, 0);
    bool flag = true;
    for (int i = 0; i <= maxdepth; i++)
    {
        cout << (flag ? "" : " ") << Count[i];
        flag = false;
    }
    system("pause");
    return 0;
}