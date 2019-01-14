#include <stdio.h>
#include <string.h>

int main(){
	char data[1001];
	int i,number[10] = {0,1,2,3,4,5,6,7,8,9},count[10]={0};
	scanf("%s",data);
	int a;
    for(i = 0; i < strlen(data); i++){
        a = data[i]-48;
        count[a]++;
    }
	for(i = 0; i < 10; i++){
	    if(count[i] != 0){
	        printf("%d:%d\n",i,count[i]);
	    }
        // printf("%d  ",count[i]);
	}
	
	
	return 0;
}


