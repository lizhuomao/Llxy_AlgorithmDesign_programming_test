#include <stdio.h>
#include <string.h>
int main(){
	//判断是不是回文数，是则打印退出 
	//不是，则得到相反数，进行相加，循环到第一步 
	
	char a[10010];
	char b[10010];
	char c[10010];
	scanf("%s",a);
	int q = 0;
	for(q = 0; q < 10; q++){
		int i = 0;
		int len = strlen(a);
		int nohuiwen = 0;
		for(i = 0; i < len/2; i++){
			if(a[i] != a[len-1-i]){
				nohuiwen = 1;
				
				break;
			}
		}
		if(nohuiwen == 0){
			printf("%s is a palindromic number.",a);
			return 0;
		}
		i = 0;
		//得到相反数
		for(i = 0; i < len; i++){
			b[len-1-i] = a[i];
		}
		b[len] = '\0';
		
		
		//相加 
		int len1 = len;
		int jinwei = 0;
		int flagzero = 0;
		while(--len > -1){
			
			int r = (a[len] -'0') + (b[len] - '0')+jinwei;
			if(len == 0){
				c[len+1] = r % 10+'0';
				c[len] = r / 10 + '0';
				if(r < 10) flagzero = 1;
			}else{
				c[len+1] = r % 10 + '0';
				jinwei = r / 10;
			}
		}
		c[len1+1] = '\0';
		
		//处理最前一位为0 
		if(flagzero == 1){
			for(i = 1; i <= len1+1; i++){
				c[i-1] = c[i];
			}
		}
		printf("%s + %s = %s\n",a,b,c); 
		strcpy(a,c);
		
	}
	
	
	printf("Not found in 10 iterations.");



	return 0;

} 



