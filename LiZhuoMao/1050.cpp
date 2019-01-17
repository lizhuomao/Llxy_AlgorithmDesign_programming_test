#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp (int a, int b)
{
    return a > b;
}

int main(void)
{
    int N;
    cin >> N;
    vector<int> input(N);
    for (int i = 0; i < N; i++)
    {
        cin >> input[i];
    }
    int m = 1, n = 1;
    for (int i = sqrt((double)N); i >= 1; i--)
    {
        if (N % i == 0)
        {
            n = i;
            break;
        }
    }
    m = N / n;
    //cout << "m = " << m << "n = " << n;
    sort(input.begin(), input.end(), cmp);
    int t = 0;
    vector<vector<int> > out(m, vector<int>(n));
    int k = 0;
    for (int i = 0; i < m / 2 + m % 2; i++)
    {
        for (int j = i; j <= n - i - 1 && k < N; j++)
        {
            out[i][j] = input[k++];
        }
        for (int j = i + 1; j < m - i - 1 && k < N; j++)
        {
            out[j][n - i - 1] = input[k++];
        }
        for (int j = n - 1 - i; j >= i && k < N; j--)
        {
            out[m - i - 1][j] = input[k++];
        }
        for (int j = m - i - 2; j >= i + 1 && k < N; j--)
        {
            out[j][i] = input[k++];
        }
    }
    for (int i = 0; i < m; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            cout << (flag == 0 ? "" : " ") << out[i][j];
            flag = 1;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}