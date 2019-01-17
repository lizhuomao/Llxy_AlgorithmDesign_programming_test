#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(void)
{
  int M, N;
  cin >> N >> M;
  int hash[] = {1, 2, 4, 8, 16};
  vector<int> true_opt(M), allgade(M);
  int wrong[M][5] = {0};
  for (int i = 0; i < M; i++)
  {
    int ag, temp, cnt;
    scanf("%d %d %d", &ag, &temp, &cnt);
    allgade[i] = ag;
    for(int j = 0; j < cnt; j++)
    {
      char ch;
      scanf(" %c", &ch);
      true_opt[i] += hash[ch - 'a'];
    }
  }
  
  for (int i = 0; i < N; i++)
  {
    getchar();
    double gade = 0.0;
    for (int j = 0; j < M; j++)
    {
      if (j != 0) scanf(" ");
      scanf("(");
      int cnt;
      scanf("%d", &cnt);
      int input_h = 0;
      for (int k = 0; k < cnt; k++)
      {
        char ch;
        scanf(" %c", &ch);
        input_h += hash[ch - 'a'];
      }
      scanf(")");
       //printf("%d", allgade[j]);
      int el = input_h ^ true_opt[j];
      if (el)
      {
        if ((input_h | true_opt[j]) == true_opt[j])
        {
        //  printf("%d", allgade[j]);
          gade += allgade[j] * 0.5;
        }
        if (el)
        {
          for (int k = 0; k < 5; k++)
          {
            if (el & hash[k])
            {
              wrong[j][k]++;
            }
          }
        }
      }
      else
      {
         //printf("%d", allgade[j]);
        gade += allgade[j] * 1.0;
      }
      //printf ("ipnut = %d, true = %d, gade = %f", input_h, true_opt[j], gade);
    }
    printf("%.1f\n", gade);
  }
  int max = 0;
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      max = max > wrong[i][j] ? max : wrong[i][j];
    }
  }
  if (max == 0)
  {
    printf("Too simple");
  }
  else
  {
    for (int i = 0; i < M; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        if (max == wrong[i][j])
        {
          printf("%d %d-%c\n", max, i + 1, j + 'a');
        }
      }
    }
  }
  system("pause");
  return 0;
}