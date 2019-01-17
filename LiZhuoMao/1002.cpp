#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

int main(int argc, char const *argv[])
{
    int N1, N2;
    cin >> N1;
    map<int, double, greater<int>> D;
    for (int i = 0; i < N1; i++)
    {
        int e;
        double x;
        cin >> e >> x;
        D[e] = x;
    }
    cin >> N2;
    for (int i = 0; i < N2; i++)
    {
        int e;
        double x;
        cin >> e >> x;
        D[e] += x;
    }
    for (map<int, double> :: iterator it = D.begin(); it != D.end(); it++)
    {
        if ((*it).second == 0)
        {
            D.erase(it);
        }
    }
    cout << D.size();
    for (map<int, double> :: iterator it = D.begin(); it != D.end(); it++)
    {
            cout << " " << (*it).first << " ";
            printf("%.1f", (*it).second);
    }
    system("pause");
    return 0;
}
