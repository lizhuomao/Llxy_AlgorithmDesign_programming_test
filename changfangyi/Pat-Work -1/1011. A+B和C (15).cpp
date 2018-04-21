#include <stdio.h>
#include<malloc.h>
void sore (double sum)
{
	int a;
	double *T;
	*T = sum*3;
	T = (double *) malloc (sizeof(double));
	for (a=0; a < sum*3; ++a)
	{
		scanf ("%d", (T+a));
	}
	
	for (a=0; a < sum*3; a=a+3)
	{
	if (T[a] + T[a+1] > T[a+2])
	    printf ("Case #X: true\n");
	else
	    printf ("Case #X: false\n");		
	}
	
}

int main (void)
{
	int T, b; 
	double k, m, n;
	scanf ("%d", &T);	
	sore (T);	
	return 0;
 } 
