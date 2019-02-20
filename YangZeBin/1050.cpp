#include <stdio.h>
#include <math.h>


#include<stdlib.h>
int comp(const void*a,const void*b)//用来做比较的函数。
{
    return *(int*)b-*(int*)a;
}

int IsPrime(int data){
	
	int i;
	if(data == 2) return 1;
	for(i = 2; i <= (int)(sqrt(data))+1; i++){
		if(data % i == 0){
			return -1;
		}
	}
	return 1;
} 

int main(){
	int  a, i = 0, j = 0;
	int arr[10000];
	scanf("%d",&a);
	int data[a];
	for(i = 0; i < a; i++){
		scanf("%d",&data[i]);
	}
	qsort(data,a,sizeof(int),comp);
	
	if(a == 2){
		arr[j++] = 1;
		arr[j++] = 2;
	}else{
	
		
		if(IsPrime(a) == 1){

			arr[j++] = a;
			arr[j++] = 1;	

		} else{
			for(i = 1; i < a/2; i++){
				if(a%i == 0 && a/i != 0){
					arr[j++] = a / i;
					arr[j++] = i;	
				}
			}
		}
		 
	}
	
	int min = 0;
	for(i = 0; i < j-1; i+=2){
		if(abs(arr[i]-arr[i+1]) < abs(arr[min]-arr[min+1])){
			min = i;
		}
	}
	
	int row = arr[min+1] > arr[min] ? arr[min] : arr[min+1];
	int col = arr[min+1] < arr[min] ? arr[min] : arr[min+1];
	
	int data2[col][row];
	memset(data2, 0, sizeof(data2));
	int tot = 1,x = 0,y = 0;
	data2[0][0] = data[0];
	while(tot < a){
		while(y+1 < row && !data2[x][y+1]) data2[x][++y] = data[tot++];
		while(x+1 < col && !data2[x+1][y])data2[++x][y] = data[tot++];
		while(y-1 >= 0 && !data2[x][y-1])data2[x][--y] = data[tot++];
		while(x-1 >= 0 && !data2[x-1][y])data2[--x][y] = data[tot++];
	}
	
	
	for(i = 0; i < col; i++){
		for(j = 0; j < row; j++){
			if(j > 0){
				printf(" ");
			}
			printf("%d",data2[i][j]);
		}
		printf("\n");
	} 
	
	return 0;
//	printf("%d %d",row,col);
}


