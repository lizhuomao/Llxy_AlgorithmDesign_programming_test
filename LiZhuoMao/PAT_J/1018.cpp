#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
const int INF = 1000000;
int graph[502][502], minNeed = INF, minBack = INF;
vector<int> pre[510], weight, path, temppath;

void dfs(int v)
{
    temppath.push_back(v);
    if (v == 0)
    {
        int need = 0, back = 0;
        for (int i = temppath.size() - 1; i>= 0; i--)
        {
            int id = temppath[i];
            if (weight[id] > 0)
            {
                back += weight[id];
            }
            else 
            {
                if ((0 - weight[id]) < back)
                {
                    back += weight[id];
                }
                else
                {
                    need += -weight[id] - back;
                    back = 0;
                }
            }
        }
        if (need < minNeed)
        {
            minNeed = need;
            minBack = back;
            path = temppath;
        }
        else if (need == minNeed && back < minBack)
        {
            minBack = back;
            path = temppath;    
        }
        temppath.pop_back();
        return;
    }
    for (int i = 0; i < pre[v].size(); i++)
    {
        dfs(pre[v][i]);
    }
    temppath.pop_back();
    return;
}

int main(void)
{
    int C, N, S, M;
    cin >> C >> N >> S >> M;
    weight.push_back(0);
    for (int i = 0; i < N; i++) 
    {
        int temp;
        cin >> temp;
        weight.push_back(temp - C / 2);
    }
    fill(graph[0], graph[0] + 502 * 502, INF);
    for (int i = 0; i < M; i++)
    {
        int x, y, n;
        cin >> x >> y >> n;
        graph[x][y] = graph[y][x] = n;
    }
    vector<int> dis(N + 3, INF), visit(N + 3, false);
    dis[0] = 0;
    for (int i = 0; i <= N; i++)
    {
        int u = -1, Min = INF;
        for (int j = 0; j <= N; j++)
        {
            if (visit[j] == false && dis[j] < Min)
            {
                u = j;
                Min = dis[j];
            }
        }
        if (u == -1) break;
        visit[u] = true;
        for (int j = 0; j <= N; j++)
        {
            if (visit[j] == false && graph[u][j] != INF)
            {
                if (graph[u][j] + dis[u] < dis[j])
                {
                    dis[j] = dis[u] + graph[u][j];
                    pre[j].clear();
                    pre[j].push_back(u);
                }
                else if (graph[u][j] + dis[u] == dis[j])
                {
                    pre[j].push_back(u);
                }
            }
        }
    }
    dfs(S);
    cout << minNeed << " 0";
    for (int i = path.size() - 2; i >= 0; i--)
    {
        cout << "->" << path[i];
    }
    cout << " " << minBack << endl;
    system("pause");
    return 0;
}