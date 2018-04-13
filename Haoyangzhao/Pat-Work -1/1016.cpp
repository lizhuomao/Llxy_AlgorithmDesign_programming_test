/*
时间:2018年4月13日17:03:25
*/
# include <stdio.h>
int fun( int  a , int da)
{
	int p = da,i = 0,term;

	if(a == 0) return 0;

	while (a != 0)
	{ 
		term = a % 10;
		a /= 10 ;
		if(term == da)
			i++;
	}
	for( int j = 1 ; j < i ; j++)
		p = p * 10 + da;

	return p;
}
int main(void)
{
	int da,db,i;
	int a,b;
	scanf("%d%d%d%d" , &a,&da,&b,&db);

	i = fun(a,da) + fun(b,db);
	printf("%d\n",i);

	return 0;
}