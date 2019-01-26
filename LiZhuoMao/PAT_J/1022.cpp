#include <sstream>
#include <string>
#include <iostream>
#include <set>
#include <map>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    map<string, set<string>> bookName, witerName, word, busyName, years;
    for (int i = 0; i < N; i++)
    {
        string ID;
        cin >> ID;
        getchar();
        string bns, wns, cns, temp, s, year;
        getline(cin, bns);
        bookName[bns].insert(ID);
        getline(cin, wns);
        witerName[wns].insert(ID);
        getline(cin, temp);
        stringstream ss(temp);
        while (ss >> s)
        {
            word[s].insert(ID);
        }
        getline(cin, cns);
        busyName[cns].insert(ID);
        cin >> year;
        years[year].insert(ID);
    }
    int M;
    cin >> M;
    getchar();
    for (int i = 0; i < M; i++)
    {
        string input, que;
        getline(cin, input);
        cout << input << endl;
        que = input.substr(3);
        if (input[0] == '1')
        {
            if (bookName.count(que))
            {
                for (set<string> :: iterator it = bookName[que].begin(); it != bookName[que].end(); it++)
                {
                    cout << *it << endl;
                }
            }
            else 
            {
                cout << "Not Found" << endl;
            }
        }
        else if (input[0] == '2')
        {
            if (witerName.count(que))
            {
                for (set<string> :: iterator it = witerName[que].begin(); it != witerName[que].end(); it++)
                {
                    cout << *it << endl;
                }
            }
            else 
            {
                cout << "Not Found" << endl;
            }
        }
        else if (input[0] == '3')
        {
            if (word.count(que))
            {
                for (set<string> :: iterator it = word[que].begin(); it != word[que].end(); it++)
                {
                    cout << *it << endl;
                }
            }
            else 
            {
                cout << "Not Found" << endl;
            }
        }
        else if (input[0] == '4')
        {
            if (busyName.count(que))
            {
                for (set<string> :: iterator it = busyName[que].begin(); it != busyName[que].end(); it++)
                {
                    cout << *it << endl;
                }
            }
            else 
            {
                cout << "Not Found" << endl;
            }
        }
        else if (input[0] == '5')
        {
            if (years.count(que))
            {
                for (set<string> :: iterator it = years[que].begin(); it != years[que].end(); it++)
                {
                    cout << *it << endl;
                }
            }
            else 
            {
                cout << "Not Found" << endl;
            }
        }
    }
    system("pause");
    return 0;
}
