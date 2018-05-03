#include <stdio.h>
#include <string.h> 
//写出这个数 
void Print(int);
int main()
{
	char num[1000];
	scanf("%s", num);
	int i, count[10] = {0,0}, sum = 0;
	for (i = 0; i < strlen(num); i++)
	{
		sum += num[i] - '0';
	}
	Print(sum);
	return 0;
}

void Print(int N)
{

	if (N == 0)
		return;
	int mod = N % 10;
	Print(N/10);
	switch(mod)
	{
			case 0:
				printf("ling ");
				break;
			case 1:
				printf("yi ");
				break;
			case 2:
				printf("er ");
				break;
			case 3:
				printf("san ");
				break;
			case 4:
				printf("si ");
				break;
			case 5:
				printf("wu ");
				break;
			case 6:
				printf("liu ");
				break;
			case 7:
				printf("qi ");
				break;
			case 8:
				printf("ba ");
				break;
			case 9:
				printf("jiu ");
				break;
	}
	
	
}
