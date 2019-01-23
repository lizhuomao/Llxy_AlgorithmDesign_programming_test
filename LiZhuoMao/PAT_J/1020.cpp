#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 30 + 5;
int in[MAX_N], post[MAX_N];
struct node
{
    int value, index;
};
vector<node> ans;

bool cmp(const node &a, const node &b) { return a.index < b.index;}
void pre(int root, int start, int end, int index)
{
    if (start > end) return;
    int i = start;
    while (i < end && in[i] != post[root]) i++;
    ans.push_back(node{post[root], index});
    pre(root - 1 - (end - i), start, i - 1, index * 2);
    pre(root - 1, i + 1, end, index * 2 + 1);
}

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> post[i];
    for (int i = 0; i < N; i++) cin >> in[i];
    pre(N - 1, 0, N - 1, 1);
    sort(ans.begin(), ans.end(), cmp);
    bool flag = true;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << (flag ? "" : " ") << ans[i].value;
        flag = false;
    }
    system("pause");
    return 0;
}
