#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int a, b;
    int flag = 0;
    while ((scanf("%d%d", &a, &b)))
    {
        if (a == 0 || b == 0)
        {
            break;
        }
        cout << (flag == 0 ? "" : " ")<< b * a << " " << b - 1;
        flag = 1;
    }
    if (flag == 0)
    cout << "0 0" << endl;
    system("pause");
    return 0;
}