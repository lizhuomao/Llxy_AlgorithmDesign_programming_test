#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str;
    cin >> str;
    int side = (str.size() - 1) / 3;
    int down = str.size() - side * 2;
    //cout << side <<" " << down;
    for (int i = 0; i < side; i++)
    {
        cout << str[i];
        for (int j = 0; j < down - 2; j++) cout << " ";
        cout << str[str.size() - i - 1] << endl;
    }
    for (int i = side; i < side + down; i++)
    {
        cout << str[i];
    }
    cout << endl;
    system("pause");
    return 0;
}