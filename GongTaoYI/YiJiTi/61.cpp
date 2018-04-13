#include<stdio.h>
int main()
{
	int N, M;
	int i, j, account=0;
	int score[100] = {0}, answer[100]={0}, solution[100]={0};
	scanf("%d %d", &N, &M);	
	for(j=0; j<M; j++)
	{
		scanf("%d ", &score[j]);
	}
	for(j=0; j<M; j++)
	{
		scanf("%d ", &answer[j]);
	}
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			if(j < M-1)
			{
				scanf("%d ", &solution[j]);
			}else{
				scanf("%d", &solution[j]);
			}
			if(solution[j] == answer[j]){
				account+=score[j];
			}
		}
		printf("%d\n", account);
		account = 0;	
	}
	return 0;
}