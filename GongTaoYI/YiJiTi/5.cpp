#include<stdio.h>
int main()
{
	int a[100], b[100], c[10000];
	int n, i, j=0, k, l=0, d;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(k=0; k<n; k++)
	{
		d=a[k];
		while(d != 1)
		{
			if(d%2 == 0)
			{
				d = d/2;
				c[j++] = d;
			}
			else
			{
				d = d*3+1;
			}
		}
	}
	for(k=0; k<n; k++){
		for(i=0; i<j; i++){
			if(c[i]==a[k]){
				a[k] = -1;
			}
		}
	}
	for(i=0;i<n; i++){
		if(a[i] == -1)
			continue;
		else
			b[l++]=a[i];		
	}
	for(i=0; i<l-1; i++){
		for( j=i+1; j<l; j++){
			if(b[i]<b[j]){
				d=b[i];
				b[i]= b[j];
				b[j]=d; 
			}
		} 
	}
	for(i=0; i<l; i++){
		if(i == l-1){
			printf("%d", b[i]); 
		}
		else
		printf("%d ", b[i]);
	}
}