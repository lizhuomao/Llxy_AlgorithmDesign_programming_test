#include <stdio.h>

int main(){
	char key[100010],content[100010];
	int i = 0,j = 0,shift = 0;
	while((key[i++] = getchar()) != '\n'); key[i] = '\0';
	while((content[j++] = getchar()) != '\n'); content[j] = '\0';
//	scanf("%s%s",key,content);
	for(i = 0; key[i] != '\0'; i++){
		if(key[i] == '+'){
			shift = 1;
			break;
		}
	}
	i = 0;
	for(i = 0; content[i] != '\0'; i++){
		int j = 0,zimu = 0,other = 0;
		if(shift == 1 && content[i] >= 'A' && content[i] <= 'Z'){
			printf("");
		}else{
			while(key[j] != '\0'){
				//如果是大写字母 
				if(key[j] >= 'A' && key[j] <= 'Z'){
					if(key[j] + 32 == content[i] || key[j] == content[i] ){
						zimu = 1;break;
					}
				}else if(key[j] == content[i] && (key[j] <= 'a' || key[j] >= 'z')){
					other = 1; break;
				}
				
				j++;
			}
			if(zimu == 1 || other == 1){
				printf("");
			}else{
				printf("%c",content[i]);
			}
			
			
		}
	}
	
	return 0;
}





