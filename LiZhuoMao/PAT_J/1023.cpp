#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string input, output = "";
    int cnt1[10] = {0}, cnt2[10] = {0};
    cin >> input;
    int t = 0;
    for (int i = input.size() - 1; i >= 0; i--)
    {
        cnt1[input[i] - '0']++;
        int temp = (input[i] - '0') * 2 + t;
        t = temp / 10;
        temp = temp % 10;
        cnt2[temp]++;
        output = to_string(temp) + output;
    }
    bool flag = true;
    for (int i = 0; i < 10; i++)
    {
        if (cnt1[i] != cnt2[i]) flag = false;
    }
    if (t == 1)
    {
        output = "1" + output;
        cout << "No\n" << output << endl;
        system("pause");
        return 0;
    }
    if (!flag) 
    {
        cout << "No\n" << output << endl;
    }
    else 
    {   
        cout << "Yes\n" << output << endl;
    }
    system("pause");
    return 0;
}