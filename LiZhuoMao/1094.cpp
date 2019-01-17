#include <math.h>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int A, B;
    cin >> A >> B;
    string input;
    cin >> input;
    int flag = 1;
    for (int i = 0; i < input.size() - B; i++)
    {
        string stmp = input.substr(i,  B);
        //cout << stmp << " " << i << i + B << endl;
        int temp = atoi(stmp.c_str());
        flag = 1;
        for (int j = 2; j <= sqrt(temp); j++)
        {
            if (temp % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag) 
        {
            cout << temp;
            break;
        }
    }
    if (!flag) cout <<"404";
    system("pause");
    return 0;
}