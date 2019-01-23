#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct node
{
    int come, time;
};
bool cmp(const node &a, const node &b) { return a.come < b.come;}

int main(int argc, char const *argv[])
{
    int N, K;
    cin >> N >> K;
    vector<node> v;
    for (int i = 0; i < N; i++)
    {
        int hh, mm, ss, p;
        scanf("%d:%d:%d%d", &hh, &mm, &ss, &p);
        int come = hh * 3600 + mm * 60 + ss;
        if (come > 17 * 3600) continue;
        v.push_back(node{come, p * 60});
    }
    sort(v.begin(), v.end(), cmp);
    vector<int> window(K, 8 * 3600);
    double alltime = 0.0;
    for (int i = 0; i < v.size(); i++)
    {
        int tempindex = 0, mintemp = window[tempindex];
        for (int j = 0; j < K; j++)
        {
            if (window[j] < mintemp)
            {
                tempindex = j;
                mintemp = window[tempindex];
            }
        }
        if (window[tempindex] <= v[i].come)
        {
            window[tempindex] = v[i].come + v[i].time;
        }
        else 
        {
            alltime += (window[tempindex] - v[i].come);
            window[tempindex] += v[i].time;
        }
    }
    printf("%0.1lf", alltime / (60 * v.size()));
    system("pause");
    return 0;
}
