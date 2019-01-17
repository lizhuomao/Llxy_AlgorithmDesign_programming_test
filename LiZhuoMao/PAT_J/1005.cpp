#include <iostream>
#include <string>
using namespace std;

const string ans[11] = {"zero",
            "one", "two", "three", "four", "five",
            "six", "seven", "eight", "nine"};
int flag = true;
void print(int num)
{
    if (num == 0) return;
    int mod = num % 10;
    print(num / 10);
    cout << (flag ? "" : " ") << ans[mod];
    flag = false;
}

int main(int argc, char const *argv[])
{
    string input;
    cin >> input;
    int sum = 0;
    for (int i = 0; i < input.length(); i++)
    {
        sum += input[i] - '0';
    }
    print(sum);
    system("pause");
    return 0;
}
