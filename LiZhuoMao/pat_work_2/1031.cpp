#include <stdio.h>

int main()
{
	int N, i, count = 0;
	scanf("%d", &N);
	int w[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
	char input[18];
	for (i = 0; i < N; i++)
	{
		int j, sum = 0, Z;
		scanf("%s", &input);
		for (j = 0; j < 17; j++)
		{
			if (input[j] < '0' || input[j] > '9')
				goto t;
		}
		for (j = 0; j < 17; j++)
		{
			sum = sum + ((input[j] - '0') * w[j]);
		}
		Z = sum % 11;
		if (input[17] != M[Z])
		{
			t: printf("%s\n", input);
			continue;
		}

		else
		{
			count++;
		}

	}
	
	if (count == N)
		printf("All passed");
	return 0;
}