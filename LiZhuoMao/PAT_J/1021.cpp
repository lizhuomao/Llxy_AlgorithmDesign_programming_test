#include <iostream>
#include <vector>
#include <set>
using namespace std;

const int MAX_N = 10000 + 5;
vector<bool> visit(MAX_N, false);
vector<vector<int>> v(MAX_N);
vector<int> temp;
int N, maxDeep = 0;

void dfs(int node, int deep)
{
    if (deep > maxDeep)
    {
        temp.clear();
        temp.push_back(node);
        maxDeep = deep;
    }
    else if (deep == maxDeep)
    {
        temp.push_back(node);
    }
    visit[node] = true;
    for (int i = 0; i < v[node].size(); i++)
    {
        if (visit[v[node][i]] == false)
        {
            dfs(v[node][i], deep + 1);
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> N;
    for (int i = 0; i < N - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    set<int> s;
    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        if (visit[i] == false)
        {
            dfs(i, 1);
            cnt++;
            if (temp.size() != 0)
            {
                for (int j = 0; j < temp.size(); j++)
                {
                    s.insert(temp[j]);
                }
            }
        }
    }
    if (cnt >= 2) cout << "Error: " << cnt << " components" << endl;
    else 
    {
        maxDeep = 0;
        int t = temp[0];
        temp.clear();
        fill(visit.begin(), visit.end(), false);
        dfs(t, 1);
        if (temp.size() != 0)
        {
            for (int j = 0; j < temp.size(); j++)
            {
                s.insert(temp[j]);
            }
        }
        for (set<int> :: iterator it = s.begin(); it != s.end(); it++)
        {
            cout << *it << endl;
        }
    }
    system("pause");
    return 0;
}
