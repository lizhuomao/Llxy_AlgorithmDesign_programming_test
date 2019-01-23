#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

bool isprimes(int num)
{
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num) + 1; i++)
    {
        if (num % i == 0) return false;
    }
    return true;
}

int main(void)
{
    int N, D;
    while (scanf("%d%d", &N, &D) != EOF && isprimes(N))
    {
        vector<int> v;
        while (N != 0)
        {
            v.push_back(N % D);
            N = N / D;
        }
        int num = 0, cnt = 0;
        for (auto it = v.rbegin(); it != v.rend(); it++)        
        {
            num += *it * pow(D, cnt++);
        }
        cout << (isprimes(num) ? "Yes" : "No") << endl;
    }
    system("pause");
    return 0;
}