# include <stdio.h>
int main ()
{
	int a, b, n, m, k;
	scanf ("%d", &a);
	b = a / 100;
	n = (a-b*100) / 10;
	m = (a-b*100-n*10) / 1;
	for (k=0; k<b; ++k)
	printf ("B");
	for (k=0; k<n; ++k)
	printf ("S");
	for (k=1; k<=m; ++k)
	printf ("%d", k);
	printf ("\n"); 
	return 0;
 } 
