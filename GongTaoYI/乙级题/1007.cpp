找到一个简便的判断素数的方法就是：这个数只要除到这个数的平方并且全部除不尽的时候就可以说明他是素数

还有一种方法是求出10以内的素数就可以用100以内的数除以这个小于10的素数来求出100以内的素数
要求10000以内的素数就可以通过计算出100以内的素数   用10000以内的数去除已100以内的素数的余数都不为0的时候就可以说明那个数是素数


#include<stdio.h>
#include<math.h>
int judge_primenumber(int n);
int main()
{
	int n, i, k=0;
	int x, y=3;
	scanf("%d", &n);
	if(n<=4)
	{
		printf("0");
	}
	else
	{
		for(i=3; i<=n; i++)
		{
			if(judge_primenumber(i))
			{
				x = y;
				y = i;
				if(y-x == 2)
				{
					k++;
				}
			}
		}
		printf("%d", k);
	}
	return 0;
}
int judge_primenumber(int n)
{
	int i;
	for(i=2; i<=sqrt(n); i++)
	{
		if(n%i == 0)
		{
			break;
		}
	}
	if(i>sqrt(n))
	{
		return 1;
	}
	return 0;
}