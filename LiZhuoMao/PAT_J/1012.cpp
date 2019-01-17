#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node
{
    string id;
    int gade[4];
};
int flag;
bool cmp(const node &a, const node &b) {return a.gade[flag] > b.gade[flag];}

int find(const vector<node> &v, const string &id)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].id == id)
        {
            int j = i;
            for (; j > 0; j--)
            {
                if (v[j].gade[flag] != v[j - 1].gade[flag]) return j;
            }
            return j;
        }
    }
    return -1;
}
vector<node> v(2000), c(2000), m(2000), e(2000), a(2000);
int main(int argc, char const *argv[])
{
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].id >>v[i].gade[1] >> v[i].gade[2] >> v[i].gade[3];
        v[i].gade[0] = (v[i].gade[1] + v[i].gade[2] + v[i].gade[3]) / 3;
    }
    c.assign(v.begin(), v.end());
    flag = 1;
    sort(c.begin(), c.end(), cmp);
    m.assign(v.begin(), v.end());
    flag = 2;
    sort(m.begin(), m.end(), cmp);
    e.assign(v.begin(), v.end());
    flag = 3;
    sort(e.begin(), e.end(), cmp);
    a.assign(v.begin(), v.end());
    flag = 0;
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < M; i++)
    {
        string temp;
        cin >> temp;
        int min;
        char id;
        flag = 0;
        int at = find(a, temp); min = at; id = 'A';
        flag++;
        int ct = find(c, temp); if (ct < min) { min = ct; id = 'C';}
        flag++;
        int mt = find(m, temp); if (mt < min) { min = mt; id = 'M';}
        flag++;
        int et = find(e, temp); if (et < min) { min = et; id = 'E';}
        if (min == -1) cout << "N/A" << endl;
        else
        {
            cout << min + 1 << " " << id << endl;
        }
    }
    system("pause");
    return 0;
}
