#include <functional>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int main(void)
{
    int N1, N2;
    cin >> N1;
    map<int, double, greater<int>> m1, m2, m;
    for (int i = 0; i < N1; i++)
    {
        int Z;
        double X;
        cin >> Z >> X;
        m1.insert({Z, X});
    }
    cin >> N2;
    for (int i = 0; i < N2; i++)
    {
        int Z;
        double X;
        cin >> Z >> X;
        m2.insert({Z, X});
    }
    for (auto it1 : m1)
    {
        for (auto it2 : m2)
        {
         int Z;
         double X;
         Z = it1.first + it2.first;
         X = it1.second * it2.second;
         m[Z] += X;
         if (m[Z] == 0)
         {
             m.erase(Z);
         }
        }
    }
    cout << m.size();
    for (auto it : m)
    {
        printf(" %d %.1f", it.first, it.second);
    }
    system("pause");
    return 0;
}