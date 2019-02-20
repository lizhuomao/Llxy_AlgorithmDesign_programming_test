#include <stdio.h>
#include <string.h>

int main(){
	char data[100010];
	int i = 0;
	while((data[i++] = getchar()) != '\n');
	data[i] = '\0';
	
	int count = 0;
	while(--i >= 0){
		if(data[i] >= 'a' && data[i] <= 'z' ){
			count += data[i]-'a'+1;
		}else if(data[i] >= 'A' && data[i] <= 'Z'){
			count += data[i]-'A'+1;
		}
	}
	
	int yi = 0,ling = 0;
	

	while(count >= 1){
		if(count %2 == 1){
			yi++;
		}else{
			ling++;
		}
		count = count / 2;
	}
	printf("%d %d",ling,yi);
	return 0;
} 
