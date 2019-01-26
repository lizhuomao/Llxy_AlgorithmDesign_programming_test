#include <math.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct table
{
    int sum = 0;
    int finally = 8 * 3600;
    bool isVip = false;
};
struct user
{
    int time;
    int amount;
    int wait;
    bool isVip;
    bool isplay;
};

bool cmp(const user &a, const user &b) { return a.time < b.time;}

int main(void)
{
    int N;
    cin >> N;
    vector<user> users, played;
    for (int i = 0; i < N; i++)
    {
        int hh, mm, ss, amount, vip;
        scanf("%d:%d:%d%d%d", &hh, &mm, &ss, &amount, &vip);
        if (hh * 3600 + mm * 60 + ss >= 21 * 3600) continue;
        users.push_back(user{hh * 3600 + mm * 60 + ss, amount * 60 > 120 * 60 ? 120 * 60 : amount * 60, 0, vip == 1 ? true : false, false});
    }
    sort(users.begin(), users.end(), cmp);
   // cout << "DEBUG";
    int K, M;
    cin >> K >> M;
    vector<table> tables(K);
    for (int i = 0; i < M; i++)
    {
        int vip;
        cin >> vip;
        tables[vip - 1].isVip = true;
    }
    int index = 0, cnt = 0;
    while (cnt < users.size())
    {
        int minindex = 0;
        for (int i = 0; i < tables.size(); i++)
        {
            if (tables[i].finally < tables[minindex].finally)
            {
                minindex = i;
            }
        }
        if (tables[minindex].finally >= 21 * 3600) break;
       // cout << "tables:" << minindex << " " << tables[minindex].finally << " " << tables[minindex].isVip << " " << tables[minindex].sum << endl;
        if (tables[minindex].isVip)
        {
            bool flag = false;
            for (int i = 0; i < users.size(); i++)
            {
                if (users[i].isVip && !users[i].isplay && users[i].time <= tables[minindex].finally)
                {
                    users[i].isplay = true;
                    users[i].wait = tables[minindex].finally - users[i].time;
                    tables[minindex].finally += users[i].amount;
                    tables[minindex].sum++;
                    flag = true;
                    //cout << "users:" << i << " " << users[i].time << " " << users[i].wait << " " << users[i].amount << " " << users[i].isVip << endl;
                    played.push_back(users[i]);
                    break;
                }
            }
            if (!flag)
            {
                for (; index < users.size(); index++)
                {
                    if (!users[index].isplay)
                    {
                        users[index].isplay = true;
                        tables[minindex].sum++;
                        if (users[index].time < tables[minindex].finally)
                        {
                            users[index].wait = tables[minindex].finally - users[index].time;
                            tables[minindex].finally += users[index].amount;
                        }
                        else
                        {
                            tables[minindex].finally = users[index].time + users[index].amount;
                        }
                        //cout << "users:" << index << " " << users[index].time << " " << users[index].wait << " " << users[index].amount << " " << users[index].isVip << endl;
                        played.push_back(users[index]);
                        break;
                    }
                }
            }
        }
        else
        {
            for(; index < users.size(); index++)
            {
                if (!users[index].isplay)
                {
                    if (users[index].isVip)
                    {
                        int vipminindex = -1, vipmintime = 99999999;
                        for (int v = 0; v < tables.size(); v++)
                        {
                            if (tables[v].isVip == true && tables[v].finally < vipminindex) vipminindex = v;
                        }
                        if (vipminindex != -1 && users[index].time >= tables[vipminindex].finally && !users[index].isplay)
                        {
                            users[index].isplay = true;
                            users[index].wait = tables[vipminindex].finally - users[index].time;
                            tables[vipminindex].finally += users[index].amount;
                            tables[vipminindex].sum++;
                            //flag = true;
                            //cout << "users:" << i << " " << users[i].time << " " << users[i].wait << " " << users[i].amount << " " << users[i].isVip << endl;
                            played.push_back(users[index]);
                            break;
                        }
                    }
                    users[index].isplay = true;
                    tables[minindex].sum++;
                    if (users[index].time <= tables[minindex].finally)
                    {
                        users[index].wait = tables[minindex].finally - users[index].time;
                        tables[minindex].finally += users[index].amount;
                    }
                    else
                    {
                        tables[minindex].finally = users[index].time + users[index].amount;
                    }
                    //cout << "users:" << index << " " << users[index].time << " " << users[index].wait << " " << users[index].amount << " " << users[index].isVip << endl;
                    played.push_back(users[index]);
                    break;
                }
            }
        }
        cnt++;
    }
    for (int i = 0; i < played.size(); i++)
    {
        //cout << users[i].time << " " << users[i].wait << endl;
        if ((played[i].time + played[i].wait) >= 21 * 3600) continue;
        printf("%02d:%02d:%02d %02d:%02d:%02d %d\n",
        played[i].time / 3600, (played[i].time % 3600) / 60, ((played[i].time % 3600) % 60),
        (played[i].time + played[i].wait) / 3600, ((played[i].time + played[i].wait) % 3600) / 60, (((played[i].time + played[i].wait) % 3600) % 60),
        (played[i].wait + 30) / 60);
    }
    bool flag = true;
    for (int i = 0; i < tables.size(); i++)
    {
        cout << (flag ? "" : " ") << tables[i].sum;
        flag = false;
    }
    system("pause");
    return 0;
}