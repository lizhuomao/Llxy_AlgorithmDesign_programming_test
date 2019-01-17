#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    vector<int> input;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    vector<int> copy = input, ans;
    int Max = 0;
    sort(input.begin(), input.end());
    for(int i = 0; i < N; i++)
    {
        if (input[i] == copy[i] && input[i] < Max)
        {
            ans.push_back(input[i]);
        }
        if (input[i] < Max)
        {
            Max = input[i];
        }
    }
    cout << ans.size() << endl;
    int flag = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << (flag == 0 ? "" : " ") << ans[i];
        flag = 1;
    }
    // int Max = 0;
    // vector<int> ans;
    // for (int i = 0; i < N; i++)
    // {
    //     int flag = 0;
    //     if(input[i] >= Max)
    //     {
    //         Max = input[i];
    //     }
    //     else
    //     {
    //         flag = 1;
    //         continue;
    //     }
    //     for (int j = i + 1; j < N; j++)
    //     {
    //         if (input[j] < input[i])
    //         {
    //             flag = 1;
    //         }
    //     }
    //     if (flag == 0)
    //     {
    //         ans.push_back(input[i]);
    //     }
    // }
    // cout << ans.size() << endl;
    // int flag = 0;
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << (flag == 0 ? "" : " ") << ans[i];
    //     flag = 1;
    // }
    system("pause");
    return 0;
}
