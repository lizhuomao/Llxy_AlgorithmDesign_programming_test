#include<stdio.h>
int main()
{
	int g, s, k;
	int G, S, K;
	int t;
	scanf("%d.%d.%d", &g, &s, &k);
	scanf("%d.%d.%d", &G, &S, &K);
	if(g > G)
	{
		t=g; g=G; G=t;
		t=s; s=S; S=t;
		t=k; k=K; K=t;
		printf("-");
	}
	else if(g == G)
	{
		if(s > S)
		{
			t=g; g=G; G=t;
			t=s; s=S; S=t;
			t=k; k=K; K=t;
			printf("-");
		}
		else if( s == S)
		{
			if(k > K)
			{
				t=g; g=G; G=t;
				t=s; s=S; S=t;
				t=k; k=K; K=t;
				printf("-");
			}
			else if( k == K)
			{
				printf("0.0.0");
				return 0;
			}
		}
	}
	if(K-k >=0)
	{
		if(S-s>=0)
		{
			printf("%d.%d.%d", G-g, S-s, K-k);
		}
		else
		{
			G=G-1;
			printf("%d.%d.%d", G-g, S+17-s, K-k);
		}
	}
	else
	{
		S=S-1;
		if(S-s>=0)
		{
			printf("%d.%d.%d", G-g, S-s, K+29-k);
		}
		else
		{
			G=G-1;
			printf("%d.%d.%d", G-g, S+17-s, K+29-k);
		}
	}
	return 0;
} 