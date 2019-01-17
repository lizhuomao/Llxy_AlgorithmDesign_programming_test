#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct node
{
  int data;
  int next;
};

int main(void)
{
  int head, N, K;
  cin >> head >> N >> K;
  vector<node> Add(100000);
  for (int i = 0; i < N; i++)
  {
    int A, D, N;
    cin >> A >> D >> N;
    Add[A].data = D;
    Add[A].next = N;
  }
  int t = head, i = 0;
  vector<int> ans;
  while (t != -1)
  {
      ans.push_back(t);
      t = Add[t].next;
  }
  reverse(ans.begin(), ans.begin() + K);
  for (int i = 0; i < ans.size() - 1; i++)
  {
      printf("%05d %d %05d\n", ans[i], Add[ans[i]].data, ans[i + 1]);
  }
  printf("%05d %d -1", ans[ans.size() - 1], Add[ans[ans.size() - 1]].data);
  system("pause");
  return 0;
}