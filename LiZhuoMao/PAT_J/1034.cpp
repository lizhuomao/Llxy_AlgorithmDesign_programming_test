#include <algorithm>
#include <iostream>
#include <map>
#include <string>
using namespace std;

const int MAX_N = 2000 + 5;
int N, K, index = 1, G[MAX_N][MAX_N], weight[MAX_N];
bool visit[MAX_N];
map<string, int> stringToInt, ans;
map<int, string> intToString;

int stoiFun(string &str)
{
    if (stringToInt[str] == 0)
    {
        stringToInt[str] = index;
        intToString[index] = str;
        return index++;
    }
    else
    {
        return stringToInt[str];
    }
}
void dfs(int u, int &head, int &numMember, int &totalweight)
{
    visit[u] = true;
    numMember++;
    if (weight[u] > weight[head]) head = u;
    for (int v = 1; v < index; v++)
    {
        if (G[u][v] > 0)
        {
            totalweight += G[u][v];
            G[u][v] = G[v][u] = 0;
            if (!visit[v])
            {
                dfs(v, head, numMember, totalweight);
            }
        }
    }
}
void dfsTrave()
{
    for (int i = 1; i < index; i++)
    {
        if (!visit[i])
        {            
            int head = i, totalweight = 0, numMember = 0;
            dfs(i, head, numMember, totalweight);
            if (numMember > 2 && totalweight > K)
            {
                ans[intToString[head]] = numMember;
            }
        }
    }
}

int main(void)
{
    cin >> N >> K;
    fill(weight, weight + MAX_N, 0);
    fill(visit, visit + MAX_N, false);
    fill(G[0], G[0] + MAX_N * MAX_N, 0);
    for (int i = 0; i < N; i++)
    {
        string name1, name2;
        int Time;
        cin >> name1 >> name2 >> Time;
        int id1 = stoiFun(name1);
        int id2 = stoiFun(name2);
        weight[id1] += Time;
        weight[id2] += Time;
        G[id1][id2] += Time;
        G[id2][id1] += Time;
    }
    dfsTrave();
    cout << ans.size() << endl;
    for (map<string, int> :: iterator it = ans.begin(); it != ans.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    system("pause");
    return 0;
}