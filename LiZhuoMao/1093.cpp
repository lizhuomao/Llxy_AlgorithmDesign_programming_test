#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    //cout << s1 << " " << s2;
    set<char> Set;
    for (int i = 0; i < s1.length(); i++)
    {
        if (!Set.count(s1[i]))
        {
            cout << s1[i];
            Set.insert(s1[i]);
        }
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if (!Set.count(s2[i]))
        {
            cout << s2[i];
            Set.insert(s2[i]);
        }
    }
    system("pause");
    return 0;
}
