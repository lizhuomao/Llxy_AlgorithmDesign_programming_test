#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct node 
{
    string id;
    int high;
};

bool cmp(node a, node b)
{
    return a.high != b.high ? a.high > b.high : a.id < b.id;
}

int main(void)
{
    int N, K;
    cin >> N >> K;
    vector<node>input;
    for (int i = 0; i < N; i++)
    {
        string str;
        int h;
        cin >> str >> h;
        input.push_back(node{str, h});
    }
    sort(input.begin(), input.end(), cmp);
    int row = K, temp, t = 0;
    while (row)
    {
        if (row == K)
        {
            temp = N - (N / K) * (K - 1);
        }
        else
        {
            temp = N / K;
        }
        vector<node> print(temp);
        print[temp / 2] = input[t];
        int j = temp / 2 - 1;
        for (int i = t + 1; i < t + temp; i += 2)
        {
            print[j--] = input[i];
        }
        j = temp / 2 + 1;
        for (int i = t + 2; i < t + temp; i += 2)
        {
            print[j++] = input[i];
        }
        int flag = 0;
        for (int i = 0; i < print.size(); i++)
        {
            cout << (flag == 0 ? "" : " ") << print[i].id;
            flag = 1;
        }
        cout << endl;
        t = t + temp;
        row--;
    }
    system("pause");
    return 0;
}