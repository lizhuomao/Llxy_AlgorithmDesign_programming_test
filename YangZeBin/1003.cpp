#include <stdio.h>
#include <string.h>

int main(){
	int number,i,j = 0,pos,la = 0,ma = 0,ra = 0,cp = 0,ct = 0;
	scanf("%d",&number);
	char arr[number][110];
	for(i = 0; i < number; i++){
		scanf("%s",arr[i]);
	} 
	
	for(i = 0; i < number;i++){
		int pos = 0,la = 0,ma = 0,ra = 0,cp = 0,ct = 0,flag = 0;
		j = 0;
		while(arr[i][j] != '\0'){
			if(arr[i][j] != 'P' && arr[i][j] != 'A' && arr[i][j] != 'T'){
				flag = 1;
				break;
			}
			if(arr[i][j] == 'A'){
				if(pos == 1){
					ma++;
				}else if(pos == 2){
					ra++;
				}else if(pos == 0){
					la++;
				}
				
			}
			else if(arr[i][j] == 'P'){
				pos = 1;
				cp++;
			}
			else if(arr[i][j] == 'T'){
				pos = 2;
				ct++;
			}
			
			 
			
			j++;
		}
		
		if((la == ra && ma == 1 && cp == 1 && ct == 1) || (la == ra && ma == 2 && cp == 1 && ct == 1)|| ( ma != 0 && la * ma == ra && cp == 1 && ct == 1) ||(cp == 1 && ma == 1 && ct == 1)){
			printf("YES\n");
		}else{
		
			printf("NO\n");
		}
		
	} 
	
	 
	return 0;
}




