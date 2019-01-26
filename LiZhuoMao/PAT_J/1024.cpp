#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    int K, i;
    string N;
    cin >> N >> K;
    string str = N;
    bool flag = false;
    for (i = 0; i < K; i++)
    {
        string reStr = str;
        reverse(reStr.begin(), reStr.end());
        if (reStr == str)
        {
            flag = true;
            break;
        }
        else
        {
            string temp = "";
            int t = 0;
            for (int j = 0; j < str.size(); j++)
            {
                temp = to_string((str[j] + reStr[j] - '0' - '0' + t) % 10) + temp;
                t = (str[j] + reStr[j] - '0' - '0' + t) / 10;
            }
            if (t == 1) temp = "1" + temp;
            str = temp;
        }
    }
    cout << str << '\n' << i << endl;
    system("pause");
    return 0;
}