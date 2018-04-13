#include<stdio.h>
#include<string.h>
double fun(char a[]);
double fun(char a[])
{
	int i=0;
	double n=0.0, m=10.0;
	int len= strlen(a); 
	if(a[0]=='-')
	{
		for(i=1; i<len; i++)
		{
			if(a[i]!='.')
			{
				n=n*10+a[i]-'0';
			}
			else
			{
				i++;
				break;
			}
		}
		for(i; i<len; i++)
		{
			n=n+(a[i]-'0')/m;
			m*=10.0;
		}
		n=-1.0*n;
	}
	else
	{
		for(i=0; i<len; i++)
		{
			if(a[i]!='.')
			{
				n=n*10+a[i]-'0';
			}
			else
			{
				i++;
				break;
			}
		}
		for(i; i<len; i++)
		{
			n=n+(a[i]-'0')/m;
			m*=10.0;
		}
	}
	return n;
}
int main()
{
	int n, i, j, k, len, illegal, count=0;
	char a[50];
	double m, sum=0.00;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s", a);
		len=strlen(a);
		illegal=0;
		for(j=0; j<len; j++)
		{
			if((a[j]<'0' || a[j] >'9') && a[j]!='-' && a[j]!='.')
			{
				illegal = 1;
				break;
			}else if(a[j]=='-')
			{
				if(j!=0)
				{
					illegal = 1;
					break;
				}
			}else if(a[j]=='.')
			{
				if(a[0]=='-'&&j==1)
				{
					illegal = 1;
					break;
				}
				if(j == 0)
				{
					illegal = 1;
					break;
				}
			}			
		}
		for(j=0; j<len; j++)
		{
			if(a[j]=='.')
			{
				for(k=j+1; k<len; k++)
				{
					if(a[k]=='.')
					{
						illegal = 1;
					}
				}
				len=len-j-1;
				if(illegal != 1)
				{
					if(len>2)
					{
						illegal = 1;
					}
				}	
			}
		}
		if(illegal==1)
		{
			printf("ERROR: %s is not a legal number\n", a);
		}
		else
		{
			m=fun(a);
			if(m>1000||m<-1000)
			{
				printf("ERROR: %s is not a legal number\n", a);
			}
			else
			{
				sum+=m;
				count++;
			}
		}
	}
		if(count==0)
		{
			printf("The average of 0 numbers is Undefined");
		}
		else if(count == 1)
		{
			printf("The average of 1 number is %0.2lf",sum);
		}
		else
		{
			printf("The average of %d numbers is %.2lf",count,sum/count);
		}
	
	return 0;
}