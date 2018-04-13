#include<stdio.h>
int main()
{
	int n, m;
	int hour, min, secoud;
	scanf("%d%d", &n, &m);
	m=(m-n+50)/100;
	hour = m/3600;
	min = m%3600/60;
	secoud = m%3600%60;
	printf("%02d:%02d:%02d", hour, min, secoud);//02表示用两个0补齐 
	return 0;
}