#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

struct node
{
    string id;
    int value;
};

bool cmp(const node &a, const node &b){ return a.value != b.value ? a.value > b.value : a.id < b.id;}

int main(void)
{
    int N, K;
    cin >> N >> K;
    vector<node> input(N);
    for (int i = 0; i < N; i++) cin >> input[i].id >> input[i].value;
    for (int i = 1; i <= K; i++)
    {
        int num;
        string str;
        cin >> num >> str;
        printf("Case %d: %d %s\n", i, num, str.c_str());
        vector<node> ans;
        int cnt = 0, sum = 0;
        if (num == 1)
        {
            for (int j = 0; j < N; j++)
            {
                if (input[j].id[0] == str[0])
                {
                    ans.push_back(input[j]);
                }
            }
        }
        else if (num == 2)
        {
            for (int j = 0; j < N; j++)
            {
                if (input[j].id.substr(1, 3) == str)
                {
                    cnt++;
                    sum += input[j].value;
                }
            }
            if (cnt != 0) printf("%d %d\n", cnt , sum);
        }
        else if (num == 3)
        {
            unordered_map<string, int> m;
            for (int j = 0; j < N; j++)
            {
                if (input[j].id.substr(4, 6) == str) m[input[j].id.substr(1, 3)]++;    
            }
            for (auto it : m) ans.push_back(node{it.first, it.second});
        }
        sort(ans.begin(), ans.end(), cmp);
        for (int j = 0; j < ans.size(); j++)
        {
            printf("%s %d\n", ans[j].id.c_str(), ans[j].value);
        }
        if (((num == 3 || num == 1) && ans.size() == 0) || (num == 2 && cnt == 0)) cout << "NA" << endl;
    }
    system("pause");
    return 0;
}