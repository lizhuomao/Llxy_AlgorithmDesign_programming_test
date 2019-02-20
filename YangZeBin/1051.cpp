#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double R1, P1, R2, P2, A, B;
    cin >> R1 >> P1 >> R2 >> P2;
    A = R1*cos(P1)*R2*cos(P2) - R1*sin(P1)*R2*sin(P2);
    B = R1*cos(P1)*R2*sin(P2) + R1*sin(P1)*R2*cos(P2);
    if (abs(A) < 0.01)
        A = 0;
    if (abs(B) < 0.01)
        B = 0;
    if (B >= 0)
        printf("%.2lf+%.2lfi\n", A, B);
    else
        printf("%.2lf%.2lfi\n", A, B);

    system("pause");
    return 0;
}

