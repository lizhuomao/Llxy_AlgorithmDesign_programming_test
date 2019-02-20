#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int data1[n],data2[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&data1[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d",&data2[i]);
	}
	int flag = 0;
	int q = n-1;
	while(data1[q] == data2[q]) q--;
	for(int i = 0; i < q; i++){
		//不小于 
		if(data2[i] >= data2[i+1]){
			flag = 1;
			break; 
		}
	}
	if(flag == 0){
		//为插入排序 
		printf("Insertion Sort\n");
		int number = data2[q+1];
		int index = q;
		
		int j = 0;
		while(data2[j] < number) j++;
		for(int k = q; k >= j;k--){
			data2[k+1] = data2[k];
		}
		data2[j] = number;
		
		for(int i = 0; i < n; i++){
			if(i != 0){
				printf(" ");
			}
			printf("%d",data2[i]);
		}
		
	}else{
		//为归并排序 
		printf("Merge Sort\n");
		
	} 
	 
	
	return 0;
} 
