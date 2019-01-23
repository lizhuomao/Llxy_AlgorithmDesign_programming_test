#include <iostream>
using namespace std;

int N, M, K;
int v[1001][1001];
bool visit[1001];

void dfs(int node)
{
    visit[node] = true;
    for (int i = 1; i <= N; i++)
    {
        if (v[node][i] == 1 && visit[i] == false) dfs(i);
    }
}

int main(void)
{
    scanf("%d%d%d", &N, &M, &K);
    for (int i = 0; i < M; i++)
    {
        int temp1, temp2;
        scanf("%d%d", &temp1, &temp2);
        v[temp1][temp2] = v[temp2][temp1] = 1;
    }
    for (int i = 0; i < K; i++)
    {
        fill(visit + 1, visit + N + 1, false);
        int temp, cnt = 0;
        scanf("%d", &temp);
        visit[temp] = true;
        for (int j = 1; j <= N; j++)
        {
            if (visit[j] == false)
            {
                dfs(j);
                cnt++;
            }
        }
        printf("%d\n", cnt - 1);
    }
    system("pause");
    return 0;
}