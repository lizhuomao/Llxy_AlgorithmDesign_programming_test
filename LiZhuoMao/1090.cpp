#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, M;
    cin >> N >> M;
    map<int , vector<int>> data;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        data[a].push_back(b);
        data[b].push_back(a);
    }
    for (int j = 0; j < M; j++)
    {
        int cnt;
        vector<int> G;
        int count[100000] = {0};
        cin >> cnt;
        while(cnt--)
        {
            int input;
            cin >> input;
            count[input] = 1;
            G.push_back(input);
        }
        int flag = 0;
        for (int i = 0; i < G.size(); i++)
        {
            int temp = G[i];
            for (int k = 0; k < data[temp].size(); k++)
            {
                if (count[data[temp][k]] == 1)
                {
                    flag = 1;
                    cout << "No" << endl;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
