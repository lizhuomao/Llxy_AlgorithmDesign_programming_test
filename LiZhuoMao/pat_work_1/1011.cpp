#include <iostream>
#include <cstdio>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double A, B, C;
	int N;
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		scanf("%lf%lf%lf", &A, &B, &C);
		if (A + B <= C)
			printf("Case #%d: false\n", i + 1);
		else 
			printf("Case #%d: true\n", i + 1);
	}
	return 0;
}
