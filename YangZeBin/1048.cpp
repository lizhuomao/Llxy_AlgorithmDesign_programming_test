#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	char a[110],b[110];
	scanf("%s%s",a,b);
	char c[110];
	char temp[14] = {'0','1','2','3','4','5','6','7','8','9','J','Q','K'}; 
	int alen = strlen(a);
	int blen = strlen(b); 
	int i,j;
	for(i = 0 ; i < abs(alen - blen);i++){
		c[i] = '0';
	}
	
	if(alen > blen){
		for(j = 0; j < blen;j++){
			c[i++] = b[j];
		}
	}else if(blen > alen){
		for(j = 0; j < alen; j++){
			c[i++] = a[j];
		}
	}
	c[i] = '\0';
	;
	i = 0;
	//如果a 》 b ，用c-a;
	//如果b > a, 用b - c; 
	if(alen > blen){
		for(j = 0; j < alen; j++){
			if((alen - j) % 2 == 1){
				printf("%c",temp[(c[j]-'0'+a[j]-'0')%13]);
			}else{
				printf("%c",temp[((c[j]-'0')-(a[j]-'0')+10)%10]);
			}
			
		}
	}else if(blen > alen){
		for(j = 0; j < blen; j++){
			if((blen - j) % 2 == 1){
				printf("%c",temp[(b[j]-'0'+c[j]-'0')%13]);
			}else{
				printf("%c",temp[((b[j]-'0')-(c[j]-'0')+10)%10]);
			}
			
		}
	}else if(blen = alen){
		for(j = 0; j < blen; j++){
			if((blen - j) % 2 == 1){
				printf("%c",temp[(b[j]-'0'+a[j]-'0')%13]);
			}else{
				printf("%c",temp[((b[j]-'0')-(a[j]-'0')+10)%10]);
			}
			
		}
	}
	
	
	
	
	return 0;
	
}




