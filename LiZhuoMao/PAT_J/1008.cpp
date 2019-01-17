#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int pre, time_ = 0;
    cin >> pre;
    time_ += pre * 6 + 5;
    for (int i = 1; i < N; i++)
    {
        int temp;
        cin >> temp;
        int chose = temp - pre;
        if (chose >= 0)
        {
            time_ += chose * 6 + 5;
        }
        else
        {
            time_ += -chose * 4 + 5;
        }
        pre = temp;
    }
    cout << time_;
    system("pause");
    return 0;
}