#include <iostream>
#include <cstdio> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int input;
	scanf("%d", &input);
	int count = 0;
	while (input != 1)
	{
		if (input % 2 != 0)
		{
			input = (3 * input + 1) / 2;
		}
		else 
			input = input / 2;
		count++;
	}
	printf("%d", count);
	return 0;
}
