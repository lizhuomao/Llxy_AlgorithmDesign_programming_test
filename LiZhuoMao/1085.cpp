#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cctype>
#include <functional>
#include <algorithm>

using namespace std;

struct node
{
    string name;
    double gade;
     int count;
};

bool cmp(node a, node b)
{
    if (a.gade != b.gade)
    {
        return a.gade > b.gade;
    }
    else if (a.count != b.count)
    {
        return a.count < b.count;
    }
    else
    {
        return a.name < b.name;
    }
}

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    map<string, double> data;
    map<string, int> cnt;
    for (int i = 0; i < N; i++)
    {
        string str, name;
        double gade;
        cin >> str >> gade >> name;
        for (string::iterator it = name.begin(); it != name.end(); it++)
        {
            *it = tolower(*it);
        }
        cnt[name]++;

        if (str[0] == 'A')
        {
            data[name] += gade;
        }
        else if (str[0] == 'B')
        {
            data[name] += gade / 1.5;
        }
        else if (str[0] == 'T')
        {
            data[name] += gade * 1.5;
        }
    }
    vector<node> ans;
    for (map<string, double> :: iterator it = data.begin(); it != data.end(); it++)
    {
        ans.push_back(node{it -> first, it -> second, cnt[it -> first]});
    }
    sort(ans.begin(),ans.end(), cmp);
    int pre_sum = -1, rank = 0;
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        if (pre_sum != (int)ans[i].gade)
        {
            rank = i + 1;
        }
        cout << rank << " " << ans[i].name << " "<< (int)ans[i].gade << " " << ans[i].count << endl;

        pre_sum = ans[i].gade;
    }
    system("pause");
    return 0;
}
