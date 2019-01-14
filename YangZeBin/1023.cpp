#include <stdio.h>

int main(){
	int arr[10],i,j = 0;
	char temp[51];
	for(i = 0; i < 10; i++){
		scanf("%d",&arr[i]);
	}
	i = 0;
	if(arr[0] != 0){
		while(1){
			if(arr[++i] != 0){
				temp[j++] = ('0' + i);
			
				arr[i]--;
				break;
			}	
		}
		
	}
	
	for(i = 0; i < 10; i++){
		if(arr[i] != 0){
			while(arr[i]-- != 0){
				temp[j++] = ('0' + i);
			}
		}
	}
	temp[j] = '\0';
	printf("%s\n",temp);
	
	
	return 0;
}




