#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

bool comp(const int &a, const int &b)
{
    return a > b;
}

int main(int argc, char const *argv[])
{
    int N; 
    cin >> N;
    vector<int> input ,copy;
    for (int i = 0; i < N; i++)
    {
        int in;
        cin >> in;
        input.push_back(in);
    }
    copy = input;
    for (int i = 0; i < N; i++)
    {
        set<int> cover;
        int temp = input[i];
        while (temp != 1)
        {
            if (temp % 2 == 0)
            {
                temp = temp / 2;
            }
            else
            {
                temp = (temp * 3 + 1) / 2;
            }
            vector<int> :: iterator it = find(copy.begin(), copy.end(), temp);
            //cout << temp << " " << *it << endl;
            if (it != copy.end())
            {
            //    cout << *it << endl;
                copy.erase(it);
            }
        }
    }
    int flag = 1;
    sort(copy.begin(), copy.end(), comp);
    for (vector<int> :: iterator it = copy.begin(); it != copy.end(); it++)
    {
        cout << (flag == 1 ? "" : " ");
        flag = 0;
        cout << *it; 
    }
    system("pause");
    return 0;
}
