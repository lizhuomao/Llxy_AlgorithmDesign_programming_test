#include <string.h>
#include <iostream>
#include <vector>
using namespace std;

const int maxc = 10001 + 5;
const int maxr = 101 + 5;
int Data[maxc];
int main(int argc, char const *argv[])
{
    int N, M;
    cin >> N >> M;
    int Max = 0;
    memset(Data, 0, sizeof(Data));
    for (int i = 1; i <= M; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int input;
            cin >> input;
            Data[j] += input;
            if (Data[j] > Max) Max = Data[j];
        }
    }
    cout << Max << endl;
    int flag = 1;
    for (int i = 1; i <= N; i++)
    {
        if (Data[i] == Max)
        {
            cout << (flag ? "" : " ") << i;
            flag = 0;
        }
    }
    system("pause");
    return 0;
}
