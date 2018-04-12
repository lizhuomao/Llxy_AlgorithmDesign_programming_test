#include<stdio.h>
#include<string.h> 
int main()
{
	char a[85], b[85];
	int i,j,k=0,l;
	gets(a);
	j = strlen(a);
	for(i=j-1; i>=0; i--)
	{
		if(a[i]==' ')
		{
			l=i+1;
			while(a[l]!=' ' && a[l]!='\0')
			{
				b[k++]=a[l];
				l++;
			}
			b[k++]=' ';
		}
	}
	for(i=0; i<j ; i++)
	{
		if(a[i]==' ' || a[i]== '\0')
		{
			b[k]='\0';
			break;
		}else{
			b[k++]=a[i];
		}
	}
	for(i=0; i<j ; i++)
	{
		printf("%c", b[i]);
	}
	return 0;
}