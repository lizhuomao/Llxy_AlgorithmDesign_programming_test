#include<stdio.h>
int select(int n);
int add(int n);
int judge(int n);
int main()
{
	int n, m;
	int i;
	scanf("%d", &n);
	if(n==0)
	{
		printf("0000 - 0000 = 0000");
		return 0;
	}
	if(judge(n))
	{
		printf("%d - %d = 0000", n, n);
		return 0;
	}
	if(select(n)>1000)
	{
		m = add(n)-select(n);
		printf("%d - %d = %04d\n", add(n), select(n), m);
	}
	else if(select(n)>100)
	{
		m = add(n)-select(n);
		printf("%d - 0%d = %04d\n", add(n), select(n), add(n)-select(n));
	}
	else if(select(n)>10)
	{
		m = add(n)-select(n);
		printf("%d - 00%d = %04d\n", add(n), select(n), add(n)-select(n));
	}
	else
	{
		m = add(n)-select(n);
		printf("%d - 000%d = %04d\n", add(n), select(n), add(n)-select(n));
	}
	for(i=0;i<10000;i++)
	{
		if(judge(m))
		{
			printf("%d - %d = 0000", m, m);
			break;
		}
		if(m==6174)
		{
			break;
		}
		if(select(m)>1000)
		{
				printf("%d - %d = %04d\n", add(m), select(m), add(m)-select(m));
				m = add(m)-select(m);
				continue;
		}
		else if(select(m)>100)
		{
				printf("%d - 0%d = %04d\n", add(m), select(m), add(m)-select(m));
				m = add(m)-select(m);
				continue;
		}
		else if(select(m)>10)
		{
				printf("%d - 00%d = %04d\n", add(m), select(m), add(m)-select(m));
				m = add(m)-select(m);
				continue;
		}
		else if(select(m)>0)
		{
			printf("%d - 000%d = %04d\n", add(m), select(m), add(m)-select(m));
			m = add(m)-select(m);
		}
	}
	return 0;
}
int judge(int n)
{
	int a[4];
	a[0]=n/1000;
	a[1]=n/100%10;
	a[2]=n/10%10;
	a[3]=n%10;
	if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
	{
		return 1;
	}
	return 0;
}
int add(int n)
{
	int a[4];
	int i, j;
	int t;
	int m;
	if(n>1000)
	{ 
		a[0]=n/1000;
		a[1]=n/100%10;
		a[2]=n/10%10;
		a[3]=n%10;
		for(i=0; i<4; i++)
		{
			for(j=i+1; j<4; j++)
			{
				if(a[i]<a[j])
				{
					t = a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		m=a[0]*1000+a[1]*100+a[2]*10+a[3];
		return m;
	}
	else if(n>100)
	{ 
		a[0]=0;
		a[1]=n/100%10;
		a[2]=n/10%10;
		a[3]=n%10;
		for(i=0; i<4; i++)
		{
			for(j=i+1; j<4; j++)
			{
				if(a[i]<a[j])
				{
					t = a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		m=a[0]*1000+a[1]*100+a[2]*10+a[3];
		return m;
	}
	else if(n>10)
	{ 
		a[0]=0;
		a[1]=0;
		a[2]=n/10%10;
		a[3]=n%10;
		for(i=0; i<4; i++)
		{
			for(j=i+1; j<4; j++)
			{
				if(a[i]<a[j])
				{
					t = a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		m=a[0]*1000+a[1]*100+a[2]*10+a[3];
		return m;
	}
	else if(n>0)
	{ 
		a[0]=0;
		a[1]=0;
		a[2]=n/10%10;
		a[3]=n%10;
		for(i=0; i<4; i++)
		{
			for(j=i+1; j<4; j++)
			{
				if(a[i]<a[j])
				{
					t = a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		m=a[0]*1000+a[1]*100+a[2]*10+a[3];
		return m;
	}
}
int select(int n)
{
	int a[4];
	int i, j;
	int t;
	if(n>1000) 
	{
		a[0]=n/1000;
		a[1]=n/100%10;
		a[2]=n/10%10;
		a[3]=n%10;
		for(i=0; i<4; i++)
		{
			for(j=i+1; j<4; j++)
			{
				if(a[i]>a[j])
				{
					t = a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		n=a[0]*1000+a[1]*100+a[2]*10+a[3];
		return n;
	}
	else if(n>100) 
	{
		a[0]=0;
		a[1]=n/100%10;
		a[2]=n/10%10;
		a[3]=n%10;
		for(i=0; i<4; i++)
		{
			for(j=i+1; j<4; j++)
			{
				if(a[i]>a[j])
				{
					t = a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		n=a[0]*1000+a[1]*100+a[2]*10+a[3];
		return n;
	}
	else if(n>10) 
	{
		a[0]=0;
		a[1]=0;
		a[2]=n/10%10;
		a[3]=n%10;
		for(i=0; i<4; i++)
		{
			for(j=i+1; j<4; j++)
			{
				if(a[i]>a[j])
				{
					t = a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		n=a[0]*1000+a[1]*100+a[2]*10+a[3];
		return n;
	}
	else if(n>0) 
	{
		a[0]=0;
		a[1]=0;
		a[2]=0;
		a[3]=n%10;
		for(i=0; i<4; i++)
		{
			for(j=i+1; j<4; j++)
			{
				if(a[i]>a[j])
				{
					t = a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		n=a[0]*1000+a[1]*100+a[2]*10+a[3];
		return n;
	}
}