#include<stdio.h>
int main()
{
	long long int numb,i,j,k,c,x;
	scanf("%d",&numb);
	for(i=1;i<=numb;i++)
	{
		scanf("%lld%lld%lld",&j,&k,&c);
			if(j+k>c)
                printf("Case #%d: true\n",i);
            else
                printf("Case #%d: false\n",i);

	}
	return 0;
}
