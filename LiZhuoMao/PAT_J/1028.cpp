#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct node
{
    string ID, Name;
    int grade;
};

bool cmp1(const node a, const node b) { return a.ID < b.ID;}
bool cmp2(const node a, const node b) { return a.Name != b.Name ? a.Name < b.Name : a.ID < b.ID;}
bool cmp3(const node a, const node b) { return a.grade != b.grade ? a.grade < b.grade : a.ID < b.ID;}

int main(void)
{
    int N, C;
    cin >> N >> C;
    vector<node> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].ID >> v[i].Name >> v[i].grade;
    }
    if (C == 1)
    {
        sort(v.begin(), v.end(), cmp1);
    }
    if (C == 2)
    {
        sort(v.begin(), v.end(), cmp2);
    }
    if (C == 3)
    {
        sort(v.begin(), v.end(), cmp3);
    }
    for (int i = 0; i < N; i++)
    {
        printf("%s %s %d\n", v[i].ID.c_str(), v[i].Name.c_str(), v[i].grade);
    }
    system("pause");
    return 0;
}