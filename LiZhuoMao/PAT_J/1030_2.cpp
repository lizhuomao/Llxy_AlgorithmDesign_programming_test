#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX_N = 500 + 5, INF = 0x7fffffff;
int dis[MAX_N][MAX_N], cost[MAX_N][MAX_N], mincost = INF, S;
vector<int> per[MAX_N], temppath, path;

void dfs(int u)
{
    temppath.push_back(u);
    if (u == S)
    {
        int allcost = 0;
        for (int i = temppath.size() - 1; i > 0; i--)
        {
            allcost += cost[temppath[i]][temppath[i - 1]];
        }
        if (allcost < mincost)
        {
            path.clear();
            path = temppath;
            mincost = allcost;
        }
        temppath.pop_back();
        return;
    }
    for(int i = 0; i < per[u].size(); i++)
    {
        dfs(per[u][i]);
    }
    temppath.pop_back();
}

int main(void)
{
    fill(dis[0], dis[0] + MAX_N * MAX_N, INF);
    fill(cost[0], cost[0] + MAX_N * MAX_N, INF);
    int N, M, D;
    cin >> N >> M >> S >> D;
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        cin >> dis[a][b] >> cost[a][b];
        dis[b][a] = dis[a][b];
        cost[b][a] = cost[a][b];
    }
    vector<int> d(N + 1, INF);
    vector<bool> visit(N + 1, false);
    d[S] = 0;
    per[S].push_back(S);
    for (int i = 0; i < N; i++)
    {
        int u = -1, min = INF;
        for (int j = 0; j < N; j++)
        {
            if (!visit[j] && d[j] < min)
            {
                u = j;
                min = d[j];
            }
        }
        if (u == -1) break;
        visit[u] = true;
        for (int v = 0; v < N; v++)
        {
            if (!visit[v] && dis[u][v] != INF)
            {
                //cout << u << " " << v << " " << d[v] << " " << d[u] << " " << dis[u][v] << endl;
                if (d[v] > d[u] + dis[u][v])
                {
                    d[v] = d[u] + dis[u][v];
                    per[v].clear();
                    per[v].push_back(u);
                }
                else if (d[v] == d[u] + dis[u][v])
                {
                    per[v].push_back(u);
                }
            }
        }
    }
    dfs(D);
    for (int i = path.size() - 1; i >= 0; i--)
    {
        cout << path[i] << " ";
    }
    cout << d[D] << " " << mincost << endl;
    system("pause");
    return 0;;
}