#include<stdio.h>
#include<string.h>
int main()
{
	char a, c[6]={'P','A','T','e','s','t'};
	int i, b[250]={0};
	while((a = getchar()) != '\n')
	{
		b[a]++;
	}
	i=0;
	while(1)
	{
		i=i%6;
		if(b[c[i]] != 0)
		{
			printf("%c", c[i]);
			b[c[i]]--;
		}
		i++;
		if(b[c[0]]==0 && b[c[1]]==0 && b[c[2]]==0 && b[c[3]]==0 && b[c[4]]==0 && b[c[5]]==0)
		break;
	}
	return 0;
 } 