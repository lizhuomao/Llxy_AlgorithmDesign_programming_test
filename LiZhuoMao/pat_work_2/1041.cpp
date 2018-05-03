#include <stdio.h> 


typedef struct stu{
	char num[14];
	int s;
	int k;
} Stu;
int main ()
{
	int N;
	scanf("%d", &N);
	Stu s[N];
	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%s%d%d", s[i].num, &s[i].s, &s[i].k);
	}
	
	int M;
	scanf("%d", &M);
	int c[M];
	for (i = 0; i < M; i++)
	{	
		scanf("%d", &c[i]);
		int j;
		for (j = 0; j < N; j++)
		{
			if (s[j].s == c[i])
				printf("%s %d\n", s[j].num, s[j].k);
		}
	}	

	
	return 0;
}
