#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node
{
    string ID;
    int gade, ipair, iall, per;
};

bool cmp(const node &a, const node &b) { return a.gade != b.gade ? a.gade > b.gade : a.ID < b.ID;}

int main(void)
{
    int N;
    cin >> N;
    vector<node> v[105];
    for (int i = 0; i < N; i++)
    {
        int M;
        cin >> M;
        for (int j = 0; j < M; j++)
        {
            string ID;
            int gade;
            cin >> ID >> gade;
            v[i].push_back(node{ID, gade, -1, -1});
        }
        sort(v[i].begin(), v[i].end(), cmp);
        int cnt = 1, temp = v[i][0].gade;
        for (int j = 0; j < M; j++)
        {
            if (v[i][j].gade == temp)
            {
                v[i][j].ipair = cnt;
            }
            else
            {
                cnt = j + 1;
                v[i][j].ipair = cnt;
                temp = v[i][j].gade;
            }
            v[i][j].per = i + 1;
        }
    }
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            v[0].push_back(v[i][j]);
        }
    }
    sort(v[0].begin(), v[0].end(), cmp);
    int cnt = 1, temp = v[0][0].gade;
    for (int i = 0; i < v[0].size(); i++)
    {
        if (v[0][i].gade == temp)
        {
            v[0][i].iall = cnt;
        }
        else
        {
            cnt = i + 1;
            v[0][i].iall = cnt;
            temp = v[0][i].gade;
        }
    }
    cout << v[0].size() << endl;
    for (int i = 0; i < v[0].size(); i++)
    {
        cout << v[0][i].ID << " " << v[0][i].iall << " " << v[0][i].per << " " << v[0][i].ipair << endl;
    }
    system("pause");
    return 0;
}