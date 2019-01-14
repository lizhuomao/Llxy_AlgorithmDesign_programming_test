#include <stdio.h>
#include <math.h> 

int main(){
	char key[10001];
	char shishu[10001];
	char zhishu[10001];
	int a,count = 0;
	scanf("%s",key);
	int i = 0, j = 0;
	while(key[i] != 'E'){
		shishu[i] = key[i];
		i++;
	}
	while(key[++i] != '\0'){
		zhishu[j++] = key[i];
	}
	shishu[i] = '\0';
	zhishu[j] = '\0';
	a = atoi(zhishu);
	i = 0;
	if(shishu[0] == '-'){
	j = 0;
		printf("-");
	}
	i = 3;
	while(shishu[i] != '\0'){
		count++;
		i++;
	}
	i = 0;
	if(a < 0){
		printf("0.");
		for(i = 0; i < -a -1; i++){
			
			printf("0");
			
		}
		i = 0;
		while(shishu[++i] != '\0'){
			if(shishu[i] != '.'){
				printf("%c",shishu[i]);
			}
		}
	}else{
		
		while(shishu[++i] != '\0'){
			if(a > 0){
				if(shishu[i] != '.'){
					printf("%c",shishu[i]);
				}
				if(a-count < 0 && 2+a == i){
					printf(".");
				}
			}else{
				printf("%c",shishu[i]);
			}
			
		}
		
		for(i = 0; i < a-count; i++){
			
			printf("0");
			
		}
		
	}
	
	
	
	return 0;
}




