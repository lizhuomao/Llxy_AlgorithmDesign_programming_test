#include <stdio.h>
#include <string.h>
int main(){
	char c;
	scanf("%c",&c);
	getchar();
	char data[1400];
	int q = 0;
	while((data[q++] = getchar()) != '\n');
	data[q] = '\0';
	
	if(c == 'C'){
		if(q == 1){
			printf("%c",data[0]);
			return 0;
		}
		int i = 0;
		while(data[i+1] != '\0'){
			int j = i;
			while(data[++j] == data[i]);
			if(j-i != 1){
				printf("%d",j-i);	
			}
			printf("%c",data[i]);
			i = j;
		}
	} else if(c == 'D'){
		int i = 0;
		int count = 0;
		while(data[i+1] != '\0'){
			
			if(data[i] <= '9' && data[i] >= '0'){
				count = count*10 +data[i]-'0';
			}else{
				if(count != 0){
					int j;
					for(j = 0; j < count; j++){
						printf("%c",data[i]);	
					}
					count = 0;
				}else{
					printf("%c",data[i]);
				}
			}
			i++;
			
		}
	}
	return 0;

} 



