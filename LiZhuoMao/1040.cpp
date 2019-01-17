#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    cin >> input;
    int P = 0, A_e = 0, A = 0, T = 0, T_e = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'P')
        {
            P++;
        }
        else if (input[i] == 'A')
        {
            if (P != 0)
            {
                A++;
                A_e += P;
            }
        }
        else if (input[i] == 'T')
        {
            if (A != 0)
            {
                T++;
                T_e += A_e;
            }
        }
    }
    cout << T_e;
    system("pause");
    return 0;
}
