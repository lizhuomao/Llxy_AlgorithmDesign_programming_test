#include<stdio.h>
int f(int a,int da)
{
	int i = 0,j = 0,b[100],pa = 0;
	do
	{
		b[i] = a%10;
		a /= 10;
		i++;
	}while(a != 0);
	while(i >= 0)
	{
		if(b[i]== da)
			j++;
		i--;
	}
	for(i = 0;i < j;i++)
		pa = pa * 10 + da;
	return pa;
}
int main()
{
	int A,DA,B,DB,PA,PB;
	scanf("%d%d%d%d",&A,&DA,&B,&DB);
	PA = f(A,DA);
	PB = f(B,DB);
	printf("%d",PA+PB);

	return 0;
}
