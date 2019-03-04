#include <stdio.h>

int main(){
    int cols,lines,A,B,value,i,j;
    scanf("%d%d%d%d%d",&cols,&lines,&A,&B,&value);
	int data[cols][lines];
	for(i = 0; i < cols; i++){
		for(j = 0; j < lines; j++){
			scanf("%d",&data[i][j]);
		}
	}
	
	for(i = 0; i < cols; i++){
		for(j = 0; j < lines; j++){
			if(data[i][j] >= A && data[i][j] <= B){
				data[i][j] = value;
			}
			
			printf("%03d",data[i][j]);
			if(j < lines-1){
				printf(" ");
			}
		}
		printf("\n");
	}
}


