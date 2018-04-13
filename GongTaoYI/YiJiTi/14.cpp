#include<stdio.h>
#include<string.h>
int main()
{
	char a[4][60];
	char c[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int i, j, len, len1;
	char b[2], d=-1, k=0; 
	for(i=0; i<4; i++)
	{
		scanf("%s", a[i]);
	}
	len = strlen(a[0]);
	len1 = strlen(a[1]);
	for(i=0; i<len; i++)
	{
		if(a[0][i]>='A' && a[0][i]<='G')
		{
			if(a[0][i] == a[1][i]){
				b[0]=a[0][i];
				break; 
		    } 
		}
	}
	for(i=i+1; i<len; i++)
	{
		if(a[0][i]>='A' && a[0][i]<='N' || a[0][i]>='0' && a[0][i]<='9')
		{
			if(a[0][i] == a[1][i]){
				b[1]=a[0][i];
				break;
			} 
		}
	}
	printf("%s ", c[b[0]-'A']);
	if(b[1]>='0' && b[1]<='9'){
		printf("0%d:", b[1]-'0');
	}else{
		printf("%d:", b[1]-'A'+10);
	}
	len = strlen(a[2]);
	len1 = strlen(a[3]);
	for(i=0; i<len; i++)
	{
		if(a[2][i]>='a' && a[2][i]<='z' || a[2][i]>='A' && a[2][i]<='Z'){
			if(a[2][i] == a[3][i]){
				d=i;
				break;	 
	        } 
		}	
	}
	if(d/10==0)
	printf("0%d", d);
	else
	printf("%d", d);
	return 0;
}