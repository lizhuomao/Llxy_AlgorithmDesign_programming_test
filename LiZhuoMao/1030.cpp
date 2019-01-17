#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, p;
    cin >> N >> p;
    vector<int> input;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    sort(input.begin(), input.end());
    int Max = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = N - 1; j >= i; j--)
        {
            if (input[i] * p >= input[j] && j - i > Max)
            {
                Max = j - i;
            }
        }
    }
    cout << Max + 1;
    system("pause");
    return 0;
}
