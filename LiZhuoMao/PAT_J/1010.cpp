#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

long long convert(string str, long long radix)
{
    long long num = 0, cnt = 0;
    string re_str = str;
    reverse(re_str.begin(), re_str.end());
    for (int i = 0; i < re_str.size(); i++)
    {
        num += pow(radix, cnt++) * (isdigit(re_str[i]) ? (re_str[i] - '0') : (re_str[i] - 'a' + 10));
    }
    return num;
}

long long find_radix(string str, long long num)
{
    char ch = *max_element(str.begin(), str.end());
    long long low = (isdigit(ch) ? ch - '0' : ch - 'a' + 10) + 1;
    long long high = max(num, low);
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long temp = convert(str, mid);
        if (temp == num) return mid;
        else if (temp > num || temp < 0) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    long long tag, radix;
    string N1, N2;
    cin >> N1 >> N2 >> tag >> radix;
    long long num = tag == 1 ? convert(N1, radix) : convert(N2, radix);
    long long chose = tag == 1 ? find_radix(N2, num) : find_radix(N1, num);
    if (chose == -1) cout << "Impossible" << endl;
    else cout << chose << endl;
    system("pause");
    return 0;
}
