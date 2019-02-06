#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int maxF = -1, minM = 0x7fffffff;
    string maxFs = "Absent", minMs = "Absent";
    for (int i = 0; i < N; i++)
    {
        string Name, Gender, Id;
        int Grade;
        cin >> Name >> Gender >> Id >> Grade;
        if (Gender == "M" && minM > Grade)
        {
            minM = Grade;
            minMs = Name + " " + Id;
        }
        else if (Gender == "F" && maxF < Grade)
        {
            maxF = Grade;
            maxFs = Name + " " + Id;
        }
    }
    cout << maxFs << endl;
    cout << minMs << endl;
    if (maxF == -1 || minM == 0x7fffffff) cout << "NA" << endl;
    else cout << maxF - minM << endl;
    system("pause");
    return 0;
}