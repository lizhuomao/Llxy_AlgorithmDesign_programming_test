#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int T, K, i;
	scanf("%d %d", &T, &K);
	int a[4];
	for(i=0; i<K; i++)
	{
		if(T<=0)
		{
			printf("Game Over.");
			break;
		} 
		scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
		if(T < a[2])
		{
			printf("Not enough tokens.  Total = %d.\n", T);
			continue;
		}
		if(a[0]>a[3] && a[1] == 0){
			T+=a[2];
			printf("Win %d!  Total = %d.\n", a[2], T);
		}
		else if(a[0]>a[3] && a[1] == 1){
			T-=a[2];
			printf("Lose %d.  Total = %d.\n", a[2], T);
		}
		else if(a[0]<a[3] && a[1] == 0){
			T-=a[2];
			printf("Lose %d.  Total = %d.\n", a[2], T);
		}
		else{
			T+=a[2];
			printf("Win %d!  Total = %d.\n", a[2], T);	
		}
	}
	return 0;
 } 