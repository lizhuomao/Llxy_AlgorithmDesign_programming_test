#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int M;
    cin >> M;
    while (M--)
    {
        string input, tmps;
        cin >> input;
        int temp = atoi(input.c_str());
        int flag = 0;
        for (int i = 1; i < 10; i++)
        {
            tmps = to_string(temp * temp * i);
           //cout << "tmps = " << tmps << endl;
            for (int k = tmps.size() - 1; k >= 0; k--)
            {
                int count = 0;
                for (int j = input.size() - 1, m = 0; j >= 0; j--, m++)
                {
                    //cout << j << " " << k << " " << tmps  << " " << tmps[k - m] << " " << input[j] << endl;
                    if (tmps[k - m] == input[j]) count++;
                    else break;
                }
                if (count == input.size())
                {
                    cout << i << " " << tmps << endl;
                    flag = 1;
                    break;
                }
                else 
                {
                    break;
                }
            }
            if (flag) break;
        }
        if (!flag) cout << "No" << endl;
    }
    system("pause");
    return 0;
}
