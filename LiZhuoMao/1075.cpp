#include <iostream>
#include <vector>

using namespace std;

struct node
{
    int data;
    int next;
};

int main(int argc, char const *argv[])
{
    int N, head, K;
    cin >> head >> N >> K;
    vector<node> List(100002);
    vector<int> clas[3];
    for (int i = 0; i < N; i++)
    {
        int Add, Data, Next;
        cin >> Add >> Data >> Next;
        List[Add].data = Data;
        List[Add].next = Next;
    }
    int Node = head;
    while(Node != -1)
    {
        int Data = List[Node].data;
        if (Data < 0)
        {
            clas[0].push_back(Node);
        }
        else if (Data <= K)
        {
            clas[1].push_back(Node);
        }
        else
        {
            clas[2].push_back(Node);
        }
        Node = List[Node].next;
    }
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < clas[i].size(); j++)
        {
            if (flag == 0)
            {
                printf("%05d %d ", clas[i][j], List[clas[i][j]]);
                flag = 1;
            }
            else
            {
                printf("%05d\n%05d %d ", clas[i][j], clas[i][j], List[clas[i][j]]);
            }
        }
    }
    printf("-1");
    system("pause");
    return 0;
}
