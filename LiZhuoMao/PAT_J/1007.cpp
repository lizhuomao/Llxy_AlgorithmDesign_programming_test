#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    vector<int> v(N);
    int L = 0, L_temp = 0, R = N - 1, sum = -1, max = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
        sum  += v[i];
        if (sum > max)
        {
            L = L_temp;
            R = i;
            max = sum;
        }
        else if (sum < 0)
        {
            L_temp = i + 1;
            sum = 0;
        }
    }
    if (max < 0) max = 0;
    cout << max << " " << L << " " << R;
    system("pause");
    return 0;
}
