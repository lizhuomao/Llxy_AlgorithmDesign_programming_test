#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	char a, b;
	int x, y, i, j=0;
	char c[10000]={0}, d[10000];
	scanf("%c%d.%[0-9]E%c%s", &a, &x, c, &b, d);
	if(a == '-'){
		printf("-");
	}
	sscanf(d,"%d", &y);
	if(b == '-'){
		if(y == 0){
			printf("%d.%s", x, c);
		}else{
			printf("0.");
			for(i=0; i<y-1; i++){
				printf("0");
			}
			printf("%d%s", x, c);
		}
	}else{
		if(y == 0){
			printf("%d.%s", x, c);
		}else{
			printf("%d", x);
			for(i=0; i<y||c[i]!=0; i++){
				if(i == y) printf(".");
				if(c[i]>='0'&&c[i]<='9') printf("%c", c[i]);
				else printf("0");
			}
			if(c[i] != 0){
				printf("%s", &c[i]);
			}
		}
	}
	return 0;
} 