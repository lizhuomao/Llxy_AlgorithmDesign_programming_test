#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int num;
	scanf("%d", &num);
	int i;
	int nums[num + 1];
	for (i = 0; i < num; i++)
	{
		scanf("%d", &nums[i]);
	}
	int count[5] = {0, 0, 0 ,0 ,0};
	int sum[3] = {0, 0, 0};	
	float avarage = 0.0f;
	int max = 0;
	for (i = 0; i < num; i++)
	{
		if (nums[i] % 5 == 0 && nums[i] % 2 == 0)
		{
			// 能被5整除的数字中所有偶数的和
			sum[0] += nums[i];
			count[0]++;
		}
		else if (nums[i] % 5 == 1)
		{
			//将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...； 
			count[1]++;
			if (count[1] % 2 == 1)
				sum[1] += nums[i];
			else
				sum[1] -= nums[i];
		}
		else if (nums[i] % 5 == 2)
		{
			//被5除后余2的数字的个数； 
			count[2]++;
		}
		else if (nums[i] % 5 == 3) 
		{
			//被5除后余3的数字的平均数，精确到小数点后1位
			sum[2] += nums[i];
			count[3]++;
		}
		else if (nums[i] % 5 == 4)
		{
			//被5除后余4的数字中最大数字
			if (nums[i] > max)
				max = nums[i];
			count[4]++;
		}
		else
			continue;
	}
	avarage = (float)sum[2] / (float)count[3];
	if (count[0] == 0)
	{
		printf("N");
	}
	else
		printf("%d", sum[0]);
	for (i = 1; i < 5; i++)
	{
		if (count[i] == 0)
			printf(" N");
		else if (i == 1)
			printf(" %d", sum[1]);
		else if (i == 2)
			printf(" %d", count[2]);
		else if (i == 3)
			printf(" %.1f", avarage);
		else if (i == 4)
			printf(" %d", max);
	}
	return 0;
}
