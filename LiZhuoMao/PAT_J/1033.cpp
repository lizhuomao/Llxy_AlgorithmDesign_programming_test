#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct node
{
    double price, dis;
};
const int INF = 0x7fffffff;

bool cmp(const node &a, const node &b) { return a.dis < b.dis;}

int main(void)
{
    double maxC, Dis, Davg;
    int N;
    cin >> maxC >> Dis >> Davg >> N;
    vector<node> v(N + 1);
    v[0] = {0.0, Dis};
    for (int i = 1; i <= N; i++)
    {
        cin >> v[i].price >> v[i].dis;
    }
    sort(v.begin(), v.end(), cmp);
    if (v[0].dis != 0) cout << "The maximum travel distance = 0.00";
    else
    {
        double nowprice = v[0].price, nowDis = 0.0, totalPrice = 0.0, conDis = 0.0, maxDis;
        while (nowDis < Dis)
        {
            maxDis = nowDis + maxC * Davg;
            bool flag = false;
            double minprice = INF, mindis = 0;
            for (int i = 1; i <= N && v[i].dis <= maxDis; i++)
            {
                if (v[i].dis <= nowDis) { continue;}
                if (v[i].price < nowprice)
                {
                    totalPrice += (v[i].dis - nowDis - conDis) / Davg * nowprice;
                    conDis = 0.0;
                    nowDis = v[i].dis;
                    nowprice = v[i].price;
                    flag = true;
                    break;
                }
                if (v[i].price < minprice)
                {
                    minprice = v[i].price;
                    mindis = v[i].dis;
                }
            }
            if (!flag && minprice != INF)
            {
                totalPrice += ((maxC - conDis / Davg) * nowprice);
                conDis = maxC * Davg - (mindis - nowDis);
                nowprice = minprice;
                nowDis = mindis;
            }
            if (!flag && minprice == INF)
            {
                nowDis += (maxC * Davg);
                printf("The maximum travel distance = %.2f", nowDis);
                system("pause");
                return 0;
            }
        }
        printf("%.2f", totalPrice);
    }
    system("pause");
    return 0;
}