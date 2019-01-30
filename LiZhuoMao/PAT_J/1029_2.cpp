#include <iostream>
using namespace std;

int k[200000 + 5];

int main(void)
{
    int N, M, index = 1, count = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &k[i]);
    }
    k[N + 1] = 0x7fffffff;
    cin >> M;
    int mid = (N + M + 1) / 2;
    for (int i = 1; i <= M; i++)
    {
        int temp;
        scanf("%d", &temp);
        while (temp > k[index])
        {
            count++;
            if (count == mid) cout << k[index];
            index++;
        }
        count++;
        if (count == mid) cout << temp;
    }
    while (index <= N)
    {
        count++;
        if (count == mid) cout << k[index];
        index++;
    }
    system("pause");
    return 0;
}