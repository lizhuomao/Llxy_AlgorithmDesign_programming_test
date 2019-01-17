#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    vector<int> input(N);
    for (int i = 0; i < N; i++)
    {
        cin >> input[i];
    }
    sort(input.begin(), input.end());
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = (sum + input[i]) / 2;
    }
    cout << sum;
    return 0;
}
