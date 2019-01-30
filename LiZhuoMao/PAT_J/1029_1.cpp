#include <iostream>
#include <set>
using namespace std;

int main(void)
{
    int N, M;
    set<int> s;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        scanf("%d", &temp);
        s.insert(temp);
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int temp;
        scanf("%d", &temp);
        s.insert(temp);
    }
    int all = N + M;
    all = (all + 1) / 2;
    int i = 0;
    for (auto it = s.begin(); i < s.size() && it != s.end(); it++, i++)
    {
        if (i == all - 1)
        {
            cout << *it << endl;
        }
    }
    system("pause");
    return 0;
}