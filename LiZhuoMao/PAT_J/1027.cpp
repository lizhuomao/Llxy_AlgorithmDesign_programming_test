#include <iostream>
#include <string>
using namespace std;

string ans[13] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C"};

int main(void)
{
    int eNum[3], fNum[3];
    cout << "#";
    for (int i = 0; i < 3; i++)
    {
        cin >> eNum[i];
        string temp = "";
        //if (eNum[i] == 0) temp = "00";
        while (eNum[i] != 0)
        {
            int ntemp = eNum[i] % 13;
            temp = ans[ntemp] + temp;
            eNum[i] /= 13;
        }
        while (2 - temp.size())
        {
            temp = "0" + temp;
        }
        cout << temp;
    }
    cout << endl;
    system("pause");
    return 0;
}