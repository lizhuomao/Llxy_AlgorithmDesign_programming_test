#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct node
{
    int poptime = 0, endtime = 0;
    queue<int> q;  
};


int main(void)
{
    int N, M, K, Q;
    cin >> N >> M >> K >> Q;
    vector<int> _time(K), result(K);
    vector<bool> sorry(K, false);
    vector<node> window(N);
    for (int i = 0; i < K; i++)
    {
        cin >> _time[i];
    }
    int cnt = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (cnt < K)
            {
                window[j].q.push(_time[cnt]);
                if (window[j].endtime >= 540) sorry[cnt] = true;
                window[j].endtime += _time[cnt];
                if (i == 0) window[j].poptime = window[j].endtime;
                result[cnt] = window[j].endtime;
            //    cout << result[cnt] << endl;
                cnt++;
            }
        }
    }
    while (cnt < K)
    {
        int tempmin = window[0].poptime, tempwindow = 0;
        for (int i = 1; i < N; i++)
        {
            if (window[i].poptime < tempmin)
            {
                tempmin = window[i].poptime;
                tempwindow = i;
            }
        }
        window[tempwindow].q.pop();
        window[tempwindow].q.push(_time[cnt]);
        window[tempwindow].poptime += window[tempwindow].q.front();
        if (window[tempwindow].endtime >= 540) sorry[cnt] = true;
        window[tempwindow].endtime += _time[cnt];
        result[cnt] = window[tempwindow].endtime;
        cnt++;
    }
    for (int i = 0; i < Q; i++)
    {
        int search;
        cin >> search;
        if (sorry[search - 1]) cout << "Sorry" << endl;
        else printf("%02d:%02d\n", (result[search - 1] + 480) / 60, (result[search - 1] + 480) % 60);
    }
    system("pause");
    return 0;
}