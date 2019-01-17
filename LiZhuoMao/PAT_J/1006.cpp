#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    string input_id, input_in, input_out, min_in = "99:99:99", min_id, max_in = "00:00:00", max_id;
    for (int i = 0; i < N; i++)
    {
        cin >> input_id >> input_in >> input_out;
        if (input_in < min_in)
        {
            min_in = input_in;
            min_id = input_id;
        }
        if (input_out >= max_in)
        {
            max_in = input_out;
            max_id = input_id;
        }
    }
    cout << min_id << " " << max_id << endl;
    system("pause");
    return 0;
}
