#include <stdio.h>

int main(){
	int N,M;
	scanf("%d%d",&N,&M);
	int i,max = 0;
	int Mcount = 0;
	int count[N];
	for(i = 0; i < N; i++){
		count[i] = 0;
	} 
	int data[M][N];
	for(i = 0; i < M; i++){
		int j;
		for(j = 0; j < N; j++){
			scanf("%d",&data[i][j]);
		} 
	}
	for(i = 0; i < N; i++){
		int j;
		for(j = 0; j < M; j++){
			count[i] += data[j][i];
		} 
	}
	for(i = 0; i < N; i++){
		if( count[i] > max){
			max = count[i];
			
		} 
	} 
	
	
	printf("%d\n",max);int flag = 0;
	for(i = 0; i < N; i++){
		
		if(count[i] == max){
			if(flag > 0){
				printf(" %d",i+1);
			}else{
				printf("%d",i+1);
				flag++;
			}
		}
	}
	
	
	return 0;
} 
