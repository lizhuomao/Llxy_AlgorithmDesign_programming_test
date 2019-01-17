#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    vector<int> input;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    vector<int> Sort;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        Sort.push_back(temp);
    }
    int i, j;
    for (i = 0; i < N - 1 && Sort[i] <= Sort[i + 1]; i++);
    for (j = i + 1; j < N && input[j] == Sort[j]; j++);
    if (j == N)
    {
        cout << "Insertion Sort" << endl;
        sort(input.begin(), input.begin() + i + 2);
    }
    else
    {
        cout << "Merge Sort" << endl;
        int flag = 1, p = 1;
        while(flag)
        {
            flag = 0;
            for (int k = 0; k < N; k++)
            {
                if (input[k] != Sort[k])
                {
                    flag = 1;
                }
            }
            p = p * 2;
            for (int k = 0; k < N / p; k++)
            {
                sort(input.begin() + p * k, input.begin() + p * (k + 1));
            }
            sort(input.begin() + (N - N % p), input.end());
        }
    }
    int flag = 0;
    for (int i = 0; i < N; i++)
    {
        cout << (flag == 0 ? "" : " ") << input[i];
        flag = 1;
    }
    system("pause");
    return 0;
}
