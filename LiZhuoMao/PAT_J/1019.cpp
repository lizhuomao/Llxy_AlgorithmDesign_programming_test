#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isRestr(const vector<int> &v)
{
    bool ans = true;
    for (int i = 0; i <= v.size() / 2; i++)
    {
        if (v[i] != v[v.size() - i - 1]) ans = false;
    }
    return ans;
}

vector<int> createStr(int num, const int &B)
{
    vector<int> v;
    while (num != 0)
    {
        int temp = num % B;
        v.push_back(temp);
        num = num / B;
    }
    return v;
}

int main(int argc, char const *argv[])
{
    int N, B;
    cin >> N >> B;
    vector<int> v = createStr(N, B);
    if (isRestr(v)) cout << "Yes";
    else cout << "No";
    cout << endl;
    bool flag = false;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << (!flag ? "" : " ") << v[i];
        flag = true;
    }
    cout << endl;
    system("pause");
    return 0;
}
