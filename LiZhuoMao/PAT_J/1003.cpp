#include <iostream>
#include <vector>
using namespace std;
int e[510][510], weight[510], dis[510], w[510], num[510];
bool visit[510];
int main(int argc, char const *argv[])
{
    int N, M, C1, C2;
    cin >> N >> M >> C1 >> C2;
    for (int i = 0; i < N; i++) cin >> weight[i];
    fill(e[0], e[0] + 510 * 510, INT_MAX);
    fill(dis, dis + 510, INT_MAX);
    fill(visit, visit + 510, false);
    for (int i = 0; i < M; i++)
    {
        int temp1, temp2, temp3;
        cin >> temp1 >> temp2 >> temp3;
        e[temp1][temp2] = temp3;
        e[temp2][temp1] = temp3;
    }
    dis[C1] = 0, w[C1] = weight[C1], num[C1] = 1;
    for (int i = 0; i < N; i++)
    {
        int u = -1, min = INT_MAX;
        for (int j = 0; j < N; j++)
        {
            if (visit[j] == false && dis[j] < min)
            {
                u = j;
                min = dis[j];
            }
        }
        if (u == -1) break;
        visit[u] = true;
        for (int j = 0; j < N; j++)
        {
            if (visit[j] == false && e[u][j] != INT_MAX)
            {
                if (e[u][j] + dis[u] < dis[j])    
                {
                    dis[j] = e[u][j] + dis[u];
                    num[j] = num[u];
                    w[j] = w[u] + weight[j];
                }
                else if (e[u][j] + dis[u] == dis[j])
                {
                    num[j] = num[u] + num[j];
                    if (w[u] + weight[j] > w[j]) w[j] = w[u] + weight[j];
                }
            }
        }
    }
    cout << num[C2] << " " << w[C2] << endl;
    system("pause");
    return 0;
}
