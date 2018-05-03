#include <stdio.h>

int main()
{
	int N, x = 0, y = 0;
	scanf("%d", &N);
	int i;
	for (i = 0; i < N; i++)
	{
		int han1, hua1, han2, hua2;
		scanf("%d%d%d%d", &han1, &hua1, &han2, &hua2);
		if (han1 + han2 == hua1 && han1 + han2 == hua2)
		{
			continue;	
		}
		if (han1 + han2 == hua1)
		{
			y++;
		}
		else if(han2 + han1 == hua2)
		{
			x++;
		}
	}
	printf("%d %d", x, y);
	return 0;
}
