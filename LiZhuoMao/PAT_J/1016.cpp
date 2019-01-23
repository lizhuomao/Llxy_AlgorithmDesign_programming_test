#include <map>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct node
{
    string ID;
    int date[4];
    int time;
    bool status;
};
vector<int> _time(24);

double allTime(node data)
{
    int sum = 0;
    for (int i = 0; i < 24; i++) sum += _time[i];
    double total = _time[data.date[2]] * data.date[3] + sum * data.date[1] * 60;
    for (int i = 0; i < data.date[2]; i++)
    {
        total += _time[i] * 60;
    }
    return total / 100.0;
}

bool cmp(const node &a, const node &b)
{
    return (a.ID < b.ID) || (a.ID == b.ID && (a.time < b.time));
}

int main(void)
{
    for (int i = 0; i < 24; i++)
    {
        cin >> _time[i];
    }
    int N;
    cin >> N;
    vector<node> v(N);
    for (int i = 0; i < N; i++)
    {
        string temp;
        cin >> v[i].ID;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d:", &v[i].date[j]);
        }
        cin >> v[i].date[3] >> temp;
        v[i].time = v[i].date[1] * 24 * 60 + v[i].date[2] * 60 + v[i].date[3];
        if (temp[1] == 'n') v[i].status = true;
        else if (temp[1] == 'f') v[i].status = false; 
    }
    sort(v.begin(), v.end(), cmp);
    map<string, vector<node>> m;
    for (int i = 1; i < N; i++)
    {
        if (v[i].ID == v[i - 1].ID && v[i].status == false && v[i - 1].status == true)
        {
            m[v[i].ID].push_back(v[i - 1]);
            m[v[i].ID].push_back(v[i]);
        }
    }
    for (auto it : m)
    {
        vector<node> temp = it.second;
        cout << it.first;
        printf(" %02d\n", temp[0].date[0]);
        double total = 0.0;
        for (int i = 1; i < temp.size(); i += 2)
        {
            double t = allTime(temp[i]) - allTime(temp[i - 1]);
            printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n", temp[i - 1].date[1], temp[i - 1].date[2], temp[i - 1].date[3], temp[i].date[1], temp[i].date[2], temp[i].date[3], temp[i].time - temp[i - 1].time, t);
            total += t;
        }
        printf("Total amount: $%.2f\n", total);
    }
    system("pause");
    return 0;
}

