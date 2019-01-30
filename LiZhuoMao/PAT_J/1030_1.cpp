#include <stack>
#include <vector>
#include <cstring>
#include <iostream>
using namespace std;

const int MAX_N = 500 + 5, INF = 0x7fffffff;
struct node 
{
    int n, d, c;
};

int main(void)
{
    int N, M, S, D;
    cin >> N >> M >> S >> D;
    vector<node> g[MAX_N];
    for (int i = 0; i < M; i++)
    {
        int ca, cb, dis, cost;
        cin >> ca >> cb >> dis >> cost;
        g[ca].push_back(node{cb, dis, cost});
        g[cb].push_back(node{ca, dis, cost});

    }
    vector<bool> visit(N + 1, false);
    vector<int> d(N + 1, INF), c(N + 1, 0), path(N + 1);
    d[S] = 0;
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
        //cout << u << " " << min << endl;
        if (u == -1) break;
        visit[u] = true;
        for (int i = 0; i < g[u].size(); i++)
        {
            int v = g[u][i].n, dis = g[u][i].d, cost = g[u][i].c;
            if (!visit[v])
            {
                if (d[v] > d[u] + dis)
                {
                    d[v] = d[u] + dis;
                    c[v] = 0;
                    c[v] = c[u] + cost;
                    path[v] = u;
                }
                else if (d[v] == d[u] + dis)
                {
                    if (c[u] + dis < c[v])
                    {
                        c[v] = c[u] + cost;
                        path[v] = u;
                    }
                }
            }
        }
        
    }
    stack<int> s;
    int index = D;
    while (path[index] != S)
    {
        s.push(path[index]);
        index = path[index];
    }
    cout << S;
    while (!s.empty())
    {
        cout << " " << s.top();
        s.pop();
    }
    cout << " " << D;
    cout << " " << d[D] << " " << c[D];
    system("pause");
    return 0;
}