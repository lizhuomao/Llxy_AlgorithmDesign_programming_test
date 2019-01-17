#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void func(long long z, long long m)
{
    if (m == 0)
    {
        printf("Inf");
        return;
    }
    if (z == 0)
    {
        printf("0");
        return;
    }
    int flag1 = 0, flag2 = 0, flag = 0;
    if (z < 0)
    {
        flag1 = 1;
    }
    if (m < 0)
    {
        flag2 = 1;
    }
    m = abs(m);
    z = abs(z);
    if (flag1 == 1 && flag2 == 1)
    {
        flag = 0;
    }
    else if (flag1 == 1 || flag2 == 1)
    {
        flag = 1;
    }
    if (z == m)
    {
        if (flag == 1)
        {
            printf("-1");
        }
        else
        {
            printf("1");
        }
        return;
    }
    long long int pre = z / m;
    long long int top = z % m;
    if (top == 0)
    {
        if (flag == 1)
        {
            printf("(-%lld)", pre);
        }
        else
        {
            printf("%lld", pre);
        }
        return;
    }
    else
    {
        long long temp1 = z - m * pre, temp2 = m, temp = gcd(temp1, temp2);
        if (flag == 1)
        {
            if (pre != 0)
            {
                printf("(-%lld %lld/%lld)", pre, temp1 / temp, temp2 / temp);
            }
            else
            {
                printf("%lld/%lld", temp1 / temp, temp2 / temp);
            }
        }
        else
        {
            if (pre != 0)
            {
                printf("-%lld %lld/%lld", pre, temp1 / temp, temp2 / temp);
            }
            else
            {
                printf("%lld/%lld", temp1 / temp, temp2 / temp);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    long long  a1, a2, b1, b2;
    scanf("%lld/%lld%lld/%lld", &a1, &a2, &b1, &b2);
    func(a1, a2);printf(" + ");func(b1, b2);printf(" = ");func(a1 * b2 + b1 * a2, a2 * b2);printf("\n");
    func(a1, a2);printf(" - ");func(b1, b2);printf(" = ");func(a1 * b2 - b1 * a2, a2 * b2);printf("\n");
    func(a1, a2);printf(" * ");func(b1, b2);printf(" = ");func(a1 * b1, a2 * b2);printf("\n");
    func(a1, a2);printf(" / ");func(b1, b2);printf(" = ");func(a1 * b2, a2 * b1);printf("\n");
    system("pause");
    return 0;
}
