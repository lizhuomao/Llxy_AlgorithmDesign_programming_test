#include<stdio.h>
int read_number(char array[][5]);
char a[10][5], b[10][5], c[10][5];
int main()
{
	
	char d; 
	int e[5], n, i, j=0, head, mouth, eye;
	head = read_number(a);
	eye = read_number(b);
	mouth = read_number(c);
	scanf("%d", &n); 
	for(i=0; i<n; i++){
		for(j=0 ; j<5; j++){
			scanf("%d", &e[j]);
		}
		if(e[0]<1 || e[1]<1 || e[2]<1 || e[3]<1 || e[4]<1){
			printf("Are you kidding me? @\\/@\n");
			continue;
		}
		if(e[0]>head+1 || e[1]>eye+1 || e[2]>mouth+1 || e[3]>eye+1 || e[4]>head+1){
			printf("Are you kidding me? @\\/@\n");
			continue;
		}
		printf("%s(%s%s%s)%s\n", a[e[0]-1], b[e[1]-1], c[e[2]-1], b[e[3]-1], a[e[4]-1]);	
	} 
	return 0;
}
int read_number(char array[][5])
{
	char c;
	int i=0, j=0;
	while((c = getchar()) != '\n'){
		if(c == '[') {
			while((c = getchar()) != ']'){
				if( c == '\n')
				return (i-1);
				array[i][j]=c;
				j++;
			}
			array[i][j] = '\0';
			i++;
			j=0;
		}
	}
	return (i-1);
}