第一步是判断出里面是不是都由PAT组成的
第二部 判断 len[i]-next2-1!=next1*(next2-next1-1）就是T后面的A是否为前面的A的倍数
又由于再在PAT中加一个A后面的A就是多了一个前面A
可以得出PAT中间A的数乘以前面的A就等于后面的A



#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	int i, j, len[11];
	int x=0, y=0, z=0, h=0;
	int next1=0, next2=0;
	char a[11][100];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s", a[i]);
		len[i] = strlen(a[i]);
	}
	for(i=0; i<n; i++)
	{
		x=0, y=0, z=0, h=0, next1=0, next2=0;
		
		for(j=0; j<len[i]; j++)
		{
			if(a[i][j]=='P')
			{
				next1=j;
				x++;
			}
			else if(a[i][j]=='A')
			{
				y++;
			}
			else if(a[i][j]=='T')
			{
				next2=j;
				z++;
			}
			else 
			{
				h=1;
			}
		}
		if(len[i]-next2-1!=next1*(next2-next1-1))
		{
			h=1;
		}
		if(h==0 && y!=0 && x==1 && z==1 && next2-next1>=2)
		{
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}