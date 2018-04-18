#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	int i, year, month, day;
	int sum=0; 
	long long int max1=20140907, min1=18140905, time;
	char max[6], min[6];
	char name[6];
	
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s %d/%d/%d", name, &year, &month, &day);		
		time = year*10000+month*100+day;
		if(time>20140906 || time<18140906)
		{
			continue;
		}
		sum++;
		if(time>min1)
		{
			strcpy(min, name);
			min1 = time;
		}
		if(time<max1)
		{
			strcpy(max, name);
			max1 = time;
		}
	}
	if(sum)
	printf("%d %s %s", sum, max, min);
	else
	printf("0");
	return 0;
}