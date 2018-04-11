#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char str[81];
	int i;
	int  * ret_val = fgets(str, 81, stdin);
	if (ret_val)
	{
		while (str[i] != '\n' && str[i] != '\0')
			i++;
		if (str[i] == '\n')
			str[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	
	//printf("%s", str);
	int len = strlen(str) - 1;
	//printf("\nlen = %d, str[len] = %c", len, str[len]);
	while (len > -1)
	{
	//	printf("\n%d\tstr[len] = '%c'", len, str[len]);
		while (str[len] != ' ' && len > 0)
		{
			len--;
		}
//		printf("\n%c", str[len + 1]);
		if(len == 0)
			i = len;
		else
			i = len + 1;
		while (str[i] != ' ' && str[i] != '\0')
		{
			putchar(str[i]);
			i++;
		}
		if(len != 0)
			printf(" ");
		len--;
	}
	return 0;
}
