#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct node
{
    int H, M, S, P, Time;
    bool flag = false;
};
bool cmp(const node &a, const node &b) { return a.Time < b.Time;}

int main(void)
{
    int N, K;
    cin >> N >> K;
    vector<node> v(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d:%d:%d%d", &v[i].H, &v[i].M, &v[i].S, &v[i].P);
        v[i].Time = v[i].H * 3600 + v[i].M * 60 + v[i].S;
       // cout << v[i].Time << " " << v[i].S << endl;
    }
    for (vector<node> :: iterator it = v.begin(); it != v.end(); it++)
    {
        if ((*it).Time > 17 * 3600) { v.erase(it); N--;}
    }
    sort(v.begin(), v.end(), cmp);
    //cout << 17 * 3600;
    //for (int i = 0; i < v.size(); i++) cout << v[i].Time << " " << v[i].P << endl;
    queue<node> q;
    int cnt = 0;
    double alltime = 0.0;
    for (int i = 0; i < K; i++)
    {
        if (v[i].Time < 8 *3600)
        {
            alltime += 8 * 3600 - v[i].Time;
            v[i].Time = 8 * 3600;
        }
    }
    for (int i = 0; i < K; i++)
    {
        if (cnt < N)
        {
            q.push(v[i]);
            v[i].flag = true;
            cnt++;
        }
    }
    if (cnt < N)
    {
        node temp = q.front();
        int flag  = -1;
        for (int i = 0; i < N; i++)
        {
            if (v[i].Time < temp.Time + temp.P * 60 && v[i].flag == false)
            {
                alltime += temp.Time + temp.P * 60 - v[i].Time;
                if (flag == -1) flag = i;
            }
        }
        if (flag != -1)
        {
            v[flag].Time = temp.Time + temp.P * 60;
            v[flag].flag = true;
            q.push(v[flag]);
            q.pop();
        }
        else
        {
            q.push(v[cnt]);
            v[cnt].flag = true;
            q.pop();
        }
        cnt++;
    }
    printf("%0.1lf", alltime / (60 * N));
    system("pause");
    return 0;
}