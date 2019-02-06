#include <vector>
#include <string>
#include <iostream>
using namespace std;

const char formerChar[4] = {'1', '0', 'l', 'O'}, laterChar[4] = {'@', '%', 'L', 'o'};
struct node
{
    string Id, Pass;
};

int main(void)
{
    int N;
    cin >> N; 
    vector<node> v;
    for (int i = 0; i < N; i++)
    {
        string Id, Pass;
        cin >> Id >> Pass;
        bool flag = false;
        for (int j = 0; j < Pass.size(); j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (Pass[j] == formerChar[k])
                {
                    Pass[j] = laterChar[k];
                    flag = true;
                }
            }
        }
        if (flag) v.push_back(node{Id, Pass});
    }
    if (v.size() == 0)
    {
        cout << "There ";
        if (N == 1) cout << "is"; else cout << "are";
        cout << " " << N << " account";
        if (N != 1) cout << "s";
        cout << " and no account is modified" << endl;
    }
    else
    {
        cout << v.size() << endl;
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].Id << " " << v[i].Pass << endl;
    }
    system("pause");
    return 0;
}