#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct ans
{
    string id;
    double Gp, Gm, Gf, G;
};

bool cmp(ans a, ans b)
{
    return a.G != b.G ? a.G > b.G : a.id < b.id;
}

int main(int argc, char const *argv[])
{
    int P, M, N;
    cin >> P >> M >> N;
    map<string, int> cnt;
    vector<ans> A;
    int count = 1;
    for (int i = 0; i < P; i++)
    {
        string id;
        double gade;
        cin >> id >> gade;
        if (gade >= 200)
        {
            A.push_back(ans{id, gade, -1, -1, 0});
            cnt[id] = count++;
        }
    }
    for (int i = 0; i < M; i++)
    {
        string id;
        double gade;
        cin >> id >> gade;
        if (cnt[id] != 0)
        {
            A[cnt[id] - 1].Gm = gade;
        }
    }
    for (int i = 0; i < N; i++)
    {
        string id;
        double gade;
        cin >> id >> gade;
        if (cnt[id] != 0)
        {
            A[cnt[id] - 1].Gf = gade;
           
        }
    }
    for (int i = 0; i < A.size(); i++)
    {
        double m = A[i].Gm, f = A[i].Gf;
        if (m == -1)
        {
            m = 0;
        }
        if (f == -1)
        {
            f = 0;
        }
        if (m <= f)
        {
            A[i].G = f;
        }
        else
        {
            A[i].G = m * 0.4 + f * 0.6;
        }
        A[i].G = (int)(A[i].G + 0.5);
        if (A[i].G < 60)
        {
            //vector<ans> :: iterator it = A.begin();
            A[i].G = -1;
        }
    }
    sort(A.begin(), A.end(), cmp);
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i].G != -1)
        {
            cout << A[i].id << " " << A[i].Gp << " " << A[i].Gm << " " << A[i].Gf << " " << A[i].G << endl;
        }
    }
    system("pause");
    return 0;
}
