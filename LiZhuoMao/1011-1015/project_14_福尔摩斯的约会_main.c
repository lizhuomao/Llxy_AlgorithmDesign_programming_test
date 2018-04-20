#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
项目名称 ： 福尔摩斯的约会
作者     ： 李卓茂
日期     ： 2018.1.24 
*/ 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char str[4][61];
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%s", str[i], 60);
	}
	int len[5];
	for (i = 0; i < 4; i++)
	{
		len[i] = strlen(str[i]) - 1;
	}
	int min[3];
	if (len[0] > len[1])
		min[0] = len[1];
	else
		min[0] = len[0];
	if (len[2] > len[3])
		min[1] = len[3];
	else 
		min[1] = len[2];
	int count = 0;
	for (i = 0; i <= min[0]; i++)
	{
		if (str[0][i] == str[1][i])
		{
			count++;
			if(count == 1)
			{
			//	printf("\ni = %d,count = 1 :%c\n", i, str[0][i]);
				if (str[0][i] == 'A')
				{
					printf("%s", "MON ");	
				} 
				else if (str[0][i] == 'B')
				{
					printf("%s", "TUE ");					
				}
				else if (str[0][i] == 'C')
				{
					printf("%s", "WED ");
				}
				else if (str[0][i] == 'D')
				{
					printf("%s", "THU");	
				}
				else if (str[0][i] == 'E')
				{
					printf("%s", "FRI ");	
				}
				else if (str[0][i] == 'F')
				{
					printf("%s", "SAT ");
				}
				else if (str[0][i] == 'G')
				{
					printf("%s", "SUN ");	
				}
				else if (str[0][i] > 'G' || str[0][i] < 'A')
				{
					count = 0;	
				}
			}
			else if (count == 2)
			{
			//	printf("\ni = %d, count = 2 :%c\n", i, str[0][i]);				
			if ((str[0][i] >= 'A' && str[0][i] <= 'N') || (str[0][i] >= '0' && str[0][i] <= '9')) 
				switch (str[0][i])
				{
					case '0':
						printf("00");
						break;
					case '1':
						printf("01");
						break;
					case '2':
						printf("02");
						break;
					case '3':
						printf("03");
						break;
					case '4':
						printf("04");
						break;
					case '5':
						printf("05");
						break;
					case '6':
						printf("06");
						break;
					case '7':
						printf("07");
						break;
					case '8':
						printf("08");
						break;
					case '9':
						printf("09");
						break;
					case 'A':
						printf("10");
						break;
					case 'B':
						printf("11");
						break;
					case 'C':
						printf("12");
						break;
					case 'D':
						printf("13");
						break;
					case 'E':
						printf("14");
						break;
					case 'F':
						printf("15");
						break;
					case 'G':
						printf("16");
						break;
					case 'H':
						printf("17");
						break;
					case 'I':
						printf("18");
						break;
					case 'J':
						printf("19");
						break;
					case 'K':
						printf("20");
						break;
					case 'L':
						printf("21");
						break;
					case 'M':
						printf("22");
						break;
					case 'N':
						printf("23");
						break;																		
				}
			else 
				count = 1;
				
			}
			
		}
		else
			continue;
	}
	
	for (i = 0; i <= min[1]; i++)
	{
		if (str[2][i] == str[3][i] && isalpha(str[2][i]))	
		{
		//	printf("\ni = %d, count = 3 :%c\n", i, str[2][i]);			
			printf(":%02d", i);
		}
	}
	return 0;
}

