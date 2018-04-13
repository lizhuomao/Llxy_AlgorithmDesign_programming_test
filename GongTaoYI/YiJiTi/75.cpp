#include<stdio.h>
struct node{
	int data;
	int next;
}list[100000];
int main(){
	int i,j;
	int first, N, K;
	int address, data, next;
	int count=1;
	scanf("%d%d%d", &first, &N, &K);
	for(i=0; i<N; i++){
		scanf("%d", &address);
		scanf("%d%d", &list[address].data, &list[address].next);
	}
	if(N==1){
		printf("%05d %d -1", first, list[first].data);
		return 0;
	}
	for(j=0; j<3; j++){
		for(i=first; i!=-1; i=list[i].next){
			if(j==0 && list[i].data<0){
				if(count == N){
					printf("%05d\n", i);
					printf("%05d %d ", i, list[i].data);
					break;
				}
				if(count!=1)
				printf("%05d\n", i);
				count+=1;
				printf("%0.5d %d ", i, list[i].data);
			}
			
			if(j==1 && list[i].data>=0 && list[i].data<=K){
				if(count == N){
					printf("%05d\n", i);
					printf("%05d %d ", i, list[i].data);
					break;
				}
				if(count!=1)
				printf("%05d\n", i);
				count+=1;
				printf("%05d %d ", i, list[i].data);
			}
			
			if(j==2 && list[i].data>K){
				if(count == N){
					printf("%05d\n", i);
					printf("%05d %d ", i, list[i].data);
					break;
				}
				if(count!=1)
				printf("%05d\n", i);
				count+=1;
				printf("%05d %d ", i, list[i].data);
			}
		}	
	}
	printf("-1");
	return 0;
}