#include <iostream>
#include <cstdio>
#include <cstring>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char A[10], B[10], DA, DB;
	int Pa, Pb;
	scanf("%s%*c%c%s%*c%c", &A, &DA, &B, &DB);

	int m = 0, n = 0;
	for (int i = 0; i < strlen(A); i++)
	{
		if (A[i] == DA)
		{
			if (m == 0)
				Pa = DA - '0';
			else 
			{
				Pa = Pa * 10 + DA - '0';
			}
			m++;
		} 
	}
	for (int i = 0; i < strlen(B); i++)
	{
		if (B[i] == DB)
		{
			if (n == 0)
				Pb = DB - '0';
			else 
			{
				Pb = Pb * 10 + DB - '0';
			}
			n++;
		} 
	}

	printf("%d", Pa + Pb);
	return 0;	
} 
