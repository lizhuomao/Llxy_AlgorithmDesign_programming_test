#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int i, N;
	int a1=0, a2=0, a3=0, ac=0, aj=0, ab=0, bc=0, bj=0, bb=0;
	char a, b;
	scanf("%d", &N);
	for(i=0; i<N; i++){
		scanf(" %c %c", &a, &b);
		if(a == 'C'){
			if(b == 'J'){
				a1++;
				ac++;
			}else if(b == 'C'){
				a2++;
			}else if(b == 'B'){
				a3++;
				bb++;
			}
		}else if(a == 'J'){
			if(b == 'C'){
				bc++;
				a3++;
			}else if(b == 'J'){
				a2++;
			}else if(b == 'B'){
				a1++;
				aj++;
			}
		}else if(a == 'B'){
			if(b == 'C'){
				a1++;
				ab++;
			}else if(b == 'J'){
				a3++;
				bj++;
			}else if(b == 'B'){
				a2++;
			}
		}
	}
		printf("%d %d %d\n", a1, a2, a3);
		printf("%d %d %d\n", a3, a2, a1);
		if(ac>=aj){
			if(ac>ab){
				printf("C");
			}else if(ac == ab){
				printf("B");
			}else{
				if(ab>=aj){
					printf("B");
				}else{
					printf("J");
				}
			}
		}else{
			if(aj>ab){
				printf("J");
			}else if(aj == ab){
				printf("B");
			}else{
				if(ab>=ac){
					printf("B");
				}else{
					printf("C");
				}
			}
		}
		if(bc>=bj){
			if(bc>bb){
				printf(" C");
			}else if(bc == bb){
				printf(" B");
			}else{
				if(bb>=bj){
					printf(" B");
				}else{
					printf(" J");
				}
			}
		}else{
			if(bj>bb){
				printf(" J");
			}else if(bj == bb){
				printf(" B");
			}else{
				if(bb>=bc){
					printf(" B");
				}else{
					printf(" C");
				}
			}
		}
	return 0;
}