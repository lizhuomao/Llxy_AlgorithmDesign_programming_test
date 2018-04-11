#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Student {
	int number;
	int ability;
	int vitrue;
	int sum;
	int sign;
};
int mycmp(const void * a, const void * b);
int main(int argc, char *argv[]) 
{
	int N, L, H;
	scanf("%d %d %d", &N, &L, &H);
	struct Student stus, student[100001];
	int i, top = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%d %d %d", &stus.number, &stus.ability, &stus.vitrue);
		stus.sum = stus.ability + stus.vitrue;
		if (stus.ability < L || stus.vitrue < L)
		{
			stus.sign = 0;
		}
		else if (stus.ability >= H && stus.vitrue >= H)
		{
			stus.sign = 4;
			student[top++] = stus;
		}
		else if (stus.ability >= H)
		{
			stus.sign = 3;
			student[top++] = stus;
		}
		else if (stus.ability >= stus.vitrue )
		{
			stus.sign = 2;
			student[top++] = stus;
		}
		else 
		{
			stus.sign = 1;
			student[top++] = stus;
		}
	}
	qsort(student, top, sizeof(struct Student), mycmp);
	printf("%d\n", top);
	for (i = top - 1; i >= 0; i++)
		printf("%d %d %d\n",student[i].number, student[i].ability, student[i].vitrue);
	return 0;
}

int mycmp(const void * a, const void * b)
{
	struct Student *now2 = (struct Student *)a;
	struct Student *now1 = (struct Student *)b;
	if (now1 -> sign != now2 -> sign)
		return now2 -> sign - now1 -> sign;
	else if (now1 -> sum != now2 -> sum)
		return now2 -> sum - now1 -> sum;
	else if (now1 -> ability != now2 -> ability)
		return now2 -> ability - now1 -> ability;
	else if (now1 -> number != now2 -> number)
		return now1 -> number - now2 -> number;
	else 
		return 0;
}

