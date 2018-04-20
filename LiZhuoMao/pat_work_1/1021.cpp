#include <iostream>
#include <cstdio>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char num[1001];
	int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	for (int i = 0; i < 1000 && (num[i] = getchar()) != '\n'; i++)
	{
		count[num[i] - '0']++;

	}

	for (int i = 0; i < 10 ; i++)
		if (count[i] > 0)
			printf("%d:%d\n", i, count[i]);
	
	return 0;
}
