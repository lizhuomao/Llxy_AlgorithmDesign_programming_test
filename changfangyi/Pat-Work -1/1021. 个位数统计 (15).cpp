# include <stdio.h>
# include <string.h>
int main (void)
{
	int n, m,k;
	char abc, sum[1000];
	int mun=0;
	scanf ("%s", sum);
	abc = strlen (sum);
	for (m=0; m<10; ++m)
	{
		for (n=0; n<abc; ++n)
		{
			if (sum[n]-'0'==m)
				mun++;
		}
		if (mun!=0)
			printf ("%d : %d\n", m, mun);
		mun=0; 
	}
	return 0;
 }
