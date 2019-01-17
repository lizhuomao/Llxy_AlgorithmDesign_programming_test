#include <algorithm>
#include <functional>
#include <set>
#include <string>
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <sstream>
using namespace std;

typedef struct stu
{
    string id;
    int gade;
    stu(string id, int gade) : id(id), gade(gade) {};
} stu;

typedef struct Data
{
    string id;
    int all;
    Data(string id, int all) : id(id), all(all) {};
} Data;

bool cmp (const stu& s1, const stu& s2){ return s1.gade > s2.gade || (s1.gade == s2.gade && s1.id < s2.id);};

bool operator< (const Data& d1, const Data& d2) { return d1.all > d2.all || (d1.all == d2.all && d1.id < d2.id); }

int main(int argc, char const *argv[])
{
    vector<stu> s1[3];
    unordered_map<string, int[2]> l2;
    unordered_map<string, vector<Data>> day;
    int A, B;
    cin >> A >> B;
    for (int i = 0; i < A; i++)
    {
        string Id;
        int Gade;
        cin >> Id >> Gade;
        string first = Id.substr(0, 1), second = Id.substr(1, 3), three = Id.substr(4, 6);
        if (first == "T")
        {
            s1[0].push_back(stu(Id, Gade));
        }
        else if (first == "A")
        {
            s1[1].push_back(stu(Id, Gade));
        }
        else if (first == "B")
        {
            s1[2].push_back(stu(Id, Gade));
        }
        l2[second][0]++;
        l2[second][1] += Gade;
        int flag = 1;
        for (int j = 0; j < day[three].size(); j++)
        {
            if (day[three][j].id == second)
            {
                day[three][j].all++;
                flag = 0;
                break;
            }
        }
        if (flag) day[three].push_back(Data(second, 1));
    }
    for (int i = 0; i < 3; i++)       
    {
        sort(s1[i].begin(), s1[i].end(), cmp);
    }
    for (unordered_map<string, vector<Data>> :: iterator it = day.begin(); it != day.end(); it++)
    {
        sort((*it).second.begin(), (*it).second.end());
    }
    for (int i = 0; i < B; i++)
    {
        int c;
        cin >> c;
        string st;
        cin >> st;
        cout << "Case " << i + 1 << ": " << c << " " << st << endl;
        int flag = 0;
        if (c == 1)
        {
            
            int idx;
            if (st == "T")
            {
                idx = 0;
            }
            else if (st == "A")
            {
                idx = 1;
            }
            else if (st == "B")
            {
                idx = 2;
            }
            for (int j = 0; j < s1[idx].size(); j++)
            {
                cout << s1[idx][j].id << " " << s1[idx][j].gade << endl;
                flag = 1;
            }
        }
        else if (c == 2)
        {
            if (l2.count(st))
            {
                cout << l2[st][0] << " " << l2[st][1] << endl;
                flag = 1;
            }
        }
        else if (c == 3)
        {
            if (day.count(st))
            {
                flag = 1;
                for (int j = 0; j < day[st].size(); j++)
                {
                    cout << day[st][j].id << " " << day[st][j].all << endl;
                }
            }
        }
        if (!flag) cout << "NA" << endl;
    }
    system("pause");
    return 0;
}
