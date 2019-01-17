#include <iostream>
using namespace std;

int main(void)
{
    double mem[3][3], sum = 1;
    char ans[3] = {'W', 'T', 'L'};
    for (int i = 0; i < 3; i++)
    {
        double max = -1;
        int id;
        for (int j = 0; j < 3; j++)
        {
            cin >> mem[i][j];
            if (mem[i][j] > max)
            {
                max = mem[i][j];
                id = j;
            }
        }
        cout << ans[id] << " ";
        sum *= max;
    }
    printf("%.2lf", (sum * 0.65 - 1) * 2);
    system("pause");
    return 0;
}